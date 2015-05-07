package io.swagger.client.model




case class Article (
  _id: String,
  created_at: String,
  title: String,
  body: String,
  is_responsive: Boolean,
  is_proxy_needed: Boolean,
  is_mobile_proxy_needed: Boolean,
  needs_sanitize: Boolean,
  proxy_url: String,
  topic: String,
  suitability_score: String,
  summary: String,
  image_path: String,
  image_url: String,
  image_height: Integer,
  image_width: Integer,
  logo_url: String,
  square_logo_url: String,
  url: String,
  external_url: String,
  external_url_source: String,
  external_url_type: String)
  
