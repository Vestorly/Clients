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


class Session(object):
    """
    NOTE: This class is auto generated by the swagger code generator program.
    Do not edit the class manually.
    """
    def __init__(self, id=None, vestorly_auth=None, new_user=None, current_user=None, settings=None):
        """
        Session - a model defined in Swagger

        :param dict swaggerTypes: The key is attribute name
                                  and the value is attribute type.
        :param dict attributeMap: The key is attribute name
                                  and the value is json key in definition.
        """
        self.swagger_types = {
            'id': 'str',
            'vestorly_auth': 'str',
            'new_user': 'bool',
            'current_user': 'User',
            'settings': 'Settings'
        }

        self.attribute_map = {
            'id': '_id',
            'vestorly_auth': 'vestorly-auth',
            'new_user': 'new_user',
            'current_user': 'current_user',
            'settings': 'settings'
        }

        self._id = id
        self._vestorly_auth = vestorly_auth
        self._new_user = new_user
        self._current_user = current_user
        self._settings = settings

    @property
    def id(self):
        """
        Gets the id of this Session.

        :return: The id of this Session.
        :rtype: str
        """
        return self._id

    @id.setter
    def id(self, id):
        """
        Sets the id of this Session.

        :param id: The id of this Session.
        :type: str
        """

        self._id = id

    @property
    def vestorly_auth(self):
        """
        Gets the vestorly_auth of this Session.

        :return: The vestorly_auth of this Session.
        :rtype: str
        """
        return self._vestorly_auth

    @vestorly_auth.setter
    def vestorly_auth(self, vestorly_auth):
        """
        Sets the vestorly_auth of this Session.

        :param vestorly_auth: The vestorly_auth of this Session.
        :type: str
        """

        self._vestorly_auth = vestorly_auth

    @property
    def new_user(self):
        """
        Gets the new_user of this Session.

        :return: The new_user of this Session.
        :rtype: bool
        """
        return self._new_user

    @new_user.setter
    def new_user(self, new_user):
        """
        Sets the new_user of this Session.

        :param new_user: The new_user of this Session.
        :type: bool
        """

        self._new_user = new_user

    @property
    def current_user(self):
        """
        Gets the current_user of this Session.

        :return: The current_user of this Session.
        :rtype: User
        """
        return self._current_user

    @current_user.setter
    def current_user(self, current_user):
        """
        Sets the current_user of this Session.

        :param current_user: The current_user of this Session.
        :type: User
        """

        self._current_user = current_user

    @property
    def settings(self):
        """
        Gets the settings of this Session.

        :return: The settings of this Session.
        :rtype: Settings
        """
        return self._settings

    @settings.setter
    def settings(self, settings):
        """
        Sets the settings of this Session.

        :param settings: The settings of this Session.
        :type: Settings
        """

        self._settings = settings

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
        if not isinstance(other, Session):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """
        Returns true if both objects are not equal
        """
        return not self == other
