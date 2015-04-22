package com.wordnik.client.model



case class PostInput (
  _id: String,
  title: String,
  post_date: String,
  body: String,
  comment: String,
  client_only: Boolean,
  attachment: String,
  video: String,
  img: String,
  image_url: String,
  img_compressed: Boolean,
  img_changed: Boolean,
  topic: String
)
