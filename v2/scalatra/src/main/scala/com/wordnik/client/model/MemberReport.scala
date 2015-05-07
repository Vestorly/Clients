package com.wordnik.client.model



case class MemberReport (
  day: Int,
  event_count: Int,
  originator_group_id: String,
  parent_originator_id: String,
  source: String,
  type: String,
  year: Int
)
