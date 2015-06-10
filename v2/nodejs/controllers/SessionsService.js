'use strict';

exports.login = function(username, password) {

  var examples = {};
  
  examples['application/json'] = {
  "_id" : "aeiou",
  "current_user" : {
    "picture_url" : "aeiou",
    "website" : "aeiou",
    "user_type" : "aeiou",
    "plan_expired" : true,
    "new_user" : true,
    "plan_id" : "aeiou",
    "plan_setup" : true,
    "first_name" : "aeiou",
    "show_tour" : true,
    "plan_status" : "aeiou",
    "username" : "aeiou",
    "plan_stripe" : true,
    "_id" : "aeiou",
    "company" : "aeiou",
    "name" : "aeiou",
    "last_name" : "aeiou",
    "slug" : "aeiou"
  },
  "settings" : {
    "orgsetting" : {
      "terms_and_conditions_url" : "aeiou",
      "company_address" : "aeiou",
      "_id" : "aeiou",
      "email_theme_name" : "aeiou",
      "name" : "aeiou",
      "is_default" : true,
      "company_homepage_url" : "aeiou",
      "company_contact_email" : "aeiou",
      "privacy_policy_url" : "aeiou",
      "site_url" : "aeiou"
    },
    "adv_brochure" : "aeiou",
    "picture_url" : "aeiou",
    "_id" : "aeiou",
    "website" : "aeiou",
    "personalsetting" : {
      "_id" : "aeiou"
    },
    "name" : "aeiou",
    "company" : "aeiou",
    "disclosure" : "aeiou",
    "feature" : {
      "_id" : "aeiou"
    },
    "slug" : "aeiou"
  },
  "vestorly-auth" : "aeiou",
  "new_user" : true
};
  

  
  if(Object.keys(examples).length > 0)
    return examples[Object.keys(examples)[0]];
  
}
exports.logout = function(vestorlyAuth, id) {

  var examples = {};
  
  examples['application/json'] = {
  "message" : "aeiou"
};
  

  
  if(Object.keys(examples).length > 0)
    return examples[Object.keys(examples)[0]];
  
}
