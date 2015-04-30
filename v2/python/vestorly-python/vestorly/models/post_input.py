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

class PostInput(object):
    """NOTE: This class is auto generated by the swagger code generator program.
    Do not edit the class manually."""


    def __init__(self):
        """
        Attributes:
          swaggerTypes (dict): The key is attribute name and the value is attribute type.
          attributeMap (dict): The key is attribute name and the value is json key in definition.
        """
        self.swaggerTypes = {
            
            'title': 'str',
            
            
            'post_date': 'str',
            
            
            'body': 'str',
            
            
            'comment': 'str',
            
            
            'client_only': 'bool',
            
            
            'attachment': 'str',
            
            
            'video': 'str',
            
            
            'img': 'str',
            
            
            'image_url': 'str',
            
            
            'img_compressed': 'bool',
            
            
            'img_changed': 'bool',
            
            
            'topic': 'str'
            
        }

        self.attributeMap = {
            
            'title': 'title',
            
            'post_date': 'post_date',
            
            'body': 'body',
            
            'comment': 'comment',
            
            'client_only': 'client_only',
            
            'attachment': 'attachment',
            
            'video': 'video',
            
            'img': 'img',
            
            'image_url': 'image_url',
            
            'img_compressed': 'img_compressed',
            
            'img_changed': 'img_changed',
            
            'topic': 'topic'
            
        }

        
        
        self.title = None # str
        
        
        self.post_date = None # str
        
        
        self.body = None # str
        
        
        self.comment = None # str
        
        
        self.client_only = None # bool
        
        
        self.attachment = None # str
        
        
        self.video = None # str
        
        
        self.img = None # str
        
        
        self.image_url = None # str
        
        
        self.img_compressed = None # bool
        
        
        self.img_changed = None # bool
        
        
        self.topic = None # str
        
