import json,sys
sys.path.append("../../v2/python/vestorly-python/")

import unittest
from urllib2 import HTTPError
import vestorly

from test_settings import *
from helpers import MockResponse
from mock import patch

HTTP_GET = {
  "sources": [
    {
      "_id": "551ad380c98f132913000056",
      "name": "BD_HOE",
      "url": "/LuceneFeed/PershingCatalog1.txt",
      "enabled": True,
      "rss_publisher": "Pershing",
      "has_paywall": False,
      "custom_rss_feed": False
    },
    {
      "_id": "551ad380c98f132913000057",
      "name": "All Stories",
      "url": "http://www.bonappetit.com/rss2",
      "enabled": True,
      "rss_publisher": "Bon Appetit",
      "has_paywall": False,
      "custom_rss_feed": False
    },
    {
      "_id": "551ad380c98f132913000058",
      "name": "CBS News Video",
      "url": "http://www.cbsnews.com/latest/rss/video",
      "enabled": True,
      "rss_publisher": "CBS News",
      "has_paywall": False,
      "custom_rss_feed": False
    },
    {
      "_id": "551ad380c98f132913000059",
      "name": "48 Hours",
      "url": "http://www.cbsnews.com/latest/rss/48-hours",
      "enabled": True,
      "rss_publisher": "CBS News",
      "has_paywall": False,
      "custom_rss_feed": False
    },
    {
      "_id": "551ad380c98f13291300005a",
      "name": "Living",
      "url": "http://rss.cnn.com/rss/cnn_living.rss",
      "enabled": True,
      "rss_publisher": "CNN",
      "has_paywall": False,
      "custom_rss_feed": False
    },
    {
      "_id": "551ad380c98f13291300005b",
      "name": "Fashion",
      "url": "http://www.elle.com/rss/fashion/",
      "enabled": True,
      "rss_publisher": "ELLE",
      "has_paywall": False,
      "custom_rss_feed": False
    },
    {
      "_id": "551ad380c98f13291300005c",
      "name": "Culture News",
      "url": "http://www.elle.com/rss/culture/",
      "enabled": True,
      "rss_publisher": "ELLE",
      "has_paywall": False,
      "custom_rss_feed": False
    },
    {
      "_id": "551ad380c98f13291300005d",
      "name": "Moneywatch",
      "url": "http://www.cbsnews.com/latest/rss/moneywatch",
      "enabled": True,
      "rss_publisher": "CBS News",
      "has_paywall": False,
      "custom_rss_feed": False
    },
    {
      "_id": "551ad380c98f13291300005e",
      "name": "All Stories",
      "url": "http://adviceiq.com/adviceiq-articles-rss.xml",
      "enabled": True,
      "rss_publisher": "AdviceIQ",
      "has_paywall": False,
      "custom_rss_feed": False
    },
    {
      "_id": "551ad380c98f13291300005f",
      "name": "Technology Headlines",
      "url": "http://feeds.abcnews.com/abcnews/technologyheadlines",
      "enabled": True,
      "rss_publisher": "ABC News",
      "has_paywall": False,
      "custom_rss_feed": False
    },
    {
      "_id": "551ad380c98f132913000060",
      "name": "Travel Headlines",
      "url": "http://feeds.abcnews.com/abcnews/travelheadlines",
      "enabled": True,
      "rss_publisher": "ABC News",
      "has_paywall": False,
      "custom_rss_feed": False
    },
    {
      "_id": "551ad380c98f132913000061",
      "name": "Science & Technology",
      "url": "http://www.cbsnews.com/latest/rss/tech",
      "enabled": True,
      "rss_publisher": "CBS News",
      "has_paywall": False,
      "custom_rss_feed": False
    },
    {
      "_id": "551ad380c98f132913000062",
      "name": "Entertainment",
      "url": "http://www.cbsnews.com/latest/rss/entertainment",
      "enabled": True,
      "rss_publisher": "CBS News",
      "has_paywall": False,
      "custom_rss_feed": False
    },
    {
      "_id": "551ad380c98f132913000063",
      "name": "Sports",
      "url": "http://feeds.washingtonpost.com/rss/sports",
      "enabled": True,
      "rss_publisher": "Washington Post",
      "has_paywall": True,
      "custom_rss_feed": False
    },
    {
      "_id": "551ad380c98f132913000064",
      "name": "The Reliable Source",
      "url": "http://feeds.washingtonpost.com/rss/rss_reliable-source",
      "enabled": True,
      "rss_publisher": "Washington Post",
      "has_paywall": True,
      "custom_rss_feed": False
    },
    {
      "_id": "551ad380c98f132913000065",
      "name": "Top Stories",
      "url": "http://feeds.abcnews.com/abcnews/topstories",
      "enabled": True,
      "rss_publisher": "ABC News",
      "has_paywall": False,
      "custom_rss_feed": False
    },
    {
      "_id": "551ad380c98f132913000066",
      "name": "US Headlines",
      "url": "http://feeds.abcnews.com/abcnews/usheadlines",
      "enabled": True,
      "rss_publisher": "ABC News",
      "has_paywall": False,
      "custom_rss_feed": False
    },
    {
      "_id": "551ad380c98f132913000067",
      "name": "Taxes",
      "url": "http://adviceiq.com/taxonomy/term/69/all/taxonomy-articles-rss.xml",
      "enabled": True,
      "rss_publisher": "AdviceIQ",
      "has_paywall": False,
      "custom_rss_feed": False
    },
    {
      "_id": "551ad380c98f132913000068",
      "name": "Real Estate",
      "url": "http://adviceiq.com/taxonomy/term/54/all/taxonomy-articles-rss.xml",
      "enabled": True,
      "rss_publisher": "AdviceIQ",
      "has_paywall": False,
      "custom_rss_feed": False
    },
    {
      "_id": "551ad380c98f132913000069",
      "name": "Charitable Giving",
      "url": "http://www.adviceiq.com/taxonomy/term/6/all/taxonomy-articles-rss.xml",
      "enabled": True,
      "rss_publisher": "AdviceIQ",
      "has_paywall": False,
      "custom_rss_feed": False
    },
    {
      "_id": "551ad380c98f13291300006a",
      "name": "College Funding",
      "url": "http://www.adviceiq.com/taxonomy/term/9/all/taxonomy-articles-rss.xml",
      "enabled": True,
      "rss_publisher": "AdviceIQ",
      "has_paywall": False,
      "custom_rss_feed": False
    },
    {
      "_id": "551ad380c98f13291300006b",
      "name": "Crime",
      "url": "http://www.adviceiq.com/taxonomy/term/13/all/taxonomy-articles-rss.xml",
      "enabled": True,
      "rss_publisher": "AdviceIQ",
      "has_paywall": False,
      "custom_rss_feed": False
    },
    {
      "_id": "551ad380c98f13291300006c",
      "name": "International",
      "url": "http://www.adviceiq.com/taxonomy/term/79/all/taxonomy-articles-rss.xml",
      "enabled": True,
      "rss_publisher": "AdviceIQ",
      "has_paywall": False,
      "custom_rss_feed": False
    },
    {
      "_id": "551ad380c98f13291300006d",
      "name": "Legal Challenges",
      "url": "http://www.adviceiq.com/taxonomy/term/46/all/taxonomy-articles-rss.xml",
      "enabled": True,
      "rss_publisher": "AdviceIQ",
      "has_paywall": False,
      "custom_rss_feed": False
    },
    {
      "_id": "551ad380c98f13291300006e",
      "name": "Personal Spending",
      "url": "http://www.adviceiq.com/taxonomy/term/49/all/taxonomy-articles-rss.xml",
      "enabled": True,
      "rss_publisher": "AdviceIQ",
      "has_paywall": False,
      "custom_rss_feed": False
    },
    {
      "_id": "551ad380c98f13291300006f",
      "name": "Quality of Life",
      "url": "http://www.adviceiq.com/taxonomy/term/53/all/taxonomy-articles-rss.xml",
      "enabled": True,
      "rss_publisher": "AdviceIQ",
      "has_paywall": False,
      "custom_rss_feed": False
    },
    {
      "_id": "551ad380c98f132913000070",
      "name": "Small Business",
      "url": "http://www.adviceiq.com/taxonomy/term/65/all/taxonomy-articles-rss.xml",
      "enabled": True,
      "rss_publisher": "AdviceIQ",
      "has_paywall": False,
      "custom_rss_feed": False
    },
    {
      "_id": "551ad380c98f132913000071",
      "name": "Trust and Estates",
      "url": "http://www.adviceiq.com/taxonomy/term/75/all/taxonomy-articles-rss.xml",
      "enabled": True,
      "rss_publisher": "AdviceIQ",
      "has_paywall": False,
      "custom_rss_feed": False
    },
    {
      "_id": "551ad380c98f132913000072",
      "name": "Education",
      "url": "http://feeds.feedburner.com/AtlanticEducationChannel?format=xml",
      "enabled": True,
      "rss_publisher": "Atlantic",
      "has_paywall": False,
      "custom_rss_feed": False
    },
    {
      "_id": "551ad380c98f132913000073",
      "name": "Entertainment",
      "url": "http://feeds.feedburner.com/AtlanticCulture?format=xml",
      "enabled": True,
      "rss_publisher": "Atlantic",
      "has_paywall": False,
      "custom_rss_feed": False
    },
    {
      "_id": "551ad380c98f132913000074",
      "name": "International",
      "url": "http://feeds.feedburner.com/AtlanticInternational?format=xml",
      "enabled": True,
      "rss_publisher": "Atlantic",
      "has_paywall": False,
      "custom_rss_feed": False
    },
    {
      "_id": "551ad380c98f132913000075",
      "name": "The Sexes",
      "url": "http://feeds.feedburner.com/AtlanticSexesChannel?format=xml",
      "enabled": True,
      "rss_publisher": "Atlantic",
      "has_paywall": False,
      "custom_rss_feed": False
    },
    {
      "_id": "551ad380c98f132913000076",
      "name": "US & Canada",
      "url": "http://feeds.bbci.co.uk/news/world/us_and_canada/rss.xml",
      "enabled": True,
      "rss_publisher": "BBC News",
      "has_paywall": False,
      "custom_rss_feed": False
    },
    {
      "_id": "551ad380c98f132913000077",
      "name": "Top Stories",
      "url": "http://feeds.bbci.co.uk/news/rss.xml",
      "enabled": True,
      "rss_publisher": "BBC News",
      "has_paywall": False,
      "custom_rss_feed": False
    }]
}

HTTP_GET_BY_ID=  {
  "source": {
    "_id": "551ad380c98f132913000056",
    "name": "BD_HOE",
    "url": "/LuceneFeed/PershingCatalog1.txt",
    "enabled": True,
    "rss_publisher": "Pershing",
    "has_paywall": False,
    "custom_rss_feed": True
  }
}

class test_sources_api(unittest.TestCase):

	def setUp(self):
		self.client = vestorly.ApiClient(host=HOST, headerName='x-vestorly-auth', headerValue=API_KEY)
		self.api = vestorly.SessionsApi(apiClient=self.client)
		self.patcher = patch('urllib2.urlopen')
		self.urlopen_mock = self.patcher.start()
		
	def test_sources_HTTP_get(self):
		""" test /api/v2/sources GET call """ 
		self.urlopen_mock.return_value =  MockResponse(json.dumps(HTTP_GET))
		api = vestorly.SourcesApi(apiClient=self.client)
		sources = api.findSources()
		self.assertTrue(isinstance(sources,vestorly.models.sources.Sources))
		self.assertEquals(len(sources.sources),34)
		self.assertTrue(isinstance(sources.sources[0],vestorly.models.source.Source))
		
	def test_sources_HTTP_get_by_id(self):
		""" test /api/v2/sources/{id} GET call """ 
		self.urlopen_mock.return_value =  MockResponse(json.dumps(HTTP_GET_BY_ID))
		api = vestorly.SourcesApi(apiClient=self.client)
		source = api.getSourceByID(**{
			'id' : "551ad380c98f132913000056"
		})
		self.assertTrue(isinstance(source,vestorly.models.sourceresponse.Sourceresponse))
		self.assertEquals(source.source._id, "551ad380c98f132913000056")
		
	def test_sources_HTTP_update_by_id(self):
		""" """
		self.urlopen_mock.return_value =  MockResponse(json.dumps(HTTP_GET_BY_ID))
		api = vestorly.SourcesApi(apiClient=self.client)
		source = api.getSourceByID(**{
			'id' : "551ad380c98f132913000056"
		})
		self.assertTrue(isinstance(source,vestorly.models.sourceresponse.Sourceresponse))
		self.assertEquals(source.source._id, "551ad380c98f132913000056")
		
		
	def test_sources_HTTP_post_create_source(self):
		""" """
		
if __name__ == '__main__':
	unittest.main()
	