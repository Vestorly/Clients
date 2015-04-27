
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
		api = vestorly.PostsApi(apiClient=self.client)
		posts = api.findPosts()
		self.assertTrue(len(posts.posts) > 0)
		self.assertTrue(isinstance(posts.posts,list))
		self.assertTrue(isinstance(posts.posts[0],vestorly.models.post.Post))

	def test_post_text_query_works(self):
		""" test text_query parameter"""
	 
  		 
if __name__ == '__main__':
	unittest.main()