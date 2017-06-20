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


class GroupInput(object):
    """
    NOTE: This class is auto generated by the swagger code generator program.
    Do not edit the class manually.
    """
    def __init__(self, id=None, name=None, is_default=None, is_hidden=None, new_weekly_mailer_content=None, newsletter_subject=None, autopublish=None, number_articles_per_group=None, number_articles_per_newsletter=None):
        """
        GroupInput - a model defined in Swagger

        :param dict swaggerTypes: The key is attribute name
                                  and the value is attribute type.
        :param dict attributeMap: The key is attribute name
                                  and the value is json key in definition.
        """
        self.swagger_types = {
            'id': 'str',
            'name': 'str',
            'is_default': 'bool',
            'is_hidden': 'bool',
            'new_weekly_mailer_content': 'str',
            'newsletter_subject': 'str',
            'autopublish': 'bool',
            'number_articles_per_group': 'int',
            'number_articles_per_newsletter': 'int'
        }

        self.attribute_map = {
            'id': '_id',
            'name': 'name',
            'is_default': 'is_default',
            'is_hidden': 'is_hidden',
            'new_weekly_mailer_content': 'new_weekly_mailer_content',
            'newsletter_subject': 'newsletter_subject',
            'autopublish': 'autopublish',
            'number_articles_per_group': 'number_articles_per_group',
            'number_articles_per_newsletter': 'number_articles_per_newsletter'
        }

        self._id = id
        self._name = name
        self._is_default = is_default
        self._is_hidden = is_hidden
        self._new_weekly_mailer_content = new_weekly_mailer_content
        self._newsletter_subject = newsletter_subject
        self._autopublish = autopublish
        self._number_articles_per_group = number_articles_per_group
        self._number_articles_per_newsletter = number_articles_per_newsletter

    @property
    def id(self):
        """
        Gets the id of this GroupInput.

        :return: The id of this GroupInput.
        :rtype: str
        """
        return self._id

    @id.setter
    def id(self, id):
        """
        Sets the id of this GroupInput.

        :param id: The id of this GroupInput.
        :type: str
        """
        if id is None:
            raise ValueError("Invalid value for `id`, must not be `None`")

        self._id = id

    @property
    def name(self):
        """
        Gets the name of this GroupInput.

        :return: The name of this GroupInput.
        :rtype: str
        """
        return self._name

    @name.setter
    def name(self, name):
        """
        Sets the name of this GroupInput.

        :param name: The name of this GroupInput.
        :type: str
        """

        self._name = name

    @property
    def is_default(self):
        """
        Gets the is_default of this GroupInput.

        :return: The is_default of this GroupInput.
        :rtype: bool
        """
        return self._is_default

    @is_default.setter
    def is_default(self, is_default):
        """
        Sets the is_default of this GroupInput.

        :param is_default: The is_default of this GroupInput.
        :type: bool
        """

        self._is_default = is_default

    @property
    def is_hidden(self):
        """
        Gets the is_hidden of this GroupInput.

        :return: The is_hidden of this GroupInput.
        :rtype: bool
        """
        return self._is_hidden

    @is_hidden.setter
    def is_hidden(self, is_hidden):
        """
        Sets the is_hidden of this GroupInput.

        :param is_hidden: The is_hidden of this GroupInput.
        :type: bool
        """

        self._is_hidden = is_hidden

    @property
    def new_weekly_mailer_content(self):
        """
        Gets the new_weekly_mailer_content of this GroupInput.

        :return: The new_weekly_mailer_content of this GroupInput.
        :rtype: str
        """
        return self._new_weekly_mailer_content

    @new_weekly_mailer_content.setter
    def new_weekly_mailer_content(self, new_weekly_mailer_content):
        """
        Sets the new_weekly_mailer_content of this GroupInput.

        :param new_weekly_mailer_content: The new_weekly_mailer_content of this GroupInput.
        :type: str
        """

        self._new_weekly_mailer_content = new_weekly_mailer_content

    @property
    def newsletter_subject(self):
        """
        Gets the newsletter_subject of this GroupInput.

        :return: The newsletter_subject of this GroupInput.
        :rtype: str
        """
        return self._newsletter_subject

    @newsletter_subject.setter
    def newsletter_subject(self, newsletter_subject):
        """
        Sets the newsletter_subject of this GroupInput.

        :param newsletter_subject: The newsletter_subject of this GroupInput.
        :type: str
        """

        self._newsletter_subject = newsletter_subject

    @property
    def autopublish(self):
        """
        Gets the autopublish of this GroupInput.

        :return: The autopublish of this GroupInput.
        :rtype: bool
        """
        return self._autopublish

    @autopublish.setter
    def autopublish(self, autopublish):
        """
        Sets the autopublish of this GroupInput.

        :param autopublish: The autopublish of this GroupInput.
        :type: bool
        """

        self._autopublish = autopublish

    @property
    def number_articles_per_group(self):
        """
        Gets the number_articles_per_group of this GroupInput.

        :return: The number_articles_per_group of this GroupInput.
        :rtype: int
        """
        return self._number_articles_per_group

    @number_articles_per_group.setter
    def number_articles_per_group(self, number_articles_per_group):
        """
        Sets the number_articles_per_group of this GroupInput.

        :param number_articles_per_group: The number_articles_per_group of this GroupInput.
        :type: int
        """

        self._number_articles_per_group = number_articles_per_group

    @property
    def number_articles_per_newsletter(self):
        """
        Gets the number_articles_per_newsletter of this GroupInput.

        :return: The number_articles_per_newsletter of this GroupInput.
        :rtype: int
        """
        return self._number_articles_per_newsletter

    @number_articles_per_newsletter.setter
    def number_articles_per_newsletter(self, number_articles_per_newsletter):
        """
        Sets the number_articles_per_newsletter of this GroupInput.

        :param number_articles_per_newsletter: The number_articles_per_newsletter of this GroupInput.
        :type: int
        """

        self._number_articles_per_newsletter = number_articles_per_newsletter

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
        if not isinstance(other, GroupInput):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """
        Returns true if both objects are not equal
        """
        return not self == other
