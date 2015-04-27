
import sys;
sys.path.append("../../v2/python/vestorly-python/")

import unittest
from test_settings import *
import vestorly

class test_sessions_api(unittest.TestCase):

  def setUp(self):
	  self.client = vestorly.ApiClient(host=HOST, headerName='x-vestorly-auth', headerValue=API_KEY)

  def test_sessions_http_get(self):
	  """ """
	  api = vestorly.SessionsApi(apiClient=self.client)
	  
	  print api.login(**{
	  	'username' : "joseph.misiti@gmail.com",
		'username' : "vestorly!",
	  })
	  



if __name__ == '__main__':
	unittest.main()