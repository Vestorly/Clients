package io.swagger.client.model




case class GroupInput (
  _id: String,
  name: String,
  is_default: Boolean,
  is_hidden: Boolean,
  new_weekly_mailer_content: String,
  newsletter_subject: String,
  autopublish: Boolean,
  number_articles_per_group: Integer,
  number_articles_per_newsletter: Integer)
  
