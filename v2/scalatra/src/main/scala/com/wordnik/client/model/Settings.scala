package com.wordnik.client.model

import com.wordnik.client.model.PersonalSettings
import com.wordnik.client.model.OrgSetting
import com.wordnik.client.model.Features


case class Settings (
  _id: String,
  company: String,
  picture_url: String,
  website: String,
  disclosure: String,
  adv_brochure: String,
  slug: String,
  name: String,
  orgsetting: OrgSetting,
  feature: Features,
  personalsetting: PersonalSettings
)
