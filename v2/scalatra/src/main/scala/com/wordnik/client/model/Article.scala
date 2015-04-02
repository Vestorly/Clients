package com.wordnik.client.model

import com.wordnik.client.model.Datetime


case class Article (
  _id: String,
  url: String,
  title: String,
  open_calais_topics: String,
  open_calais_keywords: String,
  categories: String,
  summary: String,
  unparsed_html: String,
  parsed_html: String,
  content: String,
  vestorly_topics: String,
  override_topic: String,
  published_at: Datetime,
  original_image_url: String,
  small_image_url: String,
  large_image_url: String,
  img: String,
  webpage_mobile_image_url: String,
  webpage_tablet_image_url: String,
  rss_feed_url: String,
  rss_feed_category: String,
  rss_feed_logo_url: String,
  needs_sanitize: Boolean,
  is_responsive: Boolean,
  is_proxy_needed: Boolean,
  is_mobile_proxy_needed: Boolean,
  is_working_url: Boolean
)
