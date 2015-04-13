#!/usr/bin/env python
# coding: utf-8

"""
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
"""

class Article(object):
    """NOTE: This class is auto generated by the swagger code generator program.
    Do not edit the class manually."""


    def __init__(self):
        """
        Attributes:
          swaggerTypes (dict): The key is attribute name and the value is attribute type.
          attributeMap (dict): The key is attribute name and the value is json key in definition.
        """
        self.swaggerTypes = {
            
            '_id': 'str',
            
            
            'url': 'str',
            
            
            'title': 'str',
            
            
            'open_calais_topics': 'str',
            
            
            'open_calais_keywords': 'str',
            
            
            'categories': 'str',
            
            
            'summary': 'str',
            
            
            'unparsed_html': 'str',
            
            
            'parsed_html': 'str',
            
            
            'content': 'str',
            
            
            'vestorly_topics': 'str',
            
            
            'override_topic': 'str',
            
            
            'published_at': 'datetime',
            
            
            'original_image_url': 'str',
            
            
            'small_image_url': 'str',
            
            
            'large_image_url': 'str',
            
            
            'img': 'str',
            
            
            'webpage_mobile_image_url': 'str',
            
            
            'webpage_tablet_image_url': 'str',
            
            
            'rss_feed_url': 'str',
            
            
            'rss_feed_category': 'str',
            
            
            'rss_feed_logo_url': 'str',
            
            
            'needs_sanitize': 'bool',
            
            
            'is_responsive': 'bool',
            
            
            'is_proxy_needed': 'bool',
            
            
            'is_mobile_proxy_needed': 'bool',
            
            
            'is_working_url': 'bool'
            
        }

        self.attributeMap = {
            
            '_id': '_id',
            
            'url': 'url',
            
            'title': 'title',
            
            'open_calais_topics': 'open_calais_topics',
            
            'open_calais_keywords': 'open_calais_keywords',
            
            'categories': 'categories',
            
            'summary': 'summary',
            
            'unparsed_html': 'unparsed_html',
            
            'parsed_html': 'parsed_html',
            
            'content': 'content',
            
            'vestorly_topics': 'vestorly_topics',
            
            'override_topic': 'override_topic',
            
            'published_at': 'published_at',
            
            'original_image_url': 'original_image_url',
            
            'small_image_url': 'small_image_url',
            
            'large_image_url': 'large_image_url',
            
            'img': 'img',
            
            'webpage_mobile_image_url': 'webpage_mobile_image_url',
            
            'webpage_tablet_image_url': 'webpage_tablet_image_url',
            
            'rss_feed_url': 'rss_feed_url',
            
            'rss_feed_category': 'rss_feed_category',
            
            'rss_feed_logo_url': 'rss_feed_logo_url',
            
            'needs_sanitize': 'needs_sanitize',
            
            'is_responsive': 'is_responsive',
            
            'is_proxy_needed': 'is_proxy_needed',
            
            'is_mobile_proxy_needed': 'is_mobile_proxy_needed',
            
            'is_working_url': 'is_working_url'
            
        }

        
        #Id of object
        
        self._id = None # str
        
        #URL of the article
        
        self.url = None # str
        
        #Title of the article
        
        self.title = None # str
        
        #Open calcais optics
        
        self.open_calais_topics = None # str
        
        #Open calais keywords
        
        self.open_calais_keywords = None # str
        
        #Categories of article
        
        self.categories = None # str
        
        #Summary of article
        
        self.summary = None # str
        
        #Unparsed HTML
        
        self.unparsed_html = None # str
        
        #Parsed HTML
        
        self.parsed_html = None # str
        
        #Content of article
        
        self.content = None # str
        
        #Vestorly topics
        
        self.vestorly_topics = None # str
        
        #Override topics
        
        self.override_topic = None # str
        
        #Article published at time
        
        self.published_at = None # datetime
        
        #Original image url
        
        self.original_image_url = None # str
        
        #Small image url
        
        self.small_image_url = None # str
        
        #Large image url
        
        self.large_image_url = None # str
        
        #Image
        
        self.img = None # str
        
        #Webpage mobile url
        
        self.webpage_mobile_image_url = None # str
        
        #Webpage tablet url
        
        self.webpage_tablet_image_url = None # str
        
        #Article URL
        
        self.rss_feed_url = None # str
        
        #Article category
        
        self.rss_feed_category = None # str
        
        #Article logo
        
        self.rss_feed_logo_url = None # str
        
        #Does this article need sanitizing?
        
        self.needs_sanitize = None # bool
        
        #Is this article responsive
        
        self.is_responsive = None # bool
        
        #Is a proxy used for this article
        
        self.is_proxy_needed = None # bool
        
        #Is mobile proxying needed
        
        self.is_mobile_proxy_needed = None # bool
        
        #Is working url?
        
        self.is_working_url = None # bool
        
