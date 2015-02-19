package io.swagger.client.model

import io.swagger.client.model.Datetime



case class Article (
  /* Id of object */
  _id: String,
  /* URL of the article */
  url: String,
  /* Title of the article */
  title: String,
  /* Open calcais optics */
  open_calais_topics: String,
  /* Open calais keywords */
  open_calais_keywords: String,
  /* Categories of article */
  categories: String,
  /* Summary of article */
  summary: String,
  /* Unparsed HTML */
  unparsed_html: String,
  /* Parsed HTML */
  parsed_html: String,
  /* Content of article */
  content: String,
  /* Vestorly topics */
  vestorly_topics: String,
  /* Override topics */
  override_topic: String,
  /* Article published at time */
  published_at: Datetime,
  /* Original image url */
  original_image_url: String,
  /* Small image url */
  small_image_url: String,
  /* Large image url */
  large_image_url: String,
  /* Image */
  img: String,
  /* Webpage mobile url */
  webpage_mobile_image_url: String,
  /* Webpage tablet url */
  webpage_tablet_image_url: String,
  /* Article URL */
  rss_feed_url: String,
  /* Article category */
  rss_feed_category: String,
  /* Article logo */
  rss_feed_logo_url: String,
  /* Does this article need sanitizing? */
  needs_sanitize: Boolean,
  /* Is this article responsive */
  is_responsive: Boolean,
  /* Is a proxy used for this article */
  is_proxy_needed: Boolean,
  /* Is mobile proxying needed */
  is_mobile_proxy_needed: Boolean,
  /* Is working url? */
  is_working_url: Boolean)
  
