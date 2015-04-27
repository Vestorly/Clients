package com.wordnik.client.model

import com.wordnik.client.model.User
import com.wordnik.client.model.Settings


case class Session (
  _id: String,
  vestorly-auth: String,
  new_user: Boolean,
  current_user: User,
  settings: Settings
)
