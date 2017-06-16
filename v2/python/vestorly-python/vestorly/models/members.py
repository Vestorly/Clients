# coding: utf-8

"""
    Vestorly API

    Vestorly Developers API

    OpenAPI spec version: 1.0.0
    
    Generated by: https://github.com/swagger-api/swagger-codegen.git
"""


from pprint import pformat
from six import iteritems
import re


class Members(object):
    """
    NOTE: This class is auto generated by the swagger code generator program.
    Do not edit the class manually.
    """
    def __init__(self, members=None, more_results=None, meta=None):
        """
        Members - a model defined in Swagger

        :param dict swaggerTypes: The key is attribute name
                                  and the value is attribute type.
        :param dict attributeMap: The key is attribute name
                                  and the value is json key in definition.
        """
        self.swagger_types = {
            'members': 'list[Member]',
            'more_results': 'bool',
            'meta': 'Meta'
        }

        self.attribute_map = {
            'members': 'members',
            'more_results': 'more_results',
            'meta': 'meta'
        }

        self._members = members
        self._more_results = more_results
        self._meta = meta

    @property
    def members(self):
        """
        Gets the members of this Members.

        :return: The members of this Members.
        :rtype: list[Member]
        """
        return self._members

    @members.setter
    def members(self, members):
        """
        Sets the members of this Members.

        :param members: The members of this Members.
        :type: list[Member]
        """

        self._members = members

    @property
    def more_results(self):
        """
        Gets the more_results of this Members.

        :return: The more_results of this Members.
        :rtype: bool
        """
        return self._more_results

    @more_results.setter
    def more_results(self, more_results):
        """
        Sets the more_results of this Members.

        :param more_results: The more_results of this Members.
        :type: bool
        """

        self._more_results = more_results

    @property
    def meta(self):
        """
        Gets the meta of this Members.

        :return: The meta of this Members.
        :rtype: Meta
        """
        return self._meta

    @meta.setter
    def meta(self, meta):
        """
        Sets the meta of this Members.

        :param meta: The meta of this Members.
        :type: Meta
        """

        self._meta = meta

    def to_dict(self):
        """
        Returns the model properties as a dict
        """
        result = {}

        for attr, _ in iteritems(self.swagger_types):
            value = getattr(self, attr)
            if isinstance(value, list):
                result[attr] = list(map(
                    lambda x: x.to_dict() if hasattr(x, "to_dict") else x,
                    value
                ))
            elif hasattr(value, "to_dict"):
                result[attr] = value.to_dict()
            elif isinstance(value, dict):
                result[attr] = dict(map(
                    lambda item: (item[0], item[1].to_dict())
                    if hasattr(item[1], "to_dict") else item,
                    value.items()
                ))
            else:
                result[attr] = value

        return result

    def to_str(self):
        """
        Returns the string representation of the model
        """
        return pformat(self.to_dict())

    def __repr__(self):
        """
        For `print` and `pprint`
        """
        return self.to_str()

    def __eq__(self, other):
        """
        Returns true if both objects are equal
        """
        if not isinstance(other, Members):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """
        Returns true if both objects are not equal
        """
        return not self == other
