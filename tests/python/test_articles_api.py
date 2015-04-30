#!/usr/bin/env python
# -*- coding: utf-8 -*-

import sys, json
sys.path.append("../../v2/python/vestorly-python/")

import unittest
from test_settings import *
import vestorly
from helpers import MockResponse
from mock import patch

HTTP_GET ={
  "articles": [
    {
      "_id": "5541da77c163494c7c0004f2",
      "body": "Fast-growing satellite cities in China are becoming more attractive to job-seekers not only from lesser developed cities but also from first-tier cities, according to a recent survey.",
      "created_at": "2015-04-30T07:32:07Z",
      "external_url": "http://usa.chinadaily.com.cn/epaper/2015-04/30/content_20589450.htm",
      "external_url_source": "http://usa.chinadaily.com.cn/usa_kindle.xml",
      "external_url_type": "basic",
      "image_path": None,
      "image_url": None,
      "image_height": 0,
      "image_width": 0,
      "logo_url": "//d6k9y5isbbnuf.cloudfront.net/logos/china_daily_logo.png",
      "square_logo_url": "//d6k9y5isbbnuf.cloudfront.net/small+logos/china_daily_logo.png",
      "summary": "Fast-growing satellite cities in China are becoming more attractive to job-seekers not only from lesser developed cities but also from first-tier cities, according to a recent survey.",
      "title": "Job seekers favor smaller cities",
      "is_responsive": True,
      "is_proxy_needed": False,
      "is_mobile_proxy_needed": False,
      "needs_sanitize": False,
      "proxy_url": "http://prxme-staging.herokuapp.com",
      "topic": None,
      "suitability_score": 0
    },
    {
      "_id": "5541da8dc163494c7c0004f9",
      "body": "I wouldn't say I wanted to escape from the stressful work and life in Beijing. I would rather say I chose to return to my hometown of Chongqing for a higher quality of life.",
      "created_at": "2015-04-30T07:32:29Z",
      "external_url": "http://usa.chinadaily.com.cn/epaper/2015-04/30/content_20589449.htm",
      "external_url_source": "http://usa.chinadaily.com.cn/usa_kindle.xml",
      "external_url_type": "basic",
      "image_path": None,
      "image_url": None,
      "image_height": 0,
      "image_width": 0,
      "logo_url": "//d6k9y5isbbnuf.cloudfront.net/logos/china_daily_logo.png",
      "square_logo_url": "//d6k9y5isbbnuf.cloudfront.net/small+logos/china_daily_logo.png",
      "summary": "I wouldn't say I wanted to escape from the stressful work and life in Beijing. I would rather say I chose to return to my hometown of Chongqing for a higher quality of life.",
      "title": "I returned to hometown for a better life",
      "is_responsive": True,
      "is_proxy_needed": False,
      "is_mobile_proxy_needed": False,
      "needs_sanitize": False,
      "proxy_url": "http://prxme-staging.herokuapp.com",
      "topic": None,
      "suitability_score": 0
    },
    {
      "_id": "5541daa7c163494c7c000503",
      "body": "Returnees from overseas should get more knowledge of the company or business they are applying for and prepare themselves fully before hunting for a job, to increase their chances of being accepted, human resources experts and recruiting staff said.",
      "created_at": "2015-04-30T07:32:55Z",
      "external_url": "http://usa.chinadaily.com.cn/epaper/2015-04/30/content_20589448.htm",
      "external_url_source": "http://usa.chinadaily.com.cn/usa_kindle.xml",
      "external_url_type": "basic",
      "image_path": None,
      "image_url": None,
      "image_height": 0,
      "image_width": 0,
      "logo_url": "//d6k9y5isbbnuf.cloudfront.net/logos/china_daily_logo.png",
      "square_logo_url": "//d6k9y5isbbnuf.cloudfront.net/small+logos/china_daily_logo.png",
      "summary": "Returnees from overseas should get more knowledge of the company or business they are applying for and prepare themselves fully before hunting for a job, to increase their chances of being accepted, human resources experts and recruiting staff said.",
      "title": "Returnees who understand company have edge",
      "is_responsive": True,
      "is_proxy_needed": False,
      "is_mobile_proxy_needed": False,
      "needs_sanitize": False,
      "proxy_url": "http://prxme-staging.herokuapp.com",
      "topic": None,
      "suitability_score": 0
    },
    {
      "_id": "55422ecfc163494c7c00082a",
      "body": "The idea is simple: stop Ovechkin, who led the NHL with 53 goals, and you limit Washington’s offence",
      "created_at": "2015-04-30T13:31:59Z",
      "external_url": "http://news.nationalpost.com/sports/nhl/new-york-rangers-devising-a-strategy-to-defuse-the-offensive-threat-of-washington-capitals-alex-ovechkin",
      "external_url_source": "http://sports.nationalpost.com/category/sports/feed/",
      "external_url_type": "basic",
      "image_path": "post_images/55422ee7c163494c7c00082b/orginal.jpg",
      "image_url": "//d2dnvwecfdx5as.cloudfront.net/post_images/55422ee7c163494c7c00082b/large.jpg",
      "image_height": 0,
      "image_width": 0,
      "logo_url": "//d6k9y5isbbnuf.cloudfront.net/logos/national_post_logo.png",
      "square_logo_url": "//d6k9y5isbbnuf.cloudfront.net/small+logos/nationalpost_logo.png",
      "summary": "The idea is simple: stop Ovechkin, who led the NHL with 53 goals, and you limit Washington’s offence",
      "title": "New York Rangers devising a strategy to defuse the offensive threat of Washington Capitals’ Alex Ovechkin",
      "is_responsive": True,
      "is_proxy_needed": False,
      "is_mobile_proxy_needed": False,
      "needs_sanitize": False,
      "proxy_url": "http://prxme-staging.herokuapp.com",
      "topic": "Sports",
      "suitability_score": 0
    },
    {
      "_id": "5541d519c163494c7c00035c",
      "body": "Kidnapping and extortion remain high in Mexico, but murders fell for a third year.&#160;&#160;&#160;&#160;&#160;&nbsp;&#160;\n",
      "created_at": "2015-04-30T07:09:13Z",
      "external_url": "http://rssfeeds.usatoday.com/~/90537793/0/usatoday-newstopstories~After-years-of-drug-wars-murders-decline-in-Mexico/",
      "external_url_source": "http://rssfeeds.usatoday.com/usatoday-NewsTopStories",
      "external_url_type": "basic",
      "image_path": "post_images/5541d51fc163494c7c00035d/orginal.jpg",
      "image_url": "//d2dnvwecfdx5as.cloudfront.net/post_images/5541d51fc163494c7c00035d/large.jpg",
      "image_height": 401,
      "image_width": 534,
      "logo_url": "//d6k9y5isbbnuf.cloudfront.net/logos/usa_today_logo.png",
      "square_logo_url": "//d6k9y5isbbnuf.cloudfront.net/small+logos/usatoday_logo.png",
      "summary": "Kidnapping and extortion remain high in Mexico, but murders fell for a third year.&#160;&#160;&#160;&#160;&#160;&nbsp;&#160;\n",
      "title": "After years of drug wars, murders decline in Mexico",
      "is_responsive": True,
      "is_proxy_needed": False,
      "is_mobile_proxy_needed": False,
      "needs_sanitize": True,
      "proxy_url": "http://prxme-staging.herokuapp.com",
      "topic": "World",
      "suitability_score": 0
    },
    {
      "_id": "5541de61c16349c40600069a",
      "body": "The two generations were raised in time periods with drastically different financial landscapes. Yet, despite their diverse backgrounds and dissimilar habits as a whole, size is not their only similarity.",
      "created_at": "2015-04-30T07:48:49Z",
      "external_url": "http://feeds.foxbusiness.com/~r/foxbusiness/investing/mixed/~3/_BUp5dGYr5I/",
      "external_url_source": "http://feeds.foxbusiness.com/foxbusiness/investing/mixed?format=xml",
      "external_url_type": "basic",
      "image_path": "post_images/5541de65c16349c40600069b/orginal.jpg",
      "image_url": "//d2dnvwecfdx5as.cloudfront.net/post_images/5541de65c16349c40600069b/large.jpg",
      "image_height": 360,
      "image_width": 640,
      "logo_url": "//d6k9y5isbbnuf.cloudfront.net/logos/fox_business_logo.png",
      "square_logo_url": "//d6k9y5isbbnuf.cloudfront.net/small+logos/foxbusiness_logo.png",
      "summary": "The two generations were raised in time periods with drastically different financial landscapes. Yet, despite their diverse backgrounds and dissimilar habits as a whole, size is not their only similarity.",
      "title": "Millennials vs. Boomers: Different Age, Same Investments",
      "is_responsive": False,
      "is_proxy_needed": False,
      "is_mobile_proxy_needed": False,
      "needs_sanitize": False,
      "proxy_url": "http://prxme-staging.herokuapp.com",
      "topic": "Markets, Economy & Business",
      "suitability_score": 0
    },
    {
      "_id": "5541ce2ec16349c4060000b9",
      "body": "Senior White House correspondent Bill Plante reflects on the collapse of South Vietnam in 1975",
      "created_at": "2015-04-30T06:39:42Z",
      "external_url": "http://www.cbsnews.com/news/fall-of-saigon-a-time-of-turmoil-and-despair/",
      "external_url_source": "http://www.cbsnews.com/latest/rss/us",
      "external_url_type": "basic",
      "image_path": "post_images/5541ce33c16349c4060000bc/orginal.jpg",
      "image_url": "//d2dnvwecfdx5as.cloudfront.net/post_images/5541ce33c16349c4060000bc/large.jpg",
      "image_height": 350,
      "image_width": 620,
      "logo_url": "//d6k9y5isbbnuf.cloudfront.net/logos/cbs_news_logo.png",
      "square_logo_url": "//d6k9y5isbbnuf.cloudfront.net/small+logos/cbsnew_logo.png",
      "summary": "Senior White House correspondent Bill Plante reflects on the collapse of South Vietnam in 1975",
      "title": "Fall of Saigon a time of turmoil and despair",
      "is_responsive": False,
      "is_proxy_needed": True,
      "is_mobile_proxy_needed": False,
      "needs_sanitize": False,
      "proxy_url": "http://prxme-staging.herokuapp.com",
      "topic": "World",
      "suitability_score": 0
    },
    {
      "_id": "5541de6cc1634914ed0006a0",
      "body": "One-third of Americans have no financial plan, a new study by Northwestern Mutual is reporting. \n\n\n\n\n      Content Classification:&nbsp;\n  \n    \n          \n          Curated\n      \n\nThe Daily Brief\nread more",
      "created_at": "2015-04-30T07:49:00Z",
      "external_url": "http://wealthmanagement.com/blog/what-financial-plan",
      "external_url_source": "http://wealthmanagement.com/rss.xml",
      "external_url_type": "basic",
      "image_path": "post_images/5541de70c1634914ed0006a2/orginal.jpg",
      "image_url": "//d2dnvwecfdx5as.cloudfront.net/post_images/5541de70c1634914ed0006a2/large.jpg",
      "image_height": 335,
      "image_width": 595,
      "logo_url": "//d6k9y5isbbnuf.cloudfront.net/logos/wealthmanagement_logo.png",
      "square_logo_url": "//d6k9y5isbbnuf.cloudfront.net/small+logos/weathmanagement.com_logo.png",
      "summary": "One-third of Americans have no financial plan, a new study by Northwestern Mutual is reporting. \n\n\n\n\n      Content Classification:&nbsp;\n  \n    \n          \n          Curated\n      \n\nThe Daily Brief\nread more",
      "title": "What Financial Plan?",
      "is_responsive": True,
      "is_proxy_needed": False,
      "is_mobile_proxy_needed": False,
      "needs_sanitize": False,
      "proxy_url": "http://prxme-staging.herokuapp.com",
      "topic": "Personal Finance",
      "suitability_score": 0
    },
    {
      "_id": "5541dc92c1634914ed0005e4",
      "body": "Jean Nidetch, the founder of Weight Watchers, has died at the age of 91.",
      "created_at": "2015-04-30T07:41:06Z",
      "external_url": "http://feedproxy.google.com/~r/TheDailyMeal/~3/UgPakT7NvV8/042915",
      "external_url_source": "http://feeds.feedburner.com/thedailymeal",
      "external_url_type": "basic",
      "image_path": "post_images/5541dc96c1634914ed0005e6/orginal.jpg",
      "image_url": "//d2dnvwecfdx5as.cloudfront.net/post_images/5541dc96c1634914ed0005e6/large.jpg",
      "image_height": 400,
      "image_width": 670,
      "logo_url": "//d6k9y5isbbnuf.cloudfront.net/logos/daily_meal_logo.png",
      "square_logo_url": "//d6k9y5isbbnuf.cloudfront.net/small+logos/dailymeal_logo.png",
      "summary": "Jean Nidetch, the founder of Weight Watchers, has died at the age of 91.",
      "title": "Founder of Weight Watchers Jean Nidetch Dies at 91",
      "is_responsive": True,
      "is_proxy_needed": False,
      "is_mobile_proxy_needed": False,
      "needs_sanitize": False,
      "proxy_url": "http://prxme-staging.herokuapp.com",
      "topic": None,
      "suitability_score": 0
    },
    {
      "_id": "5541dc78c1634914ed0005dc",
      "body": "Muffins, Rolls, and Pancakes to make every Mom smile",
      "created_at": "2015-04-30T07:40:40Z",
      "external_url": "http://feedproxy.google.com/~r/TheDailyMeal/~3/5E2VNUHHjh8/mother-s-day-magic-country-crock",
      "external_url_source": "http://feeds.feedburner.com/thedailymeal",
      "external_url_type": "basic",
      "image_path": "post_images/5541dc7bc1634914ed0005de/orginal.jpg",
      "image_url": "//d2dnvwecfdx5as.cloudfront.net/post_images/5541dc7bc1634914ed0005de/large.jpg",
      "image_height": 400,
      "image_width": 670,
      "logo_url": "//d6k9y5isbbnuf.cloudfront.net/logos/daily_meal_logo.png",
      "square_logo_url": "//d6k9y5isbbnuf.cloudfront.net/small+logos/dailymeal_logo.png",
      "summary": "Muffins, Rolls, and Pancakes to make every Mom smile",
      "title": "Mother’s Day Magic With Country Crock®",
      "is_responsive": True,
      "is_proxy_needed": False,
      "is_mobile_proxy_needed": False,
      "needs_sanitize": False,
      "proxy_url": "http://prxme-staging.herokuapp.com",
      "topic": "Food & Drink",
      "suitability_score": 0
    },
    {
      "_id": "5541dc5dc1634914ed0005d0",
      "body": "Rent the Chicken leases out chickens to urban and suburban customers who are starving for delicious, fresh eggs but don’t want to commit to",
      "created_at": "2015-04-30T07:40:13Z",
      "external_url": "http://feedproxy.google.com/~r/TheDailyMeal/~3/yjCjUA4hTCA/042915",
      "external_url_source": "http://feeds.feedburner.com/thedailymeal",
      "external_url_type": "basic",
      "image_path": "post_images/5541dc62c1634914ed0005d3/orginal.jpg",
      "image_url": "//d2dnvwecfdx5as.cloudfront.net/post_images/5541dc62c1634914ed0005d3/large.jpg",
      "image_height": 400,
      "image_width": 670,
      "logo_url": "//d6k9y5isbbnuf.cloudfront.net/logos/daily_meal_logo.png",
      "square_logo_url": "//d6k9y5isbbnuf.cloudfront.net/small+logos/dailymeal_logo.png",
      "summary": "Rent the Chicken leases out chickens to urban and suburban customers who are starving for delicious, fresh eggs but don’t want to commit to",
      "title": "Apparently You Can Now Rent Chickens for Farm-Fresh Eggs",
      "is_responsive": True,
      "is_proxy_needed": False,
      "is_mobile_proxy_needed": False,
      "needs_sanitize": False,
      "proxy_url": "http://prxme-staging.herokuapp.com",
      "topic": None,
      "suitability_score": 0
    },
    {
      "_id": "5541dc43c1634914ed0005c6",
      "body": "A restaurant regular had been looking for the right moment to pay a good deed forward.",
      "created_at": "2015-04-30T07:39:47Z",
      "external_url": "http://feedproxy.google.com/~r/TheDailyMeal/~3/EP6sYu6j0MM/42915",
      "external_url_source": "http://feeds.feedburner.com/thedailymeal",
      "external_url_type": "basic",
      "image_path": "post_images/5541dc47c1634914ed0005c7/orginal.jpg",
      "image_url": "//d2dnvwecfdx5as.cloudfront.net/post_images/5541dc47c1634914ed0005c7/large.jpg",
      "image_height": 400,
      "image_width": 670,
      "logo_url": "//d6k9y5isbbnuf.cloudfront.net/logos/daily_meal_logo.png",
      "square_logo_url": "//d6k9y5isbbnuf.cloudfront.net/small+logos/dailymeal_logo.png",
      "summary": "A restaurant regular had been looking for the right moment to pay a good deed forward.",
      "title": "Customer Saves Waitress From Getting Evicted with 7,000 Percent Tip",
      "is_responsive": True,
      "is_proxy_needed": False,
      "is_mobile_proxy_needed": False,
      "needs_sanitize": False,
      "proxy_url": "http://prxme-staging.herokuapp.com",
      "topic": "Entertainment",
      "suitability_score": 0
    },
    {
      "_id": "5541dc2ac1634914ed0005c0",
      "body": "So what makes a taco great, exactly? It all depends — but here are 75 from around the country.",
      "created_at": "2015-04-30T07:39:22Z",
      "external_url": "http://feedproxy.google.com/~r/TheDailyMeal/~3/je4U6xpJOz8/america-s-best-tacos",
      "external_url_source": "http://feeds.feedburner.com/thedailymeal",
      "external_url_type": "basic",
      "image_path": "post_images/5541dc2dc1634914ed0005c1/orginal.jpg",
      "image_url": "//d2dnvwecfdx5as.cloudfront.net/post_images/5541dc2dc1634914ed0005c1/large.jpg",
      "image_height": 400,
      "image_width": 670,
      "logo_url": "//d6k9y5isbbnuf.cloudfront.net/logos/daily_meal_logo.png",
      "square_logo_url": "//d6k9y5isbbnuf.cloudfront.net/small+logos/dailymeal_logo.png",
      "summary": "So what makes a taco great, exactly? It all depends — but here are 75 from around the country.",
      "title": "America’s 75 Best Tacos",
      "is_responsive": True,
      "is_proxy_needed": False,
      "is_mobile_proxy_needed": False,
      "needs_sanitize": False,
      "proxy_url": "http://prxme-staging.herokuapp.com",
      "topic": "Travel & Leisure",
      "suitability_score": 0
    },
    {
      "_id": "5541df33c1634914ed0006f4",
      "body": "It is stated that Hullaku and Khawaja Hafiz were contemporary. The former extended his empire to terrestrial limits known to him, by soaking the entire territory with human blood, demolishing citadels, seminaries and palaces, his army plundering millions of Eves of their chastity along-with all sorts of havoc which can be captured by human imagination only. The captured territory included Samarkand and Bukhara as well. Horrified by this all and having no arsenal to fight, Khawaja Hafiz chose to shoot a dart of words which remain classic. اگر آن ترک شیرازی بدست آرد دل ِ مارا۔ بخال ہندو اش بخشم سمر قند و بخارا را۔ If my beloved of Sheraz wins my heart. I will bestow upon her black mole Samarkand and Bukhara. He clearly retarded Hullaku that hundreds of thousands of souls killed by him was an act cruel to be justified because a black spot on the face of a man is much more precious than all these territories. Hullaku was enraged when he learnt of the verse. He summoned Hafiz to his court and asked him what that generosity was? The humble soul replied it is this well placed or ill placed generosity which makes my back naked. Let someone remind Hullakus of Riyadh how ignoble and ferocious they are when they are committing ruthless massacre of mankind in Yemen for capturing a territory of Yemen for their greedy objectives. ",
      "created_at": "2015-04-30T07:52:19Z",
      "external_url": "http://ireport.cnn.com/docs/DOC-1237990?ref=feeds%2Flatest",
      "external_url_source": "http://rss.ireport.com/feeds/latest.rss",
      "external_url_type": "basic",
      "image_path": "post_images/5541df36c1634914ed0006f7/orginal.jpg",
      "image_url": "//d2dnvwecfdx5as.cloudfront.net/post_images/5541df36c1634914ed0006f7/large.jpg",
      "image_height": 90,
      "image_width": 120,
      "logo_url": "//d6k9y5isbbnuf.cloudfront.net/logos/cnn_logo.png",
      "square_logo_url": None,
      "summary": "It is stated that Hullaku and Khawaja Hafiz were contemporary. The former extended his empire to terrestrial limits known to him, by soaking the entire territory with human blood, demolishing citadels, seminaries and palaces, his army plundering millions of Eves of their chastity along-with all sorts of havoc which can be captured by human imagination only. The captured territory included Samarkand and Bukhara as well. Horrified by this all and having no arsenal to fight, Khawaja Hafiz chose to shoot a dart of words which remain classic. اگر آن ترک شیرازی بدست آرد دل ِ مارا۔ بخال ہندو اش بخشم سمر قند و بخارا را۔ If my beloved of Sheraz wins my heart. I will bestow upon her black mole Samarkand and Bukhara. He clearly retarded Hullaku that hundreds of thousands of souls killed by him was an act cruel to be justified because a black spot on the face of a man is much more precious than all these territories. Hullaku was enraged when he learnt of the verse. He summoned Hafiz to his court and asked him what that generosity was? The humble soul replied it is this well placed or ill placed generosity which makes my back naked. Let someone remind Hullakus of Riyadh how ignoble and ferocious they are when they are committing ruthless massacre of mankind in Yemen for capturing a territory of Yemen for their greedy objectives. ",
      "title": "Hullakus of Riyadh",
      "is_responsive": False,
      "is_proxy_needed": True,
      "is_mobile_proxy_needed": True,
      "needs_sanitize": True,
      "proxy_url": "http://prxme-staging.herokuapp.com",
      "topic": "Cnn 8",
      "suitability_score": 0
    },
    {
      "_id": "5541e158c1634914ed000790",
      "body": "TEL AVIV – Holding his newborn daughter tightly, Amir Michaeli-Molian appeared beyond exhausted.It was Tuesday, just 10 days since baby Maya’s birth in Kathmandu, Nepal. But already she and her new family — her two fathers, Amir and Alon Michaeli-Molian, and toddler sister Shira — had experienced a devastating earthquake, a daring rescue operation, a flight on an emergency medical jet and an endless stream of Israeli journalists traipsing through their modest apartment since arriving home 24 hours ago.Read full article &#62;&#62;",
      "created_at": "2015-04-30T08:01:28Z",
      "external_url": "http://feeds.washingtonpost.com/c/34656/f/636708/s/45e0a07a/sc/16/l/0M0Swashingtonpost0N0Cworld0Chow0Ean0Eearthquake0Ehighlighted0Ethe0Eplight0Eof0Eisraeli0Egays0Eand0Etheir0Esurrogate0Ebabies0C20A150C0A40C290C419d60Ae80Eecf0A0E11e40E80A50A0E839e9234b30A30Istory0Bhtml0Dwprss0Frss0Iworld/story01.htm",
      "external_url_source": "http://feeds.washingtonpost.com/rss/world",
      "external_url_type": "basic",
      "image_path": "post_images/5541e15fc1634914ed000793/orginal.jpg",
      "image_url": "//d2dnvwecfdx5as.cloudfront.net/post_images/5541e15fc1634914ed000793/large.jpg",
      "image_height": 2048,
      "image_width": 3648,
      "logo_url": "//d6k9y5isbbnuf.cloudfront.net/logos/the_washington_post_logo.png",
      "square_logo_url": "//d6k9y5isbbnuf.cloudfront.net/small+logos/thewashingtonopst_logo.png",
      "summary": "TEL AVIV – Holding his newborn daughter tightly, Amir Michaeli-Molian appeared beyond exhausted.It was Tuesday, just 10 days since baby Maya’s birth in Kathmandu, Nepal. But already she and her new family — her two fathers, Amir and Alon Michaeli-Molian, and toddler sister Shira — had experienced a devastating earthquake, a daring rescue operation, a flight on an emergency medical jet and an endless stream of Israeli journalists traipsing through their modest apartment since arriving home 24 hours ago.Read full article &#62;&#62;",
      "title": "Among Nepal’s earthquake survivors: Israeli gays and their surrogate babies",
      "is_responsive": True,
      "is_proxy_needed": False,
      "is_mobile_proxy_needed": False,
      "needs_sanitize": True,
      "proxy_url": "http://prxme-staging.herokuapp.com",
      "topic": "World",
      "suitability_score": 0
    },
    {
      "_id": "5541da2fc163494c7c0004d8",
      "body": "Labeled 'mellow yellow' in song, this precious herb boasts the color of the sun and has rich traditions in cuisine, art and medicine. Mike Peters reports.",
      "created_at": "2015-04-30T07:30:55Z",
      "external_url": "http://usa.chinadaily.com.cn/epaper/2015-04/30/content_20589590.htm",
      "external_url_source": "http://usa.chinadaily.com.cn/usa_kindle.xml",
      "external_url_type": "basic",
      "image_path": "post_images/5541da3cc163494c7c0004dc/orginal.jpg",
      "image_url": "//d2dnvwecfdx5as.cloudfront.net/post_images/5541da3cc163494c7c0004dc/large.jpg",
      "image_height": 427,
      "image_width": 600,
      "logo_url": "//d6k9y5isbbnuf.cloudfront.net/logos/china_daily_logo.png",
      "square_logo_url": "//d6k9y5isbbnuf.cloudfront.net/small+logos/china_daily_logo.png",
      "summary": "Labeled 'mellow yellow' in song, this precious herb boasts the color of the sun and has rich traditions in cuisine, art and medicine. Mike Peters reports.",
      "title": "Mad about saffron",
      "is_responsive": True,
      "is_proxy_needed": False,
      "is_mobile_proxy_needed": False,
      "needs_sanitize": False,
      "proxy_url": "http://prxme-staging.herokuapp.com",
      "topic": None,
      "suitability_score": 0
    },
    {
      "_id": "5541da48c163494c7c0004e0",
      "body": "You are what you eat, and it is a nutritionist's job to ensure what his or her client puts into the body is healthy.",
      "created_at": "2015-04-30T07:31:20Z",
      "external_url": "http://usa.chinadaily.com.cn/epaper/2015-04/30/content_20589589.htm",
      "external_url_source": "http://usa.chinadaily.com.cn/usa_kindle.xml",
      "external_url_type": "basic",
      "image_path": "post_images/5541da4cc163494c7c0004e3/orginal.jpg",
      "image_url": "//d2dnvwecfdx5as.cloudfront.net/post_images/5541da4cc163494c7c0004e3/large.jpg",
      "image_height": 285,
      "image_width": 151,
      "logo_url": "//d6k9y5isbbnuf.cloudfront.net/logos/china_daily_logo.png",
      "square_logo_url": "//d6k9y5isbbnuf.cloudfront.net/small+logos/china_daily_logo.png",
      "summary": "You are what you eat, and it is a nutritionist's job to ensure what his or her client puts into the body is healthy.",
      "title": "Nutritionists warn against unhealthy diets",
      "is_responsive": True,
      "is_proxy_needed": False,
      "is_mobile_proxy_needed": False,
      "needs_sanitize": False,
      "proxy_url": "http://prxme-staging.herokuapp.com",
      "topic": "Health & Fitness",
      "suitability_score": 0
    },
    {
      "_id": "5541db66c1634914ed000561",
      "body": "BNP Paribas’ first-quarter net profit was boosted by a strong investment banking performance, a weaker euro and new acquisitions in Europe.",
      "created_at": "2015-04-30T07:36:06Z",
      "external_url": "http://www.wsj.com/articles/bnp-paribas-profit-lifted-by-investment-bank-1430370183?mod=rss_markets_main",
      "external_url_source": "http://online.wsj.com/xml/rss/3_7031.xml",
      "external_url_type": "basic",
      "image_path": "post_images/5541db6cc1634914ed000564/orginal.jpg",
      "image_url": "//d2dnvwecfdx5as.cloudfront.net/post_images/5541db6cc1634914ed000564/large.jpg",
      "image_height": 499,
      "image_width": 749,
      "logo_url": "//d6k9y5isbbnuf.cloudfront.net/logos/wall_street_journal_logo.png",
      "square_logo_url": "//d6k9y5isbbnuf.cloudfront.net/small+logos/wallstreetjournal.png",
      "summary": "BNP Paribas’ first-quarter net profit was boosted by a strong investment banking performance, a weaker euro and new acquisitions in Europe.",
      "title": "BNP Paribas Profit Jumps",
      "is_responsive": True,
      "is_proxy_needed": False,
      "is_mobile_proxy_needed": False,
      "needs_sanitize": False,
      "proxy_url": "http://prxme-staging.herokuapp.com",
      "topic": "Markets, Economy & Business",
      "suitability_score": 0
    }
  ]
}

HTTP_GET_BY_ID =  {
  "article": {
    "_id": "5541da77c163494c7c0004f2",
    "body": "Fast-growing satellite cities in China are becoming more attractive to job-seekers not only from lesser developed cities but also from first-tier cities, according to a recent survey.",
    "created_at": "2015-04-30T07:32:07Z",
    "external_url": "http://usa.chinadaily.com.cn/epaper/2015-04/30/content_20589450.htm",
    "external_url_source": "http://usa.chinadaily.com.cn/usa_kindle.xml",
    "external_url_type": "basic",
    "image_path": None,
    "image_url": None,
    "image_height": 0,
    "image_width": 0,
    "logo_url": "//d6k9y5isbbnuf.cloudfront.net/logos/china_daily_logo.png",
    "square_logo_url": "//d6k9y5isbbnuf.cloudfront.net/small+logos/china_daily_logo.png",
    "summary": "Fast-growing satellite cities in China are becoming more attractive to job-seekers not only from lesser developed cities but also from first-tier cities, according to a recent survey.",
    "title": "Job seekers favor smaller cities",
    "is_responsive": True,
    "is_proxy_needed": False,
    "is_mobile_proxy_needed": False,
    "needs_sanitize": False,
    "proxy_url": "http://prxme-staging.herokuapp.com",
    "topic": None,
    "suitability_score": 0
  }
}



class TestStringMethods(unittest.TestCase):

	def setUp(self):
		self.client = vestorly.ApiClient(host=HOST, headerName='x-vestorly-auth', headerValue=API_KEY)
		self.patcher = patch('urllib2.urlopen')
		self.urlopen_mock = self.patcher.start()

	def test_articles_HTTP_get(self):
		""" test /api/v2/articles GET call """ 
		self.urlopen_mock.return_value =  MockResponse(json.dumps(HTTP_GET))
		api = vestorly.ArticlesApi(apiClient=self.client)
		articles = api.findArticles()
		self.assertEquals(len(articles.articles),18)
		self.assertTrue(isinstance(articles.articles[0],vestorly.models.article.Article))
		
	def test_articles_HTTP_get_by_id(self):
		""" test /api/v2/articles/{id} GET call """ 
		self.urlopen_mock.return_value =  MockResponse(json.dumps(HTTP_GET_BY_ID)) 
		api = vestorly.ArticlesApi(apiClient=self.client)
		article = api.findArticleByID(**{
			'id' :  '5541da77c163494c7c0004f2'
		})
		self.assertTrue(isinstance(article,vestorly.models.articleresponse.Articleresponse))
		self.assertEquals(article.article._id,'5541da77c163494c7c0004f2')
	
	
	###################################################
	# these calls directly call the api
	# not mocked, disabled by default.
	###################################################
		
	def DIRECT_API_test_articles_HTTP_get_by_id(self):
		""" """ 
		api = vestorly.ArticlesApi(apiClient=self.client)
		article = api.findArticleByID(**{
			'id' :  '5541da77c163494c7c0004f2'
		})
		self.assertTrue(isinstance(article,vestorly.models.articleresponse.Articleresponse))
		self.assertEquals(article.article._id,'5541da77c163494c7c0004f2')

	def DIRECT_API_test_articles_HTTP_get(self):
		""" """
		api = vestorly.ArticlesApi(apiClient=self.client)
		articles = api.findArticles()
		self.assertTrue(len(articles.articles)>0)
		print articles.articles[0]._id
		
		



if __name__ == '__main__':
	unittest.main()