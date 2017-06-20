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


class User(object):
    """
    NOTE: This class is auto generated by the swagger code generator program.
    Do not edit the class manually.
    """
    def __init__(self, id=None, company=None, picture_url=None, website=None, user_type=None, slug=None, name=None, username=None, first_name=None, last_name=None, new_user=None, show_tour=None, plan_setup=None, plan_expired=None, plan_status=None, plan_id=None, plan_stripe=None):
        """
        User - a model defined in Swagger

        :param dict swaggerTypes: The key is attribute name
                                  and the value is attribute type.
        :param dict attributeMap: The key is attribute name
                                  and the value is json key in definition.
        """
        self.swagger_types = {
            'id': 'str',
            'company': 'str',
            'picture_url': 'str',
            'website': 'str',
            'user_type': 'str',
            'slug': 'str',
            'name': 'str',
            'username': 'str',
            'first_name': 'str',
            'last_name': 'str',
            'new_user': 'bool',
            'show_tour': 'bool',
            'plan_setup': 'bool',
            'plan_expired': 'bool',
            'plan_status': 'str',
            'plan_id': 'str',
            'plan_stripe': 'bool'
        }

        self.attribute_map = {
            'id': '_id',
            'company': 'company',
            'picture_url': 'picture_url',
            'website': 'website',
            'user_type': 'user_type',
            'slug': 'slug',
            'name': 'name',
            'username': 'username',
            'first_name': 'first_name',
            'last_name': 'last_name',
            'new_user': 'new_user',
            'show_tour': 'show_tour',
            'plan_setup': 'plan_setup',
            'plan_expired': 'plan_expired',
            'plan_status': 'plan_status',
            'plan_id': 'plan_id',
            'plan_stripe': 'plan_stripe'
        }

        self._id = id
        self._company = company
        self._picture_url = picture_url
        self._website = website
        self._user_type = user_type
        self._slug = slug
        self._name = name
        self._username = username
        self._first_name = first_name
        self._last_name = last_name
        self._new_user = new_user
        self._show_tour = show_tour
        self._plan_setup = plan_setup
        self._plan_expired = plan_expired
        self._plan_status = plan_status
        self._plan_id = plan_id
        self._plan_stripe = plan_stripe

    @property
    def id(self):
        """
        Gets the id of this User.

        :return: The id of this User.
        :rtype: str
        """
        return self._id

    @id.setter
    def id(self, id):
        """
        Sets the id of this User.

        :param id: The id of this User.
        :type: str
        """
        if id is None:
            raise ValueError("Invalid value for `id`, must not be `None`")

        self._id = id

    @property
    def company(self):
        """
        Gets the company of this User.

        :return: The company of this User.
        :rtype: str
        """
        return self._company

    @company.setter
    def company(self, company):
        """
        Sets the company of this User.

        :param company: The company of this User.
        :type: str
        """

        self._company = company

    @property
    def picture_url(self):
        """
        Gets the picture_url of this User.

        :return: The picture_url of this User.
        :rtype: str
        """
        return self._picture_url

    @picture_url.setter
    def picture_url(self, picture_url):
        """
        Sets the picture_url of this User.

        :param picture_url: The picture_url of this User.
        :type: str
        """

        self._picture_url = picture_url

    @property
    def website(self):
        """
        Gets the website of this User.

        :return: The website of this User.
        :rtype: str
        """
        return self._website

    @website.setter
    def website(self, website):
        """
        Sets the website of this User.

        :param website: The website of this User.
        :type: str
        """

        self._website = website

    @property
    def user_type(self):
        """
        Gets the user_type of this User.

        :return: The user_type of this User.
        :rtype: str
        """
        return self._user_type

    @user_type.setter
    def user_type(self, user_type):
        """
        Sets the user_type of this User.

        :param user_type: The user_type of this User.
        :type: str
        """

        self._user_type = user_type

    @property
    def slug(self):
        """
        Gets the slug of this User.

        :return: The slug of this User.
        :rtype: str
        """
        return self._slug

    @slug.setter
    def slug(self, slug):
        """
        Sets the slug of this User.

        :param slug: The slug of this User.
        :type: str
        """

        self._slug = slug

    @property
    def name(self):
        """
        Gets the name of this User.

        :return: The name of this User.
        :rtype: str
        """
        return self._name

    @name.setter
    def name(self, name):
        """
        Sets the name of this User.

        :param name: The name of this User.
        :type: str
        """

        self._name = name

    @property
    def username(self):
        """
        Gets the username of this User.

        :return: The username of this User.
        :rtype: str
        """
        return self._username

    @username.setter
    def username(self, username):
        """
        Sets the username of this User.

        :param username: The username of this User.
        :type: str
        """

        self._username = username

    @property
    def first_name(self):
        """
        Gets the first_name of this User.

        :return: The first_name of this User.
        :rtype: str
        """
        return self._first_name

    @first_name.setter
    def first_name(self, first_name):
        """
        Sets the first_name of this User.

        :param first_name: The first_name of this User.
        :type: str
        """

        self._first_name = first_name

    @property
    def last_name(self):
        """
        Gets the last_name of this User.

        :return: The last_name of this User.
        :rtype: str
        """
        return self._last_name

    @last_name.setter
    def last_name(self, last_name):
        """
        Sets the last_name of this User.

        :param last_name: The last_name of this User.
        :type: str
        """

        self._last_name = last_name

    @property
    def new_user(self):
        """
        Gets the new_user of this User.

        :return: The new_user of this User.
        :rtype: bool
        """
        return self._new_user

    @new_user.setter
    def new_user(self, new_user):
        """
        Sets the new_user of this User.

        :param new_user: The new_user of this User.
        :type: bool
        """

        self._new_user = new_user

    @property
    def show_tour(self):
        """
        Gets the show_tour of this User.

        :return: The show_tour of this User.
        :rtype: bool
        """
        return self._show_tour

    @show_tour.setter
    def show_tour(self, show_tour):
        """
        Sets the show_tour of this User.

        :param show_tour: The show_tour of this User.
        :type: bool
        """

        self._show_tour = show_tour

    @property
    def plan_setup(self):
        """
        Gets the plan_setup of this User.

        :return: The plan_setup of this User.
        :rtype: bool
        """
        return self._plan_setup

    @plan_setup.setter
    def plan_setup(self, plan_setup):
        """
        Sets the plan_setup of this User.

        :param plan_setup: The plan_setup of this User.
        :type: bool
        """

        self._plan_setup = plan_setup

    @property
    def plan_expired(self):
        """
        Gets the plan_expired of this User.

        :return: The plan_expired of this User.
        :rtype: bool
        """
        return self._plan_expired

    @plan_expired.setter
    def plan_expired(self, plan_expired):
        """
        Sets the plan_expired of this User.

        :param plan_expired: The plan_expired of this User.
        :type: bool
        """

        self._plan_expired = plan_expired

    @property
    def plan_status(self):
        """
        Gets the plan_status of this User.

        :return: The plan_status of this User.
        :rtype: str
        """
        return self._plan_status

    @plan_status.setter
    def plan_status(self, plan_status):
        """
        Sets the plan_status of this User.

        :param plan_status: The plan_status of this User.
        :type: str
        """

        self._plan_status = plan_status

    @property
    def plan_id(self):
        """
        Gets the plan_id of this User.

        :return: The plan_id of this User.
        :rtype: str
        """
        return self._plan_id

    @plan_id.setter
    def plan_id(self, plan_id):
        """
        Sets the plan_id of this User.

        :param plan_id: The plan_id of this User.
        :type: str
        """

        self._plan_id = plan_id

    @property
    def plan_stripe(self):
        """
        Gets the plan_stripe of this User.

        :return: The plan_stripe of this User.
        :rtype: bool
        """
        return self._plan_stripe

    @plan_stripe.setter
    def plan_stripe(self, plan_stripe):
        """
        Sets the plan_stripe of this User.

        :param plan_stripe: The plan_stripe of this User.
        :type: bool
        """

        self._plan_stripe = plan_stripe

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
        if not isinstance(other, User):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """
        Returns true if both objects are not equal
        """
        return not self == other
