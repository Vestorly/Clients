package com.wordnik.client.model



case class Advisor (
  _id: String,
  company: String,
  address: String,
  city: String,
  state: String,
  zip: String,
  first_name: String,
  last_name: String,
  reg_number: String,
  account_type: String,
  advisor_employees: String,
  assets: String,
  num_clients: Int
)
