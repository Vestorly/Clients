package com.wordnik.client.model

import com.wordnik.client.model.Meta
import com.wordnik.client.model.Member


case class Members (
  members: List[Member],
  more_results: Boolean,
  meta: Meta
)
