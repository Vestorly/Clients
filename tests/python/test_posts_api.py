#!/usr/bin/env python
# -*- coding: utf-8 -*-

import sys, json
sys.path.append("../../v2/python/vestorly-python/")

import unittest
from test_settings import *
import vestorly
from helpers import MockResponse
from mock import patch

HTTP_GET_BY_ID = {
  "post": {
    "_id": "551ed15e90a0ece318000020",
    "body": "XXXX",
    "created_at": "2015-04-03T17:43:58Z",
    "external_url": "http://ireport.cnn.com/docs/DOC-1230765?ref=feeds%2Flatest",
    "external_url_source": "http://rss.ireport.com/feeds/latest.rss",
    "external_url_type": "basic",
    "image_path": "post_images/551ed023c11fc6b3b1000002/orginal.jpg",
    "image_url": "//d1xhgr640tdb4k.cloudfront.net/post_images/551ed023c11fc6b3b1000002/orginal.jpg",
    "image_height": None,
    "image_width": 120,
    "logo_url": "//d6k9y5isbbnuf.cloudfront.net/logos/cnn_logo.png",
    "square_logo_url": None,
    "needs_sanitize": True,
    "summary": "",
    "title": "CCTV Myths EXPOSED (part 1)",
    "topic": "Cnn 8",
    "approval_status": "not_required",
    "approval_transactions": [],
    "group_ids": [],
    "slug": "cctv-myths-exposed-part-1",
    "article_id": "551ed01fc11fc6b3b1000001",
    "comment": None,
    "newsletter_ids": [],
    "is_featured": False,
    "advisor_id": "551ad2edc98f134364000044",
    "is_published": False,
    "is_responsive": False,
    "is_proxy_needed": False,
    "is_mobile_proxy_needed": False,
    "proxy_url": "http://prxme-staging.herokuapp.com",
    "video": None,
    "pdf_attachment_url": None,
    "post_date": "2015-04-03T17:53:50+00:00",
    "suitability_score": 0,
    "video_id": "",
    "display_tag": None,
    "display_summary": "XXXX"
  }
}


HTTP_GET = {
  "posts": [
    {
      "_id": "551ed15e90a0ece318000020",
      "body": "XXXX",
      "created_at": "2015-04-03T17:43:58Z",
      "external_url": "http://ireport.cnn.com/docs/DOC-1230765?ref=feeds%2Flatest",
      "external_url_source": "http://rss.ireport.com/feeds/latest.rss",
      "external_url_type": "basic",
      "image_path": "post_images/551ed023c11fc6b3b1000002/orginal.jpg",
      "image_url": "//d1xhgr640tdb4k.cloudfront.net/post_images/551ed023c11fc6b3b1000002/orginal.jpg",
      "image_height": None,
      "image_width": 120,
      "logo_url": "//d6k9y5isbbnuf.cloudfront.net/logos/cnn_logo.png",
      "square_logo_url": None,
      "needs_sanitize": True,
      "summary": "",
      "title": "CCTV Myths EXPOSED (part 1)",
      "topic": "Cnn 8",
      "approval_status": "not_required",
      "approval_transactions": [],
      "group_ids": [],
      "slug": "cctv-myths-exposed-part-1",
      "article_id": "551ed01fc11fc6b3b1000001",
      "comment": None,
      "newsletter_ids": [],
      "is_featured": False,
      "advisor_id": "551ad2edc98f134364000044",
      "is_published": False,
      "is_responsive": False,
      "is_proxy_needed": False,
      "is_mobile_proxy_needed": False,
      "proxy_url": "http://prxme-staging.herokuapp.com",
      "video": None,
      "pdf_attachment_url": None,
      "post_date": "2015-04-03T17:53:50+00:00",
      "suitability_score": 0,
      "video_id": "",
      "display_tag": None,
      "display_summary": "XXXX"
    },
    {
      "_id": "551ed1ac90a0ece318000024",
      "body": "Erika Janes, Senior Pregnancy Editor for American Baby Magazine, gives tips and insider strategies of infant sleep coaches to get your baby to sleep.",
      "created_at": "2015-04-03T17:45:16Z",
      "external_url": "http://feeds.cbsnews.com/~r/CBSNewsUTTM/~3/CiHFQVnMer4/",
      "external_url_source": "http://feeds.cbsnews.com/CBSNewsUTTM",
      "external_url_type": "basic",
      "image_path": "post_images/551e3427fce52d3826000022/orginal.jpg",
      "image_url": "//d2dnvwecfdx5as.cloudfront.net/post_images/551e3427fce52d3826000022/large.jpg",
      "image_height": None,
      "image_width": 940,
      "logo_url": "//d6k9y5isbbnuf.cloudfront.net/logos/cbs_news_logo.png",
      "square_logo_url": "//d6k9y5isbbnuf.cloudfront.net/small+logos/cbsnew_logo.png",
      "needs_sanitize": False,
      "summary": "",
      "title": "Infant Sleep Secrets",
      "topic": "Other Lifestyle",
      "approval_status": "not_required",
      "approval_transactions": [],
      "group_ids": [],
      "slug": "infant-sleep-secrets-1",
      "article_id": "551e341bfce52d3826000020",
      "comment": None,
      "newsletter_ids": [],
      "is_featured": False,
      "advisor_id": "551ad2edc98f134364000044",
      "is_published": False,
      "is_responsive": False,
      "is_proxy_needed": True,
      "is_mobile_proxy_needed": False,
      "proxy_url": "http://prxme-staging.herokuapp.com",
      "video": None,
      "pdf_attachment_url": None,
      "post_date": "2015-04-03T17:45:16+00:00",
      "suitability_score": 0,
      "video_id": "",
      "display_tag": None,
      "display_summary": "Erika Janes, Senior Pregnancy Editor for American Baby Magazine, gives tips and insider strategies of infant sleep coaches to get your baby to sleep."
    },
    {
      "_id": "551ed17a90a0eccd0800001c",
      "body": "What do you do when you are depressed? You might listen to music, read favorite books & watch stunning movies or hangout with your friends. Some might play games like cricket or football or computer games or do something else. But that boy didn’t find any interest on these. He was used to cycling when he was sad. He loved to take fresh breath while paddling the cycle. That boy might find similarities between the wheels of the cycle with the passage of life. He used to talk alone with himself & with green natural world. He might calculate the gains and losses of life. Or he might dream that he has to go far in life. The name of this dreamy boy is Abu Salman Mohammad Abdullah, though he is known as “RJ Salman” to the maximum. But it will be a mistake if anyone points him out only as a Radio Jockey because some more identities have been attached with that little cyclist…Salman’s outstanding academic records are really impressive. He stood 9th in the SSC combined merit list of Chittagong Education Board in the year 2006. After successfully passing HSC with the highest grade, he started BBA under the Department of Finance, University of Dhaka. Now he is taking Masters in Business Administration from the glories IBA, University of Dhaka. Since 2010 he is working for the 1st FM Radio in Bangladesh Radio Today FM 89.6 as a Radio Jockey. With magical voice and smart presentation this microphone monster of Bangladesh touched millions of hearts…Regarding this issue Salman said, “Training from Bangladesh Betar, BBC Media Action, Voice of America, Astro-Malaysia, Media Corp-Singapore energized me to perform successfully in presentation arena.” He was the first Radio Broadcaster of Amar FM 96.3 Singapore (The only expatriate Bengali representative media in Singapore). Besides being a voice artist Salman wrote two books so far, one in 2014 & another in 2015 during Omor Ekushe Book Fair. Both of his books (Shopno Tomar RJ Hobar & Jibon Theke Neya - Part 1) got place on the bestsellers list. This youngster is now looking forward to getting identity as a writer too. Son of retired army personnel Adbul Kader & housewife Rabeya Begum, Salman passed his early days under the disciplined environment of different cantonments. Besides being tremendously talented in academic arena, Salman used to play different games as well. He played inter district cricket as a player of Bayezid Line High School, Chittagong…His 185k+ liked official fan page got verification from facebook in January this year. “Facebook never represents the total love of my well wishers towards me. It can be just a portion”, Salman mentioned regarding this. Besides Radio Broadcasting, Salman acted in several TV dramas too. While discussing about the focus, Salman said, “I just focus on my ultimate goal. I want to be a policy maker of Bangladesh, so that I can closely work to fulfill the dreams of my beloved nation.” Let the youngsters of Bangladesh think big like this… ",
      "created_at": "2015-04-03T17:44:26Z",
      "external_url": "http://ireport.cnn.com/docs/DOC-1230807?ref=feeds%2Flatest",
      "external_url_source": "http://rss.ireport.com/feeds/latest.rss",
      "external_url_type": "basic",
      "image_path": "post_images/551ed032c11fc6b3b1000006/orginal.jpg",
      "image_url": "//d2dnvwecfdx5as.cloudfront.net/post_images/551ed032c11fc6b3b1000006/large.jpg",
      "image_height": None,
      "image_width": 896,
      "logo_url": "//d6k9y5isbbnuf.cloudfront.net/logos/cnn_logo.png",
      "square_logo_url": None,
      "needs_sanitize": True,
      "summary": "",
      "title": "RJ Salman - More than a Radio Jockey !",
      "topic": "Cnn 8",
      "approval_status": "not_required",
      "approval_transactions": [],
      "group_ids": [],
      "slug": "rj-salman-more-than-a-radio-jockey",
      "article_id": "551ed02ec11fc6b3b1000005",
      "comment": None,
      "newsletter_ids": [],
      "is_featured": False,
      "advisor_id": "551ad2edc98f134364000044",
      "is_published": False,
      "is_responsive": False,
      "is_proxy_needed": True,
      "is_mobile_proxy_needed": True,
      "proxy_url": "http://prxme-staging.herokuapp.com",
      "video": None,
      "pdf_attachment_url": None,
      "post_date": "2015-04-03T17:44:26+00:00",
      "suitability_score": 0,
      "video_id": "",
      "display_tag": None,
      "display_summary": "What do you do when you are depressed? You might listen to music, read favorite books & watch stunning movies or hangout with your friends. Some might play games like cricket or football or computer games or do something else. But that boy didnt find any"
    },
    {
      "_id": "551ed17590a0ece318000021",
      "body": "For over 7 years we were part of the 1 in 8 statistic of couples who struggle with infertility. I did not talk about it and we were ashamed of our disease. I felt broken and less of woman. I had 5 surgeries, 6 IUI's and 6 failed IVFs. I had the beginning stages of uterine cancer which I subsequently lost my uterus through a hysterectomy. I will never carry my own pregnancy but I did have 2 embryos left. More on that in a minute. Unlike many that are affected with the disease of infertility we broke our silence in 2012, and started writing a candid and popular fertility blog \"Our Misconception\" which is a his and her perspective on dealing with infertility. After that, we became heavily involved with hosting local support groups, writing for family building sites, and advocating in Washington DC for much needed family building law reform. Our blog recently won the HOPE Award for Best Infertility blog, and on May 14th my husband and I will join hundreds of other Advocates in DC for RESOLVE's Advocacy Day. We also, appeared in a MTV documentary. In June, 2014 we welcomed our daughter to the world via gestational carrier. We are an infertile couple, and will always be. we are also passionate advocates. I did not take my miracle baby and forget the years of injections, tens of thousands of dollars and hurtful comments. Infertility is a tattoo I will always bare. Parenthood after infertility is sweeter, appreciated and not taken for granted. It is obvious, especially in light of the D&G comments that infertility, IVF, Surrogacy and Adoption need to be talked about more. So I hope by sharing my story with you, for National Infertility Awareness Week I can help others see hope when it is lost and those who do overcome infertility use their emotional bruises to fight and advocate for others. Here is our Blog, vimeo and link to our documentary: http://www.ourmisconception.com/the-dusty-onesie/ https://vimeo.com/100315508 http://www.mtv.com/shows/Truelife/true-life-im-desperate-to-have-a-baby/1711687/playlist/ Candace",
      "created_at": "2015-04-03T17:44:21Z",
      "external_url": "http://ireport.cnn.com/docs/DOC-1230551?ref=feeds%2Flatest",
      "external_url_source": "http://rss.ireport.com/feeds/latest.rss",
      "external_url_type": "basic",
      "image_path": "post_images/551ed02ac11fc6b3b1000004/orginal.jpg",
      "image_url": "//d2dnvwecfdx5as.cloudfront.net/post_images/551ed02ac11fc6b3b1000004/large.jpg",
      "image_height": None,
      "image_width": 896,
      "logo_url": "//d6k9y5isbbnuf.cloudfront.net/logos/cnn_logo.png",
      "square_logo_url": None,
      "needs_sanitize": True,
      "summary": "",
      "title": "Infertility Stories: Couple Breaks Silence and Advocates for Infertility",
      "topic": "Cnn 8",
      "approval_status": "not_required",
      "approval_transactions": [],
      "group_ids": [
        "551ad323c98f132913000050"
      ],
      "slug": "infertility-stories-couple-breaks-silence-and-advocates-for-infertility",
      "article_id": "551ed027c11fc6b3b1000003",
      "comment": None,
      "newsletter_ids": [],
      "is_featured": False,
      "advisor_id": "551ad2edc98f134364000044",
      "is_published": True,
      "is_responsive": False,
      "is_proxy_needed": True,
      "is_mobile_proxy_needed": True,
      "proxy_url": "http://prxme-staging.herokuapp.com",
      "video": None,
      "pdf_attachment_url": None,
      "post_date": "2015-04-03T17:44:22+00:00",
      "suitability_score": 0,
      "video_id": "",
      "display_tag": None,
      "display_summary": "For over 7 years we were part of the 1 in 8 statistic of couples who struggle with infertility. I did not talk about it and we were ashamed of our disease. I felt broken and less of woman. I had 5 surgeries, 6 IUI's and 6 failed IVFs. I had the beginning"
    },
    {
      "_id": "551ecd4990a0ece318000019",
      "body": "European officials are escalating their scrutiny of companies including Facebook, Apple and Google in realms that span taxation, personal privacy and competition law.",
      "created_at": "2015-04-03T17:26:33Z",
      "external_url": "http://www.wsj.com/articles/europe-steps-up-pressure-on-technology-giants-1428020273?mod=pls_whats_news_us_business_f",
      "external_url_source": "http://online.wsj.com/xml/rss/3_7014.xml",
      "external_url_type": "basic",
      "image_path": "post_images/551e4462fce52dc9760004ea/orginal.jpg",
      "image_url": "//d2dnvwecfdx5as.cloudfront.net/post_images/551e4462fce52dc9760004ea/large.jpg",
      "image_height": None,
      "image_width": 749,
      "logo_url": "//d6k9y5isbbnuf.cloudfront.net/logos/wall_street_journal_logo.png",
      "square_logo_url": "//d6k9y5isbbnuf.cloudfront.net/small+logos/wallstreetjournal.png",
      "needs_sanitize": False,
      "summary": "",
      "title": "Europe Raises Scrutiny of Tech Giants",
      "topic": "Markets, Economy & Business",
      "approval_status": "not_required",
      "approval_transactions": [],
      "group_ids": [
        "551ad323c98f132913000050"
      ],
      "slug": "europe-raises-scrutiny-of-tech-giants",
      "article_id": "551e445bfce52dc9760004e7",
      "comment": None,
      "newsletter_ids": [
        "551ad323c98f132913000051"
      ],
      "is_featured": False,
      "advisor_id": "551ad2edc98f134364000044",
      "is_published": True,
      "is_responsive": True,
      "is_proxy_needed": False,
      "is_mobile_proxy_needed": False,
      "proxy_url": "http://prxme-staging.herokuapp.com",
      "video": None,
      "pdf_attachment_url": None,
      "post_date": "2015-04-03T17:26:34+00:00",
      "suitability_score": 0,
      "video_id": "",
      "display_tag": None,
      "display_summary": "European officials are escalating their scrutiny of companies including Facebook, Apple and Google in realms that span taxation, personal privacy and competition law."
    },
    {
      "_id": "551ecd3990a0eccd08000010",
      "body": "In new research from Cerulli Associates, the analytics firm offered up “eRIA” as an alternative term to “robo-advisor” for automated investment advice software. \n\n\n\n\n      Content Classification: \n  \n    \n          \n          Curated\n      \n\nThe Daily Brief\nread more",
      "created_at": "2015-04-03T17:26:17Z",
      "external_url": "http://wealthmanagement.com/blog/eria-replacing-robo-advisor",
      "external_url_source": "http://wealthmanagement.com/rss.xml",
      "external_url_type": "basic",
      "image_path": "post_images/551e47a2fce52da61e0006a6/orginal.jpg",
      "image_url": "//d2dnvwecfdx5as.cloudfront.net/post_images/551e47a2fce52da61e0006a6/large.jpg",
      "image_height": None,
      "image_width": 595,
      "logo_url": "//d6k9y5isbbnuf.cloudfront.net/logos/wealthmanagement_logo.png",
      "square_logo_url": "//d6k9y5isbbnuf.cloudfront.net/small+logos/weathmanagement.com_logo.png",
      "needs_sanitize": False,
      "summary": "",
      "title": "eRIA Replacing Robo-Advisor?",
      "topic": "Personal Finance",
      "approval_status": "not_required",
      "approval_transactions": [],
      "group_ids": [
        "551ad323c98f132913000050"
      ],
      "slug": "eria-replacing-robo-advisor-1",
      "article_id": "551e479dfce52da61e0006a3",
      "comment": None,
      "newsletter_ids": [
        "551ad323c98f132913000051"
      ],
      "is_featured": False,
      "advisor_id": "551ad2edc98f134364000044",
      "is_published": True,
      "is_responsive": True,
      "is_proxy_needed": False,
      "is_mobile_proxy_needed": False,
      "proxy_url": "http://prxme-staging.herokuapp.com",
      "video": None,
      "pdf_attachment_url": None,
      "post_date": "2015-04-03T17:26:18+00:00",
      "suitability_score": 0,
      "video_id": "",
      "display_tag": None,
      "display_summary": "In new research from Cerulli Associates, the analytics firm offered up \"eRIA\" as an alternative term to \"robo-advisor\" for automated investment advice software. Content Classification: Curated The Daily Brief read more"
    }
  ]
}


class test_posts_api(unittest.TestCase):

	def setUp(self):
		self.client = vestorly.ApiClient(host=HOST, headerName='x-vestorly-auth', headerValue=API_KEY)
		self.patcher = patch('urllib2.urlopen')
		self.urlopen_mock = self.patcher.start()

	def test_posts_HTTP_get(self):
		""" """
		self.urlopen_mock.return_value =  MockResponse(json.dumps(HTTP_GET))
		api = vestorly.PostsApi(apiClient=self.client)
		posts = api.findPosts()
		self.assertEquals(len(posts.posts),6)
		self.assertTrue(isinstance(posts.posts[0],vestorly.models.post.Post))

	def test_posts_HTTP_get_by_id(self):
		""" """
		self.urlopen_mock.return_value =  MockResponse(json.dumps(HTTP_GET_BY_ID))
		api = vestorly.PostsApi(apiClient=self.client)
		post = api.getPostByID(**{
			'id' :  '551ed15e90a0ece318000020'
		})
		self.assertTrue(isinstance(post,vestorly.models.postresponse.Postresponse))
		self.assertEquals(post.post._id,'551ed15e90a0ece318000020')

	def test_posts_HTTP_put_update(self):
		""" """
		self.urlopen_mock.return_value =  MockResponse(json.dumps(HTTP_GET_BY_ID))
		api = vestorly.PostsApi(apiClient=self.client)
		post = api.updatePostByID(**{
			'id' :  '551ed15e90a0ece318000020'
		})
		self.assertTrue(isinstance(post,vestorly.models.postresponse.Postresponse))
		self.assertEquals(post.post._id,'551ed15e90a0ece318000020')
		
	# def test_posts_HTTP_post_create(self):
	# 	""" """
	# 	api = vestorly.PostsApi(apiClient=self.client)
	# 	new_post = vestorly.Post()
	# 	new_post.body = "NE"
	# 	d = {
	# 		'id' : '551ed15e90a0ece318000020',
	# 		'post' : self.client.sanitizeForSerialization(new_post)
	# 	}
	# 	response = api.updatePostByID(**d)
	#
	#
	# def test_posts_HTTP_post_create(self):
	# 	""" """
	# 	api = vestorly.PostsApi(apiClient=self.client)
	# 	new_post = vestorly.Post()
	# 	new_post.body = "NE"
	# 	new_post.title = "Hello"
	# 	new_post.post_date = "1/2/2016"
	# 	data = {
	# 		'post' : self.client.sanitizeForSerialization(new_post)
	# 	}
	# 	response = api.createPost(**data)
		
		
  		# 
if __name__ == '__main__':
	unittest.main()