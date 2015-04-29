import json,sys
sys.path.append("../../v2/python/vestorly-python/")

import unittest
from urllib2 import HTTPError
import vestorly

from test_settings import *
from helpers import MockResponse
from mock import patch

class test_sessions_api(unittest.TestCase):

	def setUp(self):
		self.client = vestorly.ApiClient(host=HOST, headerName='x-vestorly-auth', headerValue=API_KEY)
		self.api = vestorly.SessionsApi(apiClient=self.client)
		self.patcher = patch('urllib2.urlopen')
		self.urlopen_mock = self.patcher.start()
		
		
	# def test_api_returns_403_when_using_invalid_api_key(self):
	# 	""" if you provide an invalid API, this should return accessed denied 403"""
	
	# 	with self.assertRaises(HTTPError):
	# 		response = self.api.login(**{
	# 		'username' : "joseph.misiti@gmail.com",
	# 		'password' : "an_invalid_password",
	# 		})
	#
	def test_sessions_return_valid_object(self):
		""" test to make sure the session object returns the correct model info """
		
		
		ret = {
		  "current_user": {
		    "_id": "234234234234234234234234",
		    "company": "Math and Pencil LLC",
		    "picture_url": None,
		    "website": "http://www.mathandpencil.com",
		    "user_type": "Advisor",
		    "slug": "misiti",
		    "name": "Joseph Misiti",
		    "username": "asdfasdasdfasdf@gmail.com",
		    "first_name": "Joseph",
		    "last_name": "Misiti",
		    "new_user": True,
		    "show_tour": False,
		    "plan_setup": False,
		    "plan_expired": False,
		    "plan_status": "trial",
		    "plan_trial_due_date": None,
		    "plan_id": "54c71065c3b5a0c7b6000001",
		    "plan_subscription_id": None,
		    "plan_stripe": True
		  },
		  "current_credential": {},
		  "settings": {
		    "_id": "234234234234234234234234",
		    "company": "Math and Pencil LLC",
		    "picture_url": None,
		    "website": "http://www.mathandpencil.com",
		    "disclosure": None,
		    "adv_brochure": None,
		    "slug": "misiti",
		    "name": "Joseph Misiti",
		    "org_setting": {
		      "_id": "551ad323c98f132913000054",
		      "is_default": False,
		      "name": "zzz_m_united_capital_f30bd9075a46ce286698d60395ac9a06",
		      "email_theme_name": "standard",
		      "company_address": "12 Desbrosses Street, New York, New York 10013",
		      "company_contact_email": "hello@vestorly.com",
		      "site_url": "http://staging.vestorly.com",
		      "company_homepage_url": "http://www.vestorly.com",
		      "privacy_policy_url": "https://www.vestorly.com/privacy",
		      "terms_and_conditions_url": "https://www.vestorly.com/terms",
		      "phone_number": "646-863-9199",
		      "original_post_source_logo_url": "",
		      "compliance_docs_folder_url": "//s3.amazonaws.com/s3-dev.vestorly.com/",
		      "compliance_pre_approval_enabled": False,
		      "api_url": "http://staging.vestorly.com",
		      "api_url_ssl": "https://staging.vestorly.com",
		      "server_url": "//vestorly-test.herokuapp.com",
		      "default_slugname": "m",
		      "facebook_app_id": "undefined",
		      "linkedin_app_id": "x281lefk97mj",
		      "kit_id": "xxe6nui",
		      "gac_id": "UA-29479638-1",
		      "mailer_from_email": None,
		      "invite_approved_advisor_header_text": "You are invited to join the next group of advisors using Vestorly to grow their firms with smarter communication.",
		      "invite_approved_advisor_foooter_text": "Vestorly is still by invitation only. You've been selected because we value your feedback.  Feel free to e-mail us at",
		      "advisor_weekly_activity_intro_text": "Here is your updated report.  You can view the activity in your community on your dashboard and on the attached file.",
		      "advisor_weekly_activity_btn_text": "View your dashboard",
		      "sales_demo_url": "http://www.meetme.so/Vestorly",
		      "user_shares_line": "%s suggests [%s] for you to see when you get a chance.",
		      "user_shares_subject": "Take a look at this when you get a chance...",
		      "site_twitter": "",
		      "reporting_email_override": "hello@vestorly.com",
		      "new_user_notification_email_override": "",
		      "test_email_override": "",
		      "invite_approved_advisor_banner_img_url": "https://s3.amazonaws.com/assets-vestorly/emails/advisor+invite+mailer/banner.jpg",
		      "invite_approved_advisor_btn_img_url": "https://s3.amazonaws.com/assets-vestorly/emails/advisor+invite+mailer/button.jpg",
		      "invite_approved_advisor_footer_img_url": "https://s3.amazonaws.com/assets-vestorly/emails/advisor+invite+mailer/footer_bg.jpg",
		      "invite_approved_advisor_body_img_url": "https://s3.amazonaws.com/assets-vestorly/emails/advisor+invite+mailer/image.jpg",
		      "invite_approved_advisor_logo_img_url": "https://s3.amazonaws.com/assets-vestorly/emails/advisor+invite+mailer/logo.png",
		      "new_user_notification_btn_img_url": "https://s3.amazonaws.com/assets-vestorly/emails/advisor_new_prospect_mailer/go-to-dashboard.png",
		      "weekly_advisor_header_mobile_img_url": "https://s3.amazonaws.com/assets-vestorly/emails/advisor_weekly_advisor_report/header_mobile.jpg",
		      "on_error_blank_logo_image": "//s3.amazonaws.com/assets-vestorly/default_images/blank-80x80.png",
		      "on_error_header_image": "//s3.amazonaws.com/assets-vestorly/default_images/blank-email-header.png",
		      "on_error_header_logo_image": "//s3.amazonaws.com/assets-vestorly/default_images/blank-80x80.png",
		      "on_error_profile_image": "//s3.amazonaws.com/assets-vestorly/default_images/blank-80x80.png",
		      "on_error_recommend_post_image": "//s3.amazonaws.com/assets-vestorly/default_images/blank-80x80.png",
		      "on_error_social_preview_image": "//s3.amazonaws.com/assets-vestorly/default_images/blank-80x80.png",
		      "on_error_website_image": "//s3.amazonaws.com/assets-vestorly/default_images/blank-80x80.png"
		    },
		    "feature": {
		      "_id": "234234234234234234234",
		      "activity_feed_enabled": True,
		      "embed_enabled": True,
		      "social_login_reader_enabled": False,
		      "social_publish_enabled": True,
		      "social_login_advisor_enabled": False,
		      "social_buttons_enabled": True,
		      "multi_content_libraries_enabled": True,
		      "unclickable_featured_tile_enabled": False,
		      "newsletter_enabled": True,
		      "newsletter_schedule_enabled": True,
		      "newsletter_stats_enabled": True,
		      "newsletter_export_enabled": True,
		      "member_activity_enabled": True,
		      "member_export_enabled": True,
		      "post_tagging_enabled": True,
		      "personal_settings_enabled": False,
		      "navbar_extra_btn_enabled": False,
		      "compliance_integration_enabled": False,
		      "crm_integration_enabled": True,
		      "extra_member_data_fields_enabled": False,
		      "original_content_enabled": True,
		      "recommended_posts_enabled": True,
		      "new_user_notification": True,
		      "csv_upload_enabled": True,
		      "auto_publish_feature_enabled": True,
		      "manual_publish_enabled": True,
		      "auto_publish_by_topics": True,
		      "auto_published_articles_number": 2,
		      "full_data_pull_enabled": False,
		      "drag_drop_enabled": True,
		      "open_reader_btn_enabled": False,
		      "is_money_mind_enabled": False,
		      "is_disable_https_login": False,
		      "topic_filtering_enabled": True,
		      "send_xls_weekly_report_enabled": False,
		      "custom_sources_enabled": True,
		      "member_deleting_enabled": True,
		      "default_social_providers_enabled": True,
		      "ratings_enabled": False,
		      "custom_navbar_enabled": False,
		      "payment_information_enabled": False,
		      "integration_social_sharing_enabled": False,
		      "find_content_enabled": False
		    },
		    "personal_setting": {
		      "_id": "551ad323c98f132913000054",
		      "anonymous_social_posting_enabled": False,
		      "company_name": "Vestorly",
		      "site_url": "http://staging.vestorly.com",
		      "navbar_image_url": "//s3.amazonaws.com/assets-vestorly/emails/standard/main-logo-dark.png",
		      "newsletter_footer_image_url": "//s3.amazonaws.com/assets-vestorly/emails/standard/main-logo-dark.png",
		      "email_header_image_url": "//s3.amazonaws.com/assets-vestorly/emails/standard/email-header.png",
		      "email_more_button_image_url": "//s3.amazonaws.com/assets-vestorly/emails/standard/more_btn.png",
		      "facebook_preview_image_url": "//standard.vestorly.com/assets/vestorly/facebook-preview.png",
		      "linkedin_preview_image_url": "//standard.vestorly.com/assets/vestorly/linkedin-preview.png",
		      "twitter_preview_image_url": "//standard.vestorly.com/assets/vestorly/twitter-preview.png",
		      "default_facebook_share_image_url": "",
		      "default_share_image_url": "//s3.amazonaws.com/assets-vestorly/plus-image.png",
		      "favicon_image_url": "http://standard.vestorly.com/favicon.ico",
		      "social_title": "%s Collection of Content",
		      "social_description": "Community Update",
		      "social_posting_text": "%s has an update, see what it's about",
		      "custom_navbar_enabled": False,
		      "reader_login_header_text": "Your Personalized Library",
		      "reader_login_explanation_text": "Enter your email for a personalized experience",
		      "reader_login_button_text": "See Your Collection",
		      "navbar_share_btn_text": "Suggest This",
		      "navbar_discover_btn_text": "Discover More",
		      "featured_post_tile_footer_text": "",
		      "navbar_extra_btn_text": "",
		      "navbar_extra_btn_url": "",
		      "navbar_extra_2_btn_url": "",
		      "navbar_extra_2_btn_text": "",
		      "publisher_login_header_text": "Welcome",
		      "publisher_login_explanation_text": "Enter your credentials to get access",
		      "publisher_login_button_text": "Secure Access",
		      "auto_publish_tile_footer_text": "",
		      "mailer_bottom_copyright": "Foo Capital, 2014. All rights reserved.",
		      "mailer_from_email": None,
		      "navbar_background_color": "#1b1d26",
		      "btn_text_color": "#FFFFFF",
		      "bodywrap_text_color": "#FFFFFF",
		      "login_btn_bg_color": "#7a899f",
		      "login_btn_border_color": "#7a899f",
		      "navbar_share_btn_bg_color": "#7a899f",
		      "navbar_share_btn_border_color": "#7a899f",
		      "navbar_discover_btn_bg_color": "#7a899f",
		      "navbar_discover_btn_border_color": "#7a899f",
		      "navbar_extra_btn_bg_color": "#7a899f",
		      "navbar_extra_btn_border_color": "#7a899f",
		      "newsletter_btn_bg_color": "#7a899f",
		      "newsletter_btn_border_color": "#7a899f",
		      "newsletter_post_title_bg_color": "#7a899f",
		      "navbar_logo_height": "40px",
		      "navbar_default_bg": "#333333",
		      "navbar_default_border": "#333333",
		      "navbar_default_link_active_bg": "#404040",
		      "navbar_default_color": "#F5F5F5",
		      "navbar_default_link_color": "#F5F5F5",
		      "navbar_default_link_hover_color": "#F5F5F5",
		      "navbar_default_link_hover_bg": "transparent",
		      "navbar_default_link_active_color": "#F5F5F5",
		      "navbar_default_brand_color": "#F5F5F5",
		      "btn_login_bg": "#426D80",
		      "btn_login_color": "#FFFFFF",
		      "btn_login_border": "#426D80",
		      "btn_login_hover_bg": "#426D80",
		      "btn_login_hover_color": "#FFFFFF",
		      "btn_suggest_bg": "#5C879A",
		      "btn_suggest_color": "#FFFFFF",
		      "btn_suggest_border": "#5C879A",
		      "btn_suggest_hover_bg": "#426D80",
		      "btn_suggest_hover_color": "#FFFFFF",
		      "btn_header_brand_bg": "#71858E",
		      "btn_header_brand_color": "#FFFFFF",
		      "btn_header_brand_border": "#71858E",
		      "btn_header_brand_hover_bg": "#71858E",
		      "btn_header_brand_hover_color": "#FFFFFF",
		      "btn_header_item_bg": "#9CB456",
		      "btn_header_item_color": "#FFFFFF",
		      "btn_header_item_border": "#9CB456",
		      "btn_header_item_hover_bg": "#9CB456",
		      "btn_header_item_hover_color": "#FFFFFF",
		      "btn_newsletter_bg": "#426D80",
		      "newsletter_header_bg": "#52585E",
		      "newsletter_post_title_bg": "#426D80",
		      "newsletter_post_title_font": "Georgia, Arial, serif",
		      "work_tag_bg": "#426D80",
		      "work_tag_text": "#FFFFFF",
		      "play_tag_bg": "#9CB456",
		      "play_tag_text": "#FFFFFF",
		      "privacy_policy_url": "https://www.vestorly.com/privacy",
		      "terms_and_conditions_url": "https://www.vestorly.com/terms",
		      "bodywrap": "#426D80",
		      "email_headwrap": "#4b798e",
		      "email_bgcolor": "#4b798e",
		      "email_h3color": "#4b798e",
		      "email_bannercolor": "#4b798e",
		      "newsletter_subject": "Our latest update prepared for you",
		      "newsletter_intro_text": "Here is a collection of %s's latest activity, prepared for you.",
		      "newsletter_saluation_text": "%s,",
		      "newsletter_default_salutation_text": "Hello,",
		      "newsletter_btn_text": "See what it's about",
		      "newsletter_tile_font": "Arial",
		      "reporting_email_override": "hello@vestorly.com",
		      "test_email_override": "",
		      "new_user_notification_email_override": "",
		      "user_questionnaire": None
		    }
		  },
		  "vestorly-auth": "MY_TOKEN",
		  "new_user": False
		}
		

		self.urlopen_mock.return_value =  MockResponse(json.dumps(ret))
		response = self.api.login(**{
			'username' : USERNAME,
			'password' : PASSWORD,
		})
				
	  	self.assertEquals(response.vestorly_auth,"MY_TOKEN")
	  	self.assertFalse(response.new_user)
	  	self.assertIsNotNone(response.current_user)


	  
if __name__ == '__main__':
	unittest.main()