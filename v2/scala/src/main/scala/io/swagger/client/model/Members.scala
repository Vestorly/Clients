package io.swagger.client.model

import io.swagger.client.model.Member
import io.swagger.client.model.Meta



case class Members (
  members: List[Member],
  more_results: Boolean,
  meta: Meta)
  
