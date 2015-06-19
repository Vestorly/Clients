package com.wordnik.client.model

import com.wordnik.client.model.Member
import com.wordnik.client.model.Meta


case class Members (
  members: List[Member],
  more_results: Boolean,
  meta: Meta
)
