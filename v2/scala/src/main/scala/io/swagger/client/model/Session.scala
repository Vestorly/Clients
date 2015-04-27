package io.swagger.client.model

import io.swagger.client.model.User
import io.swagger.client.model.Settings



case class Session (
  _id: String,
  vestorly-auth: String,
  new_user: Boolean,
  current_user: User,
  settings: Settings)
  
