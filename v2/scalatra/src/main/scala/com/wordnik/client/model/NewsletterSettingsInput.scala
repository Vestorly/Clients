package com.wordnik.client.model



case class NewsletterSettingsInput (
  email_status: String,
  twitter_status: String,
  linkedin_status: String,
  email_hour: Int,
  twitter_hour: Int,
  linkedin_hour: Int,
  facebook_hour: Int
)
