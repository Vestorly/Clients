<?php
/**
 *  Copyright 2015 Reverb Technologies, Inc.
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

namespace VestorlyClient;

class APIClient {

  public static $PATCH = "PATCH";
  public static $POST = "POST";
  public static $GET = "GET";
  public static $PUT = "PUT";
  public static $DELETE = "DELETE";
  
  private static $default_header = array();

  /*
   * @var string timeout (second) of the HTTP request, by default set to 0, no timeout
   */
  protected $curl_timeout = 0;

  /*
   * @var string user agent of the HTTP request, set to "PHP-Swagger" by default
   */
  protected $user_agent = "PHP-Swagger";

  /**
   * @param string $host Base url of the API server (optional)
   */
  function __construct($host = null) {
    if ($host === null) {
      $this->host = 'https://staging.vestorly.com/api/v2';
    } else {
      $this->host = $host;
    }
  }

  /**
   * add default header 
   *
   * @param string $header_name header name (e.g. Token)
   * @param string $header_value header value (e.g. 1z8wp3)
   */
  public function addDefaultHeader($header_name, $header_value) {
    if (!is_string($header_name)) 
      throw new \InvalidArgumentException('Header name must be a string.');

    self::$default_header[$header_name] =  $header_value;
  }

  /**
   * get the default header 
   *
   * @return array default header
   */
  public function getDefaultHeader() {
    return self::$default_header;
  }

  /**
   * delete the default header based on header name
   *
   * @param string $header_name header name (e.g. Token)
   */
  public function deleteDefaultHeader($header_name) {
    unset(self::$default_header[$header_name]);
  }

  /**
   * set the user agent of the api client
   *
   *  @param string $user_agent the user agent of the api client
   */
  public function setUserAgent($user_agent) {
    if (!is_string($user_agent))
      throw new \InvalidArgumentException('User-agent must be a string.');

    $this->user_agent= $user_agent;
  }

  /**
   * get the user agent of the api client
   * 
   * @return string user agent
   */
  public function getUserAgent($user_agent) {
    return $this->user_agent;
  }

  /**
   * set the HTTP timeout value
   *
   * @param integer $seconds Number of seconds before timing out [set to 0 for no timeout]
   */
  public function setTimeout($seconds) {
    if (!is_numeric($seconds) || $seconds < 0)
      throw new \InvalidArgumentException('Timeout value must be numeric and a non-negative number.');

    $this->curl_timeout = $seconds;
  }

  /**
   * get the HTTP timeout value
   *
   * @return string HTTP timeout value
   */
  public function getTimeout() {
    return $this->curl_timeout;
  }


  /**
   * Get API key (with prefix if set)
   * @param string key name
   * @return string API key with the prefix
   */
  public function getApiKeyWithPrefix($apiKey) {
    if (isset(Configuration::$apiKeyPrefix[$apiKey])) {
      return Configuration::$apiKeyPrefix[$apiKey]." ".Configuration::$apiKey[$apiKey];
    } else if (isset(Configuration::$apiKey[$apiKey])) {
      return Configuration::$apiKey[$apiKey];
    } else {
      return;
    }
  }

  /**
   * update hearder and query param based on authentication setting
   * 
   * @param array $headerParams header parameters (by ref)
   * @param array $queryParams query parameters (by ref)
   * @param array $authSettings array of authentication scheme (e.g ['api_key'])
   */
  public function updateParamsForAuth(&$headerParams, &$queryParams, $authSettings)
  {
    if (count($authSettings) == 0)
      return;

    // one endpoint can have more than 1 auth settings
    foreach($authSettings as $auth) {
      // determine which one to use
      switch($auth) {
        
        default:
          //TODO show warning about security definition not found
      }
    }
  }
  
  /**
   * @param string $resourcePath path to method endpoint
   * @param string $method method to call
   * @param array $queryParams parameters to be place in query URL
   * @param array $postData parameters to be placed in POST body
   * @param array $headerParams parameters to be place in request header
   * @return mixed
   */
  public function callAPI($resourcePath, $method, $queryParams, $postData,
    $headerParams, $authSettings) {

    $headers = array();

    # determine authentication setting
    $this->updateParamsForAuth($headerParams, $queryParams, $authSettings);

    # construct the http header
    if ($headerParams != null) {
      # add default header
      $headerParams = array_merge((array)self::$default_header, $headerParams);

      foreach ($headerParams as $key => $val) {
        $headers[] = "$key: $val";
      }
    }

    // form data
    if ($postData and in_array('Content-Type: application/x-www-form-urlencoded', $headers)) {
      $postData = http_build_query($postData);
    }
    else if ((is_object($postData) or is_array($postData)) and !in_array('Content-Type: multipart/form-data', $headers)) { // json model
      $postData = json_encode($this->sanitizeForSerialization($postData));
    }

    $url = $this->host . $resourcePath;

    $curl = curl_init();
    // set timeout, if needed
    if ($this->curl_timeout != 0) {
      curl_setopt($curl, CURLOPT_TIMEOUT, $this->curl_timeout);
    }
    // return the result on success, rather than just TRUE
    curl_setopt($curl, CURLOPT_RETURNTRANSFER, true);

    curl_setopt($curl, CURLOPT_HTTPHEADER, $headers);

    if (! empty($queryParams)) {
      $url = ($url . '?' . http_build_query($queryParams));
    }

    if ($method == self::$POST) {
      curl_setopt($curl, CURLOPT_POST, true);
      curl_setopt($curl, CURLOPT_POSTFIELDS, $postData);
    } else if ($method == self::$PATCH) {
      curl_setopt($curl, CURLOPT_CUSTOMREQUEST, "PATCH");
      curl_setopt($curl, CURLOPT_POSTFIELDS, $postData);
    } else if ($method == self::$PUT) {
      curl_setopt($curl, CURLOPT_CUSTOMREQUEST, "PUT");
      curl_setopt($curl, CURLOPT_POSTFIELDS, $postData);
    } else if ($method == self::$DELETE) {
      curl_setopt($curl, CURLOPT_CUSTOMREQUEST, "DELETE");
      curl_setopt($curl, CURLOPT_POSTFIELDS, $postData);
    } else if ($method != self::$GET) {
      throw new APIClientException('Method ' . $method . ' is not recognized.');
    }
    curl_setopt($curl, CURLOPT_URL, $url);

    // Set user agent
    curl_setopt($curl, CURLOPT_USERAGENT, $this->user_agent);

    // Make the request
    $response = curl_exec($curl);
    $response_info = curl_getinfo($curl);

    // Handle the response
    if ($response_info['http_code'] == 0) {
      throw new APIClientException("TIMEOUT: api call to " . $url .
        " took more than 5s to return", 0, $response_info, $response);
    } else if ($response_info['http_code'] >= 200 && $response_info['http_code'] <= 299 ) {
      $data = json_decode($response);
      if (json_last_error() > 0) { // if response is a string
        $data = $response;
      }
    } else if ($response_info['http_code'] == 401) {
      throw new APIClientException("Unauthorized API request to " . $url .
          ": " . serialize($response), 0, $response_info, $response);
    } else if ($response_info['http_code'] == 404) {
      $data = null;
    } else {
      throw new APIClientException("Can't connect to the api: " . $url .
        " response code: " .
        $response_info['http_code'], 0, $response_info, $response);
    }
    return $data;
  }

  /**
   * Build a JSON POST object
   */
  protected function sanitizeForSerialization($data)
  {
    if (is_scalar($data) || null === $data) {
      $sanitized = $data;
    } else if ($data instanceof \DateTime) {
      $sanitized = $data->format(\DateTime::ISO8601);
    } else if (is_array($data)) {
      foreach ($data as $property => $value) {
        $data[$property] = $this->sanitizeForSerialization($value);
      }
      $sanitized = $data;
    } else if (is_object($data)) {
      $values = array();
      foreach (array_keys($data::$swaggerTypes) as $property) {
        $values[$data::$attributeMap[$property]] = $this->sanitizeForSerialization($data->$property);
      }
      $sanitized = $values;
    } else {
      $sanitized = (string)$data;
    }

    return $sanitized;
  }

  /**
   * Take value and turn it into a string suitable for inclusion in
   * the path, by url-encoding.
   * @param string $value a string which will be part of the path
   * @return string the serialized object
   */
  public static function toPathValue($value) {
      return rawurlencode(self::toString($value));
  }

  /**
   * Take value and turn it into a string suitable for inclusion in
   * the query, by imploding comma-separated if it's an object.
   * If it's a string, pass through unchanged. It will be url-encoded
   * later.
   * @param object $object an object to be serialized to a string
   * @return string the serialized object
   */
  public static function toQueryValue($object) {
        if (is_array($object)) {
            return implode(',', $object);
        } else {
            return self::toString($object);
        }
  }

  /**
   * Take value and turn it into a string suitable for inclusion in
   * the header. If it's a string, pass through unchanged
   * If it's a datetime object, format it in ISO8601
   * @param string $value a string which will be part of the header
   * @return string the header string
   */
  public static function toHeaderValue($value) {
      return self::toString($value);
  }

  /**
   * Take value and turn it into a string suitable for inclusion in
   * the http body (form parameter). If it's a string, pass through unchanged
   * If it's a datetime object, format it in ISO8601
   * @param string $value the value of the form parameter
   * @return string the form string
   */
  public static function toFormValue($value) {
      return self::toString($value);
  }

  /**
   * Take value and turn it into a string suitable for inclusion in
   * the parameter. If it's a string, pass through unchanged
   * If it's a datetime object, format it in ISO8601
   * @param string $value the value of the parameter
   * @return string the header string
   */
  public static function toString($value) {
    if ($value instanceof \DateTime) { // datetime in ISO8601 format
      return $value->format(\DateTime::ISO8601);
    }
    else {
      return $value;
    }
   }

  /**
   * Deserialize a JSON string into an object
   *
   * @param object $object object or primitive to be deserialized
   * @param string $class class name is passed as a string
   * @return object an instance of $class
   */
  public static function deserialize($data, $class)
  {
    if (null === $data) {
      $deserialized = null;
    } elseif (substr($class, 0, 4) == 'map[') {
      $inner = substr($class, 4, -1);
      $values = array();
      if(strrpos($inner, ",") !== false) {
        $subClass_array = explode(',', $inner, 2);
        $subClass = $subClass_array[1];
        foreach ($data as $key => $value) {
          $values[] = array($key => self::deserialize($value, $subClass));
        }        
      }
      $deserialized = $values;
    } elseif (strcasecmp(substr($class, 0, 6),'array[') == 0) {
      $subClass = substr($class, 6, -1);
      $values = array();
      foreach ($data as $key => $value) {
        $values[] = self::deserialize($value, $subClass);
      }
      $deserialized = $values;
    } elseif ($class == 'DateTime') {
      $deserialized = new \DateTime($data);
    } elseif (in_array($class, array('string', 'int', 'float', 'double', 'boolean'))) {
      settype($data, $class);
      $deserialized = $data;
    } else {
      $class = "VestorlyClient\\models\\".$class;
      $instance = new $class();
      foreach ($instance::$swaggerTypes as $property => $type) {
        $original_property_name = $instance::$attributeMap[$property];
        if (isset($original_property_name) && isset($data->$original_property_name)) {
          $instance->$property = self::deserialize($data->$original_property_name, $type);
        }
      }
      $deserialized = $instance;
    }

    return $deserialized;
  }

  /*
   * return the header 'Accept' based on an array of Accept provided
   *
   * @param array[string] $accept Array of header
   * @return string Accept (e.g. application/json)
   */
  public static function selectHeaderAccept($accept) {
    if (count($accept) === 0 or (count($accept) === 1 and $accept[0] === '')) {
      return NULL;
    } elseif (preg_grep("/application\/json/i", $accept)) {
      return 'application/json';
    } else {
      return implode(',', $accept);
    }
  }

  /*
   * return the content type based on an array of content-type provided
   *
   * @param array[string] content_type_array Array fo content-type
   * @return string Content-Type (e.g. application/json)
   */
  public static function selectHeaderContentType($content_type) {
    if (count($content_type) === 0 or (count($content_type) === 1 and $content_type[0] === '')) {
      return 'application/json';
    } elseif (preg_grep("/application\/json/i", $content_type)) {
      return 'application/json';
    } else {
      return implode(',', $content_type);
    }
  }

}

