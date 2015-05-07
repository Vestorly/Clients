package com.wordnik.client.model

import com.wordnik.client.model.TruncatedMember
import com.wordnik.client.model.MemberEvent


case class MemberEvents (
  members: List[TruncatedMember],
  member_events: List[MemberEvent]
)
