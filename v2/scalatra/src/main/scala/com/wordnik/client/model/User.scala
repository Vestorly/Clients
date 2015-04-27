package com.wordnik.client.model



case class User (
  _id: String,
  company: String,
  picture_url: String,
  website: String,
  user_type: String,
  slug: String,
  name: String,
  username: String,
  first_name: String,
  last_name: String,
  new_user: Boolean,
  show_tour: Boolean,
  plan_setup: Boolean,
  plan_expired: Boolean,
  plan_status: String,
  plan_id: String,
  plan_stripe: Boolean
)
