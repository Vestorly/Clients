import datetime
import os
import random
import re
import string
import sys
import unittest

from mock import patch, Mock

class MockResponse(object):
 
	def __init__(self, resp_data, code=200, msg='OK'):
		self.resp_data = resp_data
		self.code = code
		self.msg = msg
		self.headers = {'content-type': 'text/plain; charset=utf-8'}
 
	def read(self):
		return self.resp_data
 
	def getcode(self):
		return self.code


class VestorlyTestCase(unittest.TestCase):
	
	RESTORE_ATTRIBUTES = ('api_version', 'api_key')

	def setUp(self):
		super(VestorlyTestCase, self).setUp()

		self._vestorly_original_attributes = {}

		for attr in self.RESTORE_ATTRIBUTES:
			self._vestorly_original_attributes[attr] = getattr(stripe, attr)

		api_base = os.environ.get('VESTORLY_API_BASE')
		if api_base:
			stripe.api_base = api_base
		stripe.api_key = os.environ.get(
			'VESTORLY_API_KEY', 'asdfadfasdfasdfasdfasdfasdfsadf')

	def tearDown(self):
		super(VestorlyTestCase, self).tearDown()

		for attr in self.RESTORE_ATTRIBUTES:
			setattr(stripe, attr, self._vestorly_original_attributes[attr])
