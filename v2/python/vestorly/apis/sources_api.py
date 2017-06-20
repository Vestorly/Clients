# coding: utf-8

"""
    Vestorly API

    Vestorly Developers API

    OpenAPI spec version: 1.0.0
    
    Generated by: https://github.com/swagger-api/swagger-codegen.git
"""


from __future__ import absolute_import

import sys
import os
import re

# python 2 and python 3 compatibility library
from six import iteritems

from ..configuration import Configuration
from ..api_client import ApiClient


class SourcesApi(object):
    """
    NOTE: This class is auto generated by the swagger code generator program.
    Do not edit the class manually.
    Ref: https://github.com/swagger-api/swagger-codegen
    """

    def __init__(self, api_client=None):
        config = Configuration()
        if api_client:
            self.api_client = api_client
        else:
            if not config.api_client:
                config.api_client = ApiClient()
            self.api_client = config.api_client

    def create_source(self, vestorly_auth, source, **kwargs):
        """
        Create source
        This method makes a synchronous HTTP request by default. To make an
        asynchronous HTTP request, please define a `callback` function
        to be invoked when receiving the response.
        >>> def callback_function(response):
        >>>     pprint(response)
        >>>
        >>> thread = api.create_source(vestorly_auth, source, callback=callback_function)

        :param callback function: The callback function
            for asynchronous request. (optional)
        :param str vestorly_auth: Vestorly Auth Token (required)
        :param SourceInput source: Source (required)
        :param str access_token: OAuth Token
        :return: Sourceresponse
                 If the method is called asynchronously,
                 returns the request thread.
        """
        kwargs['_return_http_data_only'] = True
        if kwargs.get('callback'):
            return self.create_source_with_http_info(vestorly_auth, source, **kwargs)
        else:
            (data) = self.create_source_with_http_info(vestorly_auth, source, **kwargs)
            return data

    def create_source_with_http_info(self, vestorly_auth, source, **kwargs):
        """
        Create source
        This method makes a synchronous HTTP request by default. To make an
        asynchronous HTTP request, please define a `callback` function
        to be invoked when receiving the response.
        >>> def callback_function(response):
        >>>     pprint(response)
        >>>
        >>> thread = api.create_source_with_http_info(vestorly_auth, source, callback=callback_function)

        :param callback function: The callback function
            for asynchronous request. (optional)
        :param str vestorly_auth: Vestorly Auth Token (required)
        :param SourceInput source: Source (required)
        :param str access_token: OAuth Token
        :return: Sourceresponse
                 If the method is called asynchronously,
                 returns the request thread.
        """

        all_params = ['vestorly_auth', 'source', 'access_token']
        all_params.append('callback')
        all_params.append('_return_http_data_only')
        all_params.append('_preload_content')
        all_params.append('_request_timeout')

        params = locals()
        for key, val in iteritems(params['kwargs']):
            if key not in all_params:
                raise TypeError(
                    "Got an unexpected keyword argument '%s'"
                    " to method create_source" % key
                )
            params[key] = val
        del params['kwargs']
        # verify the required parameter 'vestorly_auth' is set
        if ('vestorly_auth' not in params) or (params['vestorly_auth'] is None):
            raise ValueError("Missing the required parameter `vestorly_auth` when calling `create_source`")
        # verify the required parameter 'source' is set
        if ('source' not in params) or (params['source'] is None):
            raise ValueError("Missing the required parameter `source` when calling `create_source`")


        collection_formats = {}

        resource_path = '/sources'.replace('{format}', 'json')
        path_params = {}

        query_params = {}
        if 'vestorly_auth' in params:
            query_params['vestorly-auth'] = params['vestorly_auth']
        if 'access_token' in params:
            query_params['access_token'] = params['access_token']

        header_params = {}

        form_params = []
        local_var_files = {}

        body_params = None
        if 'source' in params:
            body_params = params['source']
        # Authentication setting
        auth_settings = ['access_token']

        return self.api_client.call_api(resource_path, 'POST',
                                        path_params,
                                        query_params,
                                        header_params,
                                        body=body_params,
                                        post_params=form_params,
                                        files=local_var_files,
                                        response_type='Sourceresponse',
                                        auth_settings=auth_settings,
                                        callback=params.get('callback'),
                                        _return_http_data_only=params.get('_return_http_data_only'),
                                        _preload_content=params.get('_preload_content', True),
                                        _request_timeout=params.get('_request_timeout'),
                                        collection_formats=collection_formats)

    def find_sources(self, vestorly_auth, **kwargs):
        """
        Returns all sources
        This method makes a synchronous HTTP request by default. To make an
        asynchronous HTTP request, please define a `callback` function
        to be invoked when receiving the response.
        >>> def callback_function(response):
        >>>     pprint(response)
        >>>
        >>> thread = api.find_sources(vestorly_auth, callback=callback_function)

        :param callback function: The callback function
            for asynchronous request. (optional)
        :param str vestorly_auth: Vestorly Auth Token (required)
        :param str access_token: OAuth Token
        :return: Sources
                 If the method is called asynchronously,
                 returns the request thread.
        """
        kwargs['_return_http_data_only'] = True
        if kwargs.get('callback'):
            return self.find_sources_with_http_info(vestorly_auth, **kwargs)
        else:
            (data) = self.find_sources_with_http_info(vestorly_auth, **kwargs)
            return data

    def find_sources_with_http_info(self, vestorly_auth, **kwargs):
        """
        Returns all sources
        This method makes a synchronous HTTP request by default. To make an
        asynchronous HTTP request, please define a `callback` function
        to be invoked when receiving the response.
        >>> def callback_function(response):
        >>>     pprint(response)
        >>>
        >>> thread = api.find_sources_with_http_info(vestorly_auth, callback=callback_function)

        :param callback function: The callback function
            for asynchronous request. (optional)
        :param str vestorly_auth: Vestorly Auth Token (required)
        :param str access_token: OAuth Token
        :return: Sources
                 If the method is called asynchronously,
                 returns the request thread.
        """

        all_params = ['vestorly_auth', 'access_token']
        all_params.append('callback')
        all_params.append('_return_http_data_only')
        all_params.append('_preload_content')
        all_params.append('_request_timeout')

        params = locals()
        for key, val in iteritems(params['kwargs']):
            if key not in all_params:
                raise TypeError(
                    "Got an unexpected keyword argument '%s'"
                    " to method find_sources" % key
                )
            params[key] = val
        del params['kwargs']
        # verify the required parameter 'vestorly_auth' is set
        if ('vestorly_auth' not in params) or (params['vestorly_auth'] is None):
            raise ValueError("Missing the required parameter `vestorly_auth` when calling `find_sources`")


        collection_formats = {}

        resource_path = '/sources'.replace('{format}', 'json')
        path_params = {}

        query_params = {}
        if 'vestorly_auth' in params:
            query_params['vestorly-auth'] = params['vestorly_auth']
        if 'access_token' in params:
            query_params['access_token'] = params['access_token']

        header_params = {}

        form_params = []
        local_var_files = {}

        body_params = None
        # Authentication setting
        auth_settings = ['access_token']

        return self.api_client.call_api(resource_path, 'GET',
                                        path_params,
                                        query_params,
                                        header_params,
                                        body=body_params,
                                        post_params=form_params,
                                        files=local_var_files,
                                        response_type='Sources',
                                        auth_settings=auth_settings,
                                        callback=params.get('callback'),
                                        _return_http_data_only=params.get('_return_http_data_only'),
                                        _preload_content=params.get('_preload_content', True),
                                        _request_timeout=params.get('_request_timeout'),
                                        collection_formats=collection_formats)

    def get_source_by_id(self, vestorly_auth, id, **kwargs):
        """
        Get Source By ID
        This method makes a synchronous HTTP request by default. To make an
        asynchronous HTTP request, please define a `callback` function
        to be invoked when receiving the response.
        >>> def callback_function(response):
        >>>     pprint(response)
        >>>
        >>> thread = api.get_source_by_id(vestorly_auth, id, callback=callback_function)

        :param callback function: The callback function
            for asynchronous request. (optional)
        :param str vestorly_auth: Vestorly Auth Token (required)
        :param str id: ID of source to fetch (required)
        :param str access_token: OAuth Token
        :return: Sourceresponse
                 If the method is called asynchronously,
                 returns the request thread.
        """
        kwargs['_return_http_data_only'] = True
        if kwargs.get('callback'):
            return self.get_source_by_id_with_http_info(vestorly_auth, id, **kwargs)
        else:
            (data) = self.get_source_by_id_with_http_info(vestorly_auth, id, **kwargs)
            return data

    def get_source_by_id_with_http_info(self, vestorly_auth, id, **kwargs):
        """
        Get Source By ID
        This method makes a synchronous HTTP request by default. To make an
        asynchronous HTTP request, please define a `callback` function
        to be invoked when receiving the response.
        >>> def callback_function(response):
        >>>     pprint(response)
        >>>
        >>> thread = api.get_source_by_id_with_http_info(vestorly_auth, id, callback=callback_function)

        :param callback function: The callback function
            for asynchronous request. (optional)
        :param str vestorly_auth: Vestorly Auth Token (required)
        :param str id: ID of source to fetch (required)
        :param str access_token: OAuth Token
        :return: Sourceresponse
                 If the method is called asynchronously,
                 returns the request thread.
        """

        all_params = ['vestorly_auth', 'id', 'access_token']
        all_params.append('callback')
        all_params.append('_return_http_data_only')
        all_params.append('_preload_content')
        all_params.append('_request_timeout')

        params = locals()
        for key, val in iteritems(params['kwargs']):
            if key not in all_params:
                raise TypeError(
                    "Got an unexpected keyword argument '%s'"
                    " to method get_source_by_id" % key
                )
            params[key] = val
        del params['kwargs']
        # verify the required parameter 'vestorly_auth' is set
        if ('vestorly_auth' not in params) or (params['vestorly_auth'] is None):
            raise ValueError("Missing the required parameter `vestorly_auth` when calling `get_source_by_id`")
        # verify the required parameter 'id' is set
        if ('id' not in params) or (params['id'] is None):
            raise ValueError("Missing the required parameter `id` when calling `get_source_by_id`")


        collection_formats = {}

        resource_path = '/sources/{id}'.replace('{format}', 'json')
        path_params = {}
        if 'id' in params:
            path_params['id'] = params['id']

        query_params = {}
        if 'vestorly_auth' in params:
            query_params['vestorly-auth'] = params['vestorly_auth']
        if 'access_token' in params:
            query_params['access_token'] = params['access_token']

        header_params = {}

        form_params = []
        local_var_files = {}

        body_params = None
        # Authentication setting
        auth_settings = ['access_token']

        return self.api_client.call_api(resource_path, 'GET',
                                        path_params,
                                        query_params,
                                        header_params,
                                        body=body_params,
                                        post_params=form_params,
                                        files=local_var_files,
                                        response_type='Sourceresponse',
                                        auth_settings=auth_settings,
                                        callback=params.get('callback'),
                                        _return_http_data_only=params.get('_return_http_data_only'),
                                        _preload_content=params.get('_preload_content', True),
                                        _request_timeout=params.get('_request_timeout'),
                                        collection_formats=collection_formats)

    def update_source_by_id(self, vestorly_auth, id, source, **kwargs):
        """
        Update Source By ID
        This method makes a synchronous HTTP request by default. To make an
        asynchronous HTTP request, please define a `callback` function
        to be invoked when receiving the response.
        >>> def callback_function(response):
        >>>     pprint(response)
        >>>
        >>> thread = api.update_source_by_id(vestorly_auth, id, source, callback=callback_function)

        :param callback function: The callback function
            for asynchronous request. (optional)
        :param str vestorly_auth: Vestorly Auth Token (required)
        :param str id: ID of source to fetch (required)
        :param SourceInput source: Source (required)
        :param str access_token: OAuth Token
        :return: Sourceresponse
                 If the method is called asynchronously,
                 returns the request thread.
        """
        kwargs['_return_http_data_only'] = True
        if kwargs.get('callback'):
            return self.update_source_by_id_with_http_info(vestorly_auth, id, source, **kwargs)
        else:
            (data) = self.update_source_by_id_with_http_info(vestorly_auth, id, source, **kwargs)
            return data

    def update_source_by_id_with_http_info(self, vestorly_auth, id, source, **kwargs):
        """
        Update Source By ID
        This method makes a synchronous HTTP request by default. To make an
        asynchronous HTTP request, please define a `callback` function
        to be invoked when receiving the response.
        >>> def callback_function(response):
        >>>     pprint(response)
        >>>
        >>> thread = api.update_source_by_id_with_http_info(vestorly_auth, id, source, callback=callback_function)

        :param callback function: The callback function
            for asynchronous request. (optional)
        :param str vestorly_auth: Vestorly Auth Token (required)
        :param str id: ID of source to fetch (required)
        :param SourceInput source: Source (required)
        :param str access_token: OAuth Token
        :return: Sourceresponse
                 If the method is called asynchronously,
                 returns the request thread.
        """

        all_params = ['vestorly_auth', 'id', 'source', 'access_token']
        all_params.append('callback')
        all_params.append('_return_http_data_only')
        all_params.append('_preload_content')
        all_params.append('_request_timeout')

        params = locals()
        for key, val in iteritems(params['kwargs']):
            if key not in all_params:
                raise TypeError(
                    "Got an unexpected keyword argument '%s'"
                    " to method update_source_by_id" % key
                )
            params[key] = val
        del params['kwargs']
        # verify the required parameter 'vestorly_auth' is set
        if ('vestorly_auth' not in params) or (params['vestorly_auth'] is None):
            raise ValueError("Missing the required parameter `vestorly_auth` when calling `update_source_by_id`")
        # verify the required parameter 'id' is set
        if ('id' not in params) or (params['id'] is None):
            raise ValueError("Missing the required parameter `id` when calling `update_source_by_id`")
        # verify the required parameter 'source' is set
        if ('source' not in params) or (params['source'] is None):
            raise ValueError("Missing the required parameter `source` when calling `update_source_by_id`")


        collection_formats = {}

        resource_path = '/sources/{id}'.replace('{format}', 'json')
        path_params = {}
        if 'id' in params:
            path_params['id'] = params['id']

        query_params = {}
        if 'vestorly_auth' in params:
            query_params['vestorly-auth'] = params['vestorly_auth']
        if 'access_token' in params:
            query_params['access_token'] = params['access_token']

        header_params = {}

        form_params = []
        local_var_files = {}

        body_params = None
        if 'source' in params:
            body_params = params['source']
        # Authentication setting
        auth_settings = ['access_token']

        return self.api_client.call_api(resource_path, 'PUT',
                                        path_params,
                                        query_params,
                                        header_params,
                                        body=body_params,
                                        post_params=form_params,
                                        files=local_var_files,
                                        response_type='Sourceresponse',
                                        auth_settings=auth_settings,
                                        callback=params.get('callback'),
                                        _return_http_data_only=params.get('_return_http_data_only'),
                                        _preload_content=params.get('_preload_content', True),
                                        _request_timeout=params.get('_request_timeout'),
                                        collection_formats=collection_formats)
