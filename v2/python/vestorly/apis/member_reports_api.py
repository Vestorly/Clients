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


class MemberReportsApi(object):
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

    def find_member_reports(self, vestorly_auth, **kwargs):
        """
        Returns all member reports
        This method makes a synchronous HTTP request by default. To make an
        asynchronous HTTP request, please define a `callback` function
        to be invoked when receiving the response.
        >>> def callback_function(response):
        >>>     pprint(response)
        >>>
        >>> thread = api.find_member_reports(vestorly_auth, callback=callback_function)

        :param callback function: The callback function
            for asynchronous request. (optional)
        :param str vestorly_auth: Vestorly Auth Token (required)
        :param str access_token: OAuth Token
        :return: MemberReports
                 If the method is called asynchronously,
                 returns the request thread.
        """
        kwargs['_return_http_data_only'] = True
        if kwargs.get('callback'):
            return self.find_member_reports_with_http_info(vestorly_auth, **kwargs)
        else:
            (data) = self.find_member_reports_with_http_info(vestorly_auth, **kwargs)
            return data

    def find_member_reports_with_http_info(self, vestorly_auth, **kwargs):
        """
        Returns all member reports
        This method makes a synchronous HTTP request by default. To make an
        asynchronous HTTP request, please define a `callback` function
        to be invoked when receiving the response.
        >>> def callback_function(response):
        >>>     pprint(response)
        >>>
        >>> thread = api.find_member_reports_with_http_info(vestorly_auth, callback=callback_function)

        :param callback function: The callback function
            for asynchronous request. (optional)
        :param str vestorly_auth: Vestorly Auth Token (required)
        :param str access_token: OAuth Token
        :return: MemberReports
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
                    " to method find_member_reports" % key
                )
            params[key] = val
        del params['kwargs']
        # verify the required parameter 'vestorly_auth' is set
        if ('vestorly_auth' not in params) or (params['vestorly_auth'] is None):
            raise ValueError("Missing the required parameter `vestorly_auth` when calling `find_member_reports`")


        collection_formats = {}

        resource_path = '/member_reports'.replace('{format}', 'json')
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
                                        response_type='MemberReports',
                                        auth_settings=auth_settings,
                                        callback=params.get('callback'),
                                        _return_http_data_only=params.get('_return_http_data_only'),
                                        _preload_content=params.get('_preload_content', True),
                                        _request_timeout=params.get('_request_timeout'),
                                        collection_formats=collection_formats)
