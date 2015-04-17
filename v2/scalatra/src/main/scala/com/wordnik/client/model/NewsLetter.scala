package com.wordnik.client.model



case class NewsLetter (
  is_sent: Boolean,
  is_default: Boolean,
  click_count: Long,
  unique_click_count: Long,
  total_click_count: Long
)
