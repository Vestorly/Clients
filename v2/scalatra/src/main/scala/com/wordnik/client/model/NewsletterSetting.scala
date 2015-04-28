package com.wordnik.client.model



case class NewsletterSetting (
  _id: String,
  email_status: String,
  twitter_status: String,
  linkedin_status: String,
  email_hour: Int,
  twitter_hour: Int,
  linkedin_hour: Int,
  facebook_hour: Int
)
