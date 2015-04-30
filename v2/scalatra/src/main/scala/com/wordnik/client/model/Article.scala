package com.wordnik.client.model



case class Article (
  _id: String,
  created_at: String,
  title: String,
  open_calais_topics: String,
  open_calais_keywords: String,
  vestorly_topics: String,
  categories: String,
  summary: String,
  unparsed_html: String,
  logo_url: String,
  image_url: String,
  url: String,
  external_url: String,
  tags: String
)
