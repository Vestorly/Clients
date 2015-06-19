package com.wordnik.client.model

import com.wordnik.client.model.MemberEvent
import com.wordnik.client.model.TruncatedMember


case class MemberEvents (
  members: List[TruncatedMember],
  member_events: List[MemberEvent]
)
