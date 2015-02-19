package io.swagger.client.model




case class Source (
  /* Id of source */
  _id: String,
  /* Name of source */
  name: String,
  /* Url of source */
  url: String,
  /* Logo url of source */
  logo_url: String,
  /* Is the source enabled */
  enabled: Boolean,
  /* Is the source using custom RSS feed */
  custom_rss_feed: Boolean,
  /* RSS publisher of the source */
  rss_publisher: String)
  
