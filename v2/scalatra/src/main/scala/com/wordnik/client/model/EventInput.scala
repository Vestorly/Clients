package com.wordnik.client.model

import com.wordnik.client.model.EventContent


case class EventInput (
  type: String,
  referer: String,
  original_url: String,
  originator_email: String,
  subject_email: String,
  parent_event_id: String,
  originator_id: String,
  advisor_id: String,
  subject_id: String,
  event_content: EventContent,
  created_at: String
)
