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


class MemberEvents(object):
    """
    NOTE: This class is auto generated by the swagger code generator program.
    Do not edit the class manually.
    """
    def __init__(self, members=None, member_events=None):
        """
        MemberEvents - a model defined in Swagger

        :param dict swaggerTypes: The key is attribute name
                                  and the value is attribute type.
        :param dict attributeMap: The key is attribute name
                                  and the value is json key in definition.
        """
        self.swagger_types = {
            'members': 'list[TruncatedMember]',
            'member_events': 'list[MemberEvent]'
        }

        self.attribute_map = {
            'members': 'members',
            'member_events': 'member_events'
        }

        self._members = members
        self._member_events = member_events

    @property
    def members(self):
        """
        Gets the members of this MemberEvents.

        :return: The members of this MemberEvents.
        :rtype: list[TruncatedMember]
        """
        return self._members

    @members.setter
    def members(self, members):
        """
        Sets the members of this MemberEvents.

        :param members: The members of this MemberEvents.
        :type: list[TruncatedMember]
        """

        self._members = members

    @property
    def member_events(self):
        """
        Gets the member_events of this MemberEvents.

        :return: The member_events of this MemberEvents.
        :rtype: list[MemberEvent]
        """
        return self._member_events

    @member_events.setter
    def member_events(self, member_events):
        """
        Sets the member_events of this MemberEvents.

        :param member_events: The member_events of this MemberEvents.
        :type: list[MemberEvent]
        """

        self._member_events = member_events

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
        if not isinstance(other, MemberEvents):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """
        Returns true if both objects are not equal
        """
        return not self == other
