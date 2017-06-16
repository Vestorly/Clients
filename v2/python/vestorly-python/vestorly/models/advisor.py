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


class Advisor(object):
    """
    NOTE: This class is auto generated by the swagger code generator program.
    Do not edit the class manually.
    """
    def __init__(self, company=None, address=None, city=None, state=None, zip=None, first_name=None, last_name=None, reg_number=None, account_type=None, about=None, twitter_handle=None, profile_picture=None, logo=None, linkedin=None, website=None, adv_brochure=None, plan=None, disclosure=None, external_options=None, email_report_blast=None, compliance_bcc_email_address=None, dashboard_url=None, api_key=None, id=None, name=None, tag=None):
        """
        Advisor - a model defined in Swagger

        :param dict swaggerTypes: The key is attribute name
                                  and the value is attribute type.
        :param dict attributeMap: The key is attribute name
                                  and the value is json key in definition.
        """
        self.swagger_types = {
            'company': 'str',
            'address': 'str',
            'city': 'str',
            'state': 'str',
            'zip': 'str',
            'first_name': 'str',
            'last_name': 'str',
            'reg_number': 'str',
            'account_type': 'str',
            'about': 'str',
            'twitter_handle': 'str',
            'profile_picture': 'str',
            'logo': 'str',
            'linkedin': 'str',
            'website': 'str',
            'adv_brochure': 'str',
            'plan': 'str',
            'disclosure': 'str',
            'external_options': 'str',
            'email_report_blast': 'str',
            'compliance_bcc_email_address': 'str',
            'dashboard_url': 'str',
            'api_key': 'str',
            'id': 'str',
            'name': 'str',
            'tag': 'str'
        }

        self.attribute_map = {
            'company': 'company',
            'address': 'address',
            'city': 'city',
            'state': 'state',
            'zip': 'zip',
            'first_name': 'first_name',
            'last_name': 'last_name',
            'reg_number': 'reg_number',
            'account_type': 'account_type',
            'about': 'about',
            'twitter_handle': 'twitter_handle',
            'profile_picture': 'profile_picture',
            'logo': 'logo',
            'linkedin': 'linkedin',
            'website': 'website',
            'adv_brochure': 'adv_brochure',
            'plan': 'plan',
            'disclosure': 'disclosure',
            'external_options': 'external_options',
            'email_report_blast': 'email_report_blast',
            'compliance_bcc_email_address': 'compliance_bcc_email_address',
            'dashboard_url': 'dashboard_url',
            'api_key': 'api_key',
            'id': 'id',
            'name': 'name',
            'tag': 'tag'
        }

        self._company = company
        self._address = address
        self._city = city
        self._state = state
        self._zip = zip
        self._first_name = first_name
        self._last_name = last_name
        self._reg_number = reg_number
        self._account_type = account_type
        self._about = about
        self._twitter_handle = twitter_handle
        self._profile_picture = profile_picture
        self._logo = logo
        self._linkedin = linkedin
        self._website = website
        self._adv_brochure = adv_brochure
        self._plan = plan
        self._disclosure = disclosure
        self._external_options = external_options
        self._email_report_blast = email_report_blast
        self._compliance_bcc_email_address = compliance_bcc_email_address
        self._dashboard_url = dashboard_url
        self._api_key = api_key
        self._id = id
        self._name = name
        self._tag = tag

    @property
    def company(self):
        """
        Gets the company of this Advisor.

        :return: The company of this Advisor.
        :rtype: str
        """
        return self._company

    @company.setter
    def company(self, company):
        """
        Sets the company of this Advisor.

        :param company: The company of this Advisor.
        :type: str
        """

        self._company = company

    @property
    def address(self):
        """
        Gets the address of this Advisor.

        :return: The address of this Advisor.
        :rtype: str
        """
        return self._address

    @address.setter
    def address(self, address):
        """
        Sets the address of this Advisor.

        :param address: The address of this Advisor.
        :type: str
        """

        self._address = address

    @property
    def city(self):
        """
        Gets the city of this Advisor.

        :return: The city of this Advisor.
        :rtype: str
        """
        return self._city

    @city.setter
    def city(self, city):
        """
        Sets the city of this Advisor.

        :param city: The city of this Advisor.
        :type: str
        """

        self._city = city

    @property
    def state(self):
        """
        Gets the state of this Advisor.

        :return: The state of this Advisor.
        :rtype: str
        """
        return self._state

    @state.setter
    def state(self, state):
        """
        Sets the state of this Advisor.

        :param state: The state of this Advisor.
        :type: str
        """

        self._state = state

    @property
    def zip(self):
        """
        Gets the zip of this Advisor.

        :return: The zip of this Advisor.
        :rtype: str
        """
        return self._zip

    @zip.setter
    def zip(self, zip):
        """
        Sets the zip of this Advisor.

        :param zip: The zip of this Advisor.
        :type: str
        """

        self._zip = zip

    @property
    def first_name(self):
        """
        Gets the first_name of this Advisor.

        :return: The first_name of this Advisor.
        :rtype: str
        """
        return self._first_name

    @first_name.setter
    def first_name(self, first_name):
        """
        Sets the first_name of this Advisor.

        :param first_name: The first_name of this Advisor.
        :type: str
        """

        self._first_name = first_name

    @property
    def last_name(self):
        """
        Gets the last_name of this Advisor.

        :return: The last_name of this Advisor.
        :rtype: str
        """
        return self._last_name

    @last_name.setter
    def last_name(self, last_name):
        """
        Sets the last_name of this Advisor.

        :param last_name: The last_name of this Advisor.
        :type: str
        """

        self._last_name = last_name

    @property
    def reg_number(self):
        """
        Gets the reg_number of this Advisor.

        :return: The reg_number of this Advisor.
        :rtype: str
        """
        return self._reg_number

    @reg_number.setter
    def reg_number(self, reg_number):
        """
        Sets the reg_number of this Advisor.

        :param reg_number: The reg_number of this Advisor.
        :type: str
        """

        self._reg_number = reg_number

    @property
    def account_type(self):
        """
        Gets the account_type of this Advisor.

        :return: The account_type of this Advisor.
        :rtype: str
        """
        return self._account_type

    @account_type.setter
    def account_type(self, account_type):
        """
        Sets the account_type of this Advisor.

        :param account_type: The account_type of this Advisor.
        :type: str
        """

        self._account_type = account_type

    @property
    def about(self):
        """
        Gets the about of this Advisor.

        :return: The about of this Advisor.
        :rtype: str
        """
        return self._about

    @about.setter
    def about(self, about):
        """
        Sets the about of this Advisor.

        :param about: The about of this Advisor.
        :type: str
        """

        self._about = about

    @property
    def twitter_handle(self):
        """
        Gets the twitter_handle of this Advisor.

        :return: The twitter_handle of this Advisor.
        :rtype: str
        """
        return self._twitter_handle

    @twitter_handle.setter
    def twitter_handle(self, twitter_handle):
        """
        Sets the twitter_handle of this Advisor.

        :param twitter_handle: The twitter_handle of this Advisor.
        :type: str
        """

        self._twitter_handle = twitter_handle

    @property
    def profile_picture(self):
        """
        Gets the profile_picture of this Advisor.

        :return: The profile_picture of this Advisor.
        :rtype: str
        """
        return self._profile_picture

    @profile_picture.setter
    def profile_picture(self, profile_picture):
        """
        Sets the profile_picture of this Advisor.

        :param profile_picture: The profile_picture of this Advisor.
        :type: str
        """

        self._profile_picture = profile_picture

    @property
    def logo(self):
        """
        Gets the logo of this Advisor.

        :return: The logo of this Advisor.
        :rtype: str
        """
        return self._logo

    @logo.setter
    def logo(self, logo):
        """
        Sets the logo of this Advisor.

        :param logo: The logo of this Advisor.
        :type: str
        """

        self._logo = logo

    @property
    def linkedin(self):
        """
        Gets the linkedin of this Advisor.

        :return: The linkedin of this Advisor.
        :rtype: str
        """
        return self._linkedin

    @linkedin.setter
    def linkedin(self, linkedin):
        """
        Sets the linkedin of this Advisor.

        :param linkedin: The linkedin of this Advisor.
        :type: str
        """

        self._linkedin = linkedin

    @property
    def website(self):
        """
        Gets the website of this Advisor.

        :return: The website of this Advisor.
        :rtype: str
        """
        return self._website

    @website.setter
    def website(self, website):
        """
        Sets the website of this Advisor.

        :param website: The website of this Advisor.
        :type: str
        """

        self._website = website

    @property
    def adv_brochure(self):
        """
        Gets the adv_brochure of this Advisor.

        :return: The adv_brochure of this Advisor.
        :rtype: str
        """
        return self._adv_brochure

    @adv_brochure.setter
    def adv_brochure(self, adv_brochure):
        """
        Sets the adv_brochure of this Advisor.

        :param adv_brochure: The adv_brochure of this Advisor.
        :type: str
        """

        self._adv_brochure = adv_brochure

    @property
    def plan(self):
        """
        Gets the plan of this Advisor.

        :return: The plan of this Advisor.
        :rtype: str
        """
        return self._plan

    @plan.setter
    def plan(self, plan):
        """
        Sets the plan of this Advisor.

        :param plan: The plan of this Advisor.
        :type: str
        """

        self._plan = plan

    @property
    def disclosure(self):
        """
        Gets the disclosure of this Advisor.

        :return: The disclosure of this Advisor.
        :rtype: str
        """
        return self._disclosure

    @disclosure.setter
    def disclosure(self, disclosure):
        """
        Sets the disclosure of this Advisor.

        :param disclosure: The disclosure of this Advisor.
        :type: str
        """

        self._disclosure = disclosure

    @property
    def external_options(self):
        """
        Gets the external_options of this Advisor.

        :return: The external_options of this Advisor.
        :rtype: str
        """
        return self._external_options

    @external_options.setter
    def external_options(self, external_options):
        """
        Sets the external_options of this Advisor.

        :param external_options: The external_options of this Advisor.
        :type: str
        """

        self._external_options = external_options

    @property
    def email_report_blast(self):
        """
        Gets the email_report_blast of this Advisor.

        :return: The email_report_blast of this Advisor.
        :rtype: str
        """
        return self._email_report_blast

    @email_report_blast.setter
    def email_report_blast(self, email_report_blast):
        """
        Sets the email_report_blast of this Advisor.

        :param email_report_blast: The email_report_blast of this Advisor.
        :type: str
        """

        self._email_report_blast = email_report_blast

    @property
    def compliance_bcc_email_address(self):
        """
        Gets the compliance_bcc_email_address of this Advisor.

        :return: The compliance_bcc_email_address of this Advisor.
        :rtype: str
        """
        return self._compliance_bcc_email_address

    @compliance_bcc_email_address.setter
    def compliance_bcc_email_address(self, compliance_bcc_email_address):
        """
        Sets the compliance_bcc_email_address of this Advisor.

        :param compliance_bcc_email_address: The compliance_bcc_email_address of this Advisor.
        :type: str
        """

        self._compliance_bcc_email_address = compliance_bcc_email_address

    @property
    def dashboard_url(self):
        """
        Gets the dashboard_url of this Advisor.

        :return: The dashboard_url of this Advisor.
        :rtype: str
        """
        return self._dashboard_url

    @dashboard_url.setter
    def dashboard_url(self, dashboard_url):
        """
        Sets the dashboard_url of this Advisor.

        :param dashboard_url: The dashboard_url of this Advisor.
        :type: str
        """

        self._dashboard_url = dashboard_url

    @property
    def api_key(self):
        """
        Gets the api_key of this Advisor.

        :return: The api_key of this Advisor.
        :rtype: str
        """
        return self._api_key

    @api_key.setter
    def api_key(self, api_key):
        """
        Sets the api_key of this Advisor.

        :param api_key: The api_key of this Advisor.
        :type: str
        """

        self._api_key = api_key

    @property
    def id(self):
        """
        Gets the id of this Advisor.

        :return: The id of this Advisor.
        :rtype: str
        """
        return self._id

    @id.setter
    def id(self, id):
        """
        Sets the id of this Advisor.

        :param id: The id of this Advisor.
        :type: str
        """
        if id is None:
            raise ValueError("Invalid value for `id`, must not be `None`")

        self._id = id

    @property
    def name(self):
        """
        Gets the name of this Advisor.

        :return: The name of this Advisor.
        :rtype: str
        """
        return self._name

    @name.setter
    def name(self, name):
        """
        Sets the name of this Advisor.

        :param name: The name of this Advisor.
        :type: str
        """
        if name is None:
            raise ValueError("Invalid value for `name`, must not be `None`")

        self._name = name

    @property
    def tag(self):
        """
        Gets the tag of this Advisor.

        :return: The tag of this Advisor.
        :rtype: str
        """
        return self._tag

    @tag.setter
    def tag(self, tag):
        """
        Sets the tag of this Advisor.

        :param tag: The tag of this Advisor.
        :type: str
        """

        self._tag = tag

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
        if not isinstance(other, Advisor):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """
        Returns true if both objects are not equal
        """
        return not self == other
