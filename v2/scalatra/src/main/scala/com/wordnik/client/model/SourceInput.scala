package com.wordnik.client.model



case class SourceInput (
  name: String,
  url: String,
  logo_url: String,
  enabled: Boolean,
  custom_rss_feed: Boolean,
  rss_publisher: String
)
