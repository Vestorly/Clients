package com.wordnik.client.model



case class MemberEvent (
  _id: String,
  created_at: String,
  type: String,
  source: String,
  referer: String,
  original_url: String,
  originator_email: String,
  originator_name: String,
  parent_originator_id: String,
  parent_event_id: String,
  originator_type: String,
  originator_group_id: String,
  event_type: String,
  event_source: String,
  content_url: String,
  event_date: String,
  username: String,
  member_id: String,
  originator_id: String,
  subject_id: String
)
