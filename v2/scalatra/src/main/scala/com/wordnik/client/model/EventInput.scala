package com.wordnik.client.model



case class EventInput (
  referrer: String,
  original_url: String,
  originator_email: String,
  subject_email: String,
  advisor_email: String,
  originator_group_name: String,
  newsletter: String
)
