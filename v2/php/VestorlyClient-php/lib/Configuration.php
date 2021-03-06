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

class Configuration {

  public static $PATCH = "PATCH";
  public static $POST = "POST";
  public static $GET = "GET";
  public static $PUT = "PUT";
  public static $DELETE = "DELETE";

  // authentication setting
  public static $apiKey = array();
  public static $apiKeyPrefix = array();
  public static $username = '';
  public static $password = '';

  // an instance of APIClient
  public static $apiClient;

 /*
  *  manually initalize  API client
  */
  public static function init() {
    if (self::$apiClient === null)
      self::$apiClient = new APIClient();
  }

}

