package io.swagger.client.model

import io.swagger.client.model.PersonalSettings
import io.swagger.client.model.OrgSetting
import io.swagger.client.model.Features



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
  personalsetting: PersonalSettings)
  
