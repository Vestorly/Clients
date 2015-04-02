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

/**
 *
 * NOTE: This class is auto generated by the swagger code generator program. Do not edit the class manually.
 */
class RssfeedsApi {

	function __construct($apiClient) {
	  $this->apiClient = $apiClient;
	}

  
	/**
	 * index
   *
	 * Read a list of rss feed
   * vestorly-auth, string: Authentication token (required)
   * * ids, string: Return rss feed with list of IDs provided (required)
   * 
	 * @return void
	 */

   public function index($vestorly-auth, $ids) {

  		// parse inputs
  		$resourcePath = "api/rss_feeds.json";
  		$resourcePath = str_replace("{format}", "json", $resourcePath);
  		$method = "GET";
      $queryParams = array();
      $headerParams = array();
      $formParams = array();
      $headerParams['Accept'] = '';
      $headerParams['Content-Type'] = '';

      // query params
      if($vestorly-auth !== null) {
  		  $queryParams['vestorly-auth'] = $this->apiClient->toQueryValue($vestorly-auth);
  		}// query params
      if($ids !== null) {
  		  $queryParams['ids'] = $this->apiClient->toQueryValue($ids);
  		}
      
      
      
      

      $body = $body ?: $formParams;

      if (strpos($headerParams['Content-Type'], "application/x-www-form-urlencoded") > -1) {
        $body = http_build_query($body);
      }

  		// make the API Call
  		$response = $this->apiClient->callAPI($resourcePath, $method,
  		                                      $queryParams, $body,
  		                                      $headerParams);

      if(! $response) {
        return null;
      }

  		$responseObject = $this->apiClient->deserialize($response,
  		                                                'void');
  		return $responseObject;
  }
  
	/**
	 * create
   *
	 * Create an post
   * rss_feed, string: JSON block of rss feed data (required)
   * 
	 * @return void
	 */

   public function create($rss_feed) {

  		// parse inputs
  		$resourcePath = "api/rss_feeds.json";
  		$resourcePath = str_replace("{format}", "json", $resourcePath);
  		$method = "POST";
      $queryParams = array();
      $headerParams = array();
      $formParams = array();
      $headerParams['Accept'] = '';
      $headerParams['Content-Type'] = '';

      
      
      
      
      if ($rss_feed !== null) {
        $formParams[rss_feed] = $rss_feed;
      }
      

      $body = $body ?: $formParams;

      if (strpos($headerParams['Content-Type'], "application/x-www-form-urlencoded") > -1) {
        $body = http_build_query($body);
      }

  		// make the API Call
  		$response = $this->apiClient->callAPI($resourcePath, $method,
  		                                      $queryParams, $body,
  		                                      $headerParams);

      if(! $response) {
        return null;
      }

  		$responseObject = $this->apiClient->deserialize($response,
  		                                                'void');
  		return $responseObject;
  }
  
	/**
	 * show
   *
	 * Retreive a single rss feed
   * vestorly-auth, string: Authentication token (required)
   * * id, string: Id of rss feed (required)
   * 
	 * @return void
	 */

   public function show($vestorly-auth, $id) {

  		// parse inputs
  		$resourcePath = "api/rss_feeds/{id}.json";
  		$resourcePath = str_replace("{format}", "json", $resourcePath);
  		$method = "GET";
      $queryParams = array();
      $headerParams = array();
      $formParams = array();
      $headerParams['Accept'] = '';
      $headerParams['Content-Type'] = '';

      // query params
      if($vestorly-auth !== null) {
  		  $queryParams['vestorly-auth'] = $this->apiClient->toQueryValue($vestorly-auth);
  		}
      
      // path params
      if($id !== null) {
  			$resourcePath = str_replace("{" . "id" . "}",
  			                            $this->apiClient->toPathValue($id), $resourcePath);
  		}
      
      

      $body = $body ?: $formParams;

      if (strpos($headerParams['Content-Type'], "application/x-www-form-urlencoded") > -1) {
        $body = http_build_query($body);
      }

  		// make the API Call
  		$response = $this->apiClient->callAPI($resourcePath, $method,
  		                                      $queryParams, $body,
  		                                      $headerParams);

      if(! $response) {
        return null;
      }

  		$responseObject = $this->apiClient->deserialize($response,
  		                                                'void');
  		return $responseObject;
  }
  
	/**
	 * update
   *
	 * Create an advisor
   * id, string: Id of post (required)
   * * rss_feed, string: JSON block of rss feed data (required)
   * 
	 * @return void
	 */

   public function update($id, $rss_feed) {

  		// parse inputs
  		$resourcePath = "api/rss_feeds/{id}.json";
  		$resourcePath = str_replace("{format}", "json", $resourcePath);
  		$method = "PUT";
      $queryParams = array();
      $headerParams = array();
      $formParams = array();
      $headerParams['Accept'] = '';
      $headerParams['Content-Type'] = '';

      
      
      // path params
      if($id !== null) {
  			$resourcePath = str_replace("{" . "id" . "}",
  			                            $this->apiClient->toPathValue($id), $resourcePath);
  		}
      
      if ($rss_feed !== null) {
        $formParams[rss_feed] = $rss_feed;
      }
      

      $body = $body ?: $formParams;

      if (strpos($headerParams['Content-Type'], "application/x-www-form-urlencoded") > -1) {
        $body = http_build_query($body);
      }

  		// make the API Call
  		$response = $this->apiClient->callAPI($resourcePath, $method,
  		                                      $queryParams, $body,
  		                                      $headerParams);

      if(! $response) {
        return null;
      }

  		$responseObject = $this->apiClient->deserialize($response,
  		                                                'void');
  		return $responseObject;
  }
  
	/**
	 * destroy
   *
	 * Destroy a post
   * id, string: Id of pow5 (required)
   * 
	 * @return void
	 */

   public function destroy($id) {

  		// parse inputs
  		$resourcePath = "api/rss_feeds/{id}.json";
  		$resourcePath = str_replace("{format}", "json", $resourcePath);
  		$method = "DELETE";
      $queryParams = array();
      $headerParams = array();
      $formParams = array();
      $headerParams['Accept'] = '';
      $headerParams['Content-Type'] = '';

      
      
      // path params
      if($id !== null) {
  			$resourcePath = str_replace("{" . "id" . "}",
  			                            $this->apiClient->toPathValue($id), $resourcePath);
  		}
      
      

      $body = $body ?: $formParams;

      if (strpos($headerParams['Content-Type'], "application/x-www-form-urlencoded") > -1) {
        $body = http_build_query($body);
      }

  		// make the API Call
  		$response = $this->apiClient->callAPI($resourcePath, $method,
  		                                      $queryParams, $body,
  		                                      $headerParams);

      if(! $response) {
        return null;
      }

  		$responseObject = $this->apiClient->deserialize($response,
  		                                                'void');
  		return $responseObject;
  }
  

}
