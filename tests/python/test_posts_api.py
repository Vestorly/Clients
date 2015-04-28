
import sys;
sys.path.append("../../v2/python/vestorly-python/")

import unittest
from test_settings import *
import vestorly

class test_posts_api(unittest.TestCase):

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
		""" test text_query """
		api = vestorly.PostsApi(apiClient=self.client)
		posts = api.findPosts(**{'text_query' : "666"})
		self.assertEquals(len(posts.posts),0)
		
		api = vestorly.PostsApi(apiClient=self.client)
		posts = api.findPosts(**{'text_query' : "CCTV"})
		self.assertEquals(len(posts.posts),1)
	
	def test_get_post_by_id(self):
		"""""" 
		api = vestorly.PostsApi(apiClient=self.client)
		post = api.getPostByID(**{
			'id' : "551ed15e90a0ece318000020"
		})
		print post
		
	# def test_update_post(self):
	# 	""" """
	# 	api = vestorly.PostsApi(apiClient=self.client)
	# 	new_post = vestorly.PostInput()
	# 	new_post.title = "TEST"
	#
	# 	from urllib2 import HTTPError
	#
	# 	try:
	# 		response = api.createPost(**{
	# 			'post' : new_post
	# 		})
	# 	except HTTPError, e:
	# 		contents = e.read()
	# 		print contents
	# 	#print response
	#
	
  		 
if __name__ == '__main__':
	unittest.main()