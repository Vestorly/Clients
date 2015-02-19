package io.swagger.client.model

import io.swagger.client.model.Url



case class RSSFeed (
  /* Id of object */
  _id: String,
  /* Name of rss feed */
  name: String,
  /* Category of rss feed */
  category: String,
  /* URL of rss feed */
  url: Url,
  /* Logo URL of rss feed */
  logo_url: Url,
  /* Does the feed need to be sanatized. */
  needs_sanitize: String)
  
