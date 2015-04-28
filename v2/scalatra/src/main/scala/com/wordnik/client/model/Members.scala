package com.wordnik.client.model

import com.wordnik.client.model.Member


case class Members (
  posts: List[Member],
  more_results: Boolean
)
