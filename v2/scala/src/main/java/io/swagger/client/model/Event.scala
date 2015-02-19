package io.swagger.client.model

import io.swagger.client.model.Symbol



case class Event (
  /* Id of object */
  _id: String,
  /* Type of the event */
  _type: Symbol,
  /* Event referrer */
  referrer: String,
  /* Originator URL */
  original_url: String,
  /* Originator email */
  originator_email: String,
  /* Subject email */
  subject_email: String,
  /* Advisor email */
  advisor_email: String,
  /* Original group name */
  originator_group_name: String,
  /* Newsletter */
  newsletter: String)
  
