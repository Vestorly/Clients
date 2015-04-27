
import sys;
sys.path.append("../../v2/python/vestorly-python/")

import unittest
from urllib2 import HTTPError
import vestorly

from test_settings import *


class test_sessions_api(unittest.TestCase):

	def setUp(self):
		self.client = vestorly.ApiClient(host=HOST, headerName='x-vestorly-auth', headerValue=API_KEY)
		self.api = vestorly.SessionsApi(apiClient=self.client)
		
	def test_api_returns_403_when_using_invalid_api_key(self): 
		""" if you provide an invalid API, this should return accessed denied 403"""
		self.client = vestorly.ApiClient(host=HOST, headerName='x-vestorly-auth', headerValue='asdfasdf')
		self.api = vestorly.SessionsApi(apiClient=self.client)
		with self.assertRaises(HTTPError):
			response = self.api.login(**{
			'username' : "joseph.misiti@gmail.com",
			'password' : "an_invalid_password",
			})
	
	def test_sessions_return_valid_object(self):
		""" test to make sure the session object returns the correct model info """
		response = self.api.login(**{
			'username' : USERNAME,
			'password' : PASSWORD,
		})
	  	self.assertIsNotNone(response.vestorly_auth)
	  	self.assertFalse(response.new_user)
	  	self.assertIsNotNone(response.current_user)
		
		#print response.current_user.__dict__
	  	#self.assertIsNotNone(response.vestorly_auth)
	  	#self.assertIsNotNone(response.vestorly_auth)
	  	



if __name__ == '__main__':
	unittest.main()