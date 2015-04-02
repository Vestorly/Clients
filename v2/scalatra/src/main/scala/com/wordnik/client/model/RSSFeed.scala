package com.wordnik.client.model

import com.wordnik.client.model.Url


case class RSSFeed (
  _id: String,
  name: String,
  category: String,
  url: Url,
  logo_url: Url,
  needs_sanitize: String
)
