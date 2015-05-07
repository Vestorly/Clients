package com.wordnik.client.model



case class Meta (
  sort_order: String,
  more_results: Boolean,
  message: String,
  sorted_by: List[String]
)
