#!/usr/bin/env python
# coding: utf-8

"""
SessionsApi.py
Copyright 2015 Reverb Technologies, Inc.

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.

NOTE: This class is auto generated by the swagger code generator program. Do not edit the class manually.
"""
import sys
import os
import urllib

from models import *


class SessionsApi(object):

    def __init__(self, apiClient):
      self.apiClient = apiClient

    
    
    def login(self, **kwargs):
        """

        Args:
            
            username, str: Username in the vestorly platform (required)
            
            
            password, str: Password in Vestorly Platform (required)
            
            
        
        Returns: Session
        """

        allParams = ['username', 'password']

        params = locals()
        for (key, val) in params['kwargs'].iteritems():
            if key not in allParams:
                raise TypeError("Got an unexpected keyword argument '%s' to method login" % key)
            params[key] = val
        del params['kwargs']

        resourcePath = '/sessions'
        resourcePath = resourcePath.replace('{format}', 'json')
        method = 'POST'

        queryParams = {}
        headerParams = {}
        formParams = {}
        files = {}
        bodyParam = None

        accepts = []
        headerParams['Accept'] = ', '.join(accepts)

        content_types = ['application/x-www-form-urlencoded', ]
        headerParams['Content-Type'] = content_types[0] if len(content_types) > 0 else 'application/json'

        

        

        

        
        if ('username' in params):
            formParams['username'] = params['username']
        
        if ('password' in params):
            formParams['password'] = params['password']
        

        

        postData = (formParams if formParams else bodyParam)

        response = self.apiClient.callAPI(resourcePath, method, queryParams,
                                          postData, headerParams, files=files)

        
        if not response:
            return None

        responseObject = self.apiClient.deserialize(response, 'Session')
        return responseObject
        
        
        
    
    def logout(self, **kwargs):
        """

        Args:
            
            vestorly_auth, str: Authenication token (required)
            
            
        
        Returns: Session
        """

        allParams = ['vestorly_auth']

        params = locals()
        for (key, val) in params['kwargs'].iteritems():
            if key not in allParams:
                raise TypeError("Got an unexpected keyword argument '%s' to method logout" % key)
            params[key] = val
        del params['kwargs']

        resourcePath = '/sessions/{id}'
        resourcePath = resourcePath.replace('{format}', 'json')
        method = 'DELETE'

        queryParams = {}
        headerParams = {}
        formParams = {}
        files = {}
        bodyParam = None

        accepts = []
        headerParams['Accept'] = ', '.join(accepts)

        content_types = ['application/x-www-form-urlencoded', ]
        headerParams['Content-Type'] = content_types[0] if len(content_types) > 0 else 'application/json'

        

        

        

        
        if ('vestorly_auth' in params):
            formParams['vestorly-auth'] = params['vestorly_auth']
        

        

        postData = (formParams if formParams else bodyParam)

        response = self.apiClient.callAPI(resourcePath, method, queryParams,
                                          postData, headerParams, files=files)

        
        if not response:
            return None

        responseObject = self.apiClient.deserialize(response, 'Session')
        return responseObject
        
        
        
    

