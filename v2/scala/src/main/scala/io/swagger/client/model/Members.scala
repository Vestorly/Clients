package io.swagger.client.model

import io.swagger.client.model.Meta
import io.swagger.client.model.Member



case class Members (
  members: List[Member],
  more_results: Boolean,
  meta: Meta)
  
