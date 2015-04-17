package com.wordnik.client.model



case class Newsletter (
  is_sent: Boolean,
  is_default: Boolean,
  click_count: Long,
  unique_click_count: Long,
  total_click_count: Long
)
