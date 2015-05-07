'use strict';

exports.login = function(username, password) {

  var examples = {};
  
  examples['application/json'] = {
  "vestorly-auth" : "aeiou",
  "settings" : {
    "website" : "aeiou",
    "disclosure" : "aeiou",
    "picture_url" : "aeiou",
    "feature" : {
      "_id" : "aeiou"
    },
    "orgsetting" : {
      "privacy_policy_url" : "aeiou",
      "site_url" : "aeiou",
      "name" : "aeiou",
      "company_contact_email" : "aeiou",
      "_id" : "aeiou",
      "terms_and_conditions_url" : "aeiou",
      "is_default" : true,
      "email_theme_name" : "aeiou",
      "company_address" : "aeiou",
      "company_homepage_url" : "aeiou"
    },
    "name" : "aeiou",
    "personalsetting" : {
      "_id" : "aeiou"
    },
    "company" : "aeiou",
    "_id" : "aeiou",
    "adv_brochure" : "aeiou",
    "slug" : "aeiou"
  },
  "new_user" : true,
  "_id" : "aeiou",
  "current_user" : {
    "website" : "aeiou",
    "picture_url" : "aeiou",
    "plan_setup" : true,
    "last_name" : "aeiou",
    "new_user" : true,
    "user_type" : "aeiou",
    "show_tour" : true,
    "name" : "aeiou",
    "company" : "aeiou",
    "plan_expired" : true,
    "_id" : "aeiou",
    "first_name" : "aeiou",
    "plan_stripe" : true,
    "slug" : "aeiou",
    "plan_id" : "aeiou",
    "username" : "aeiou",
    "plan_status" : "aeiou"
  }
};
  

  
  if(Object.keys(examples).length > 0)
    return examples[Object.keys(examples)[0]];
  
}
exports.logout = function(vestorly-auth, id) {

  var examples = {};
  
  examples['application/json'] = {
  "message" : "aeiou"
};
  

  
  if(Object.keys(examples).length > 0)
    return examples[Object.keys(examples)[0]];
  
}
