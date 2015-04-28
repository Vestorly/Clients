'use strict';

exports.findNewsletterSettings = function(vestorly-auth) {

  var examples = {};
  
  examples['application/json'] = {
  "newletter_settings" : [ {
    "twitter_hour" : 123,
    "linkedin_status" : "aeiou",
    "email_hour" : 123,
    "facebook_hour" : 123,
    "linkedin_hour" : 123,
    "_id" : "aeiou",
    "email_status" : "aeiou",
    "twitter_status" : "aeiou"
  } ]
};
  

  
  if(Object.keys(examples).length > 0)
    return examples[Object.keys(examples)[0]];
  
}
exports.findNewsletterSettingsByID = function(id, vestorly-auth) {

  var examples = {};
  
  examples['application/json'] = {
  "newsletter_setting" : {
    "twitter_hour" : 123,
    "linkedin_status" : "aeiou",
    "email_hour" : 123,
    "facebook_hour" : 123,
    "linkedin_hour" : 123,
    "_id" : "aeiou",
    "email_status" : "aeiou",
    "twitter_status" : "aeiou"
  }
};
  

  
  if(Object.keys(examples).length > 0)
    return examples[Object.keys(examples)[0]];
  
}
exports.updateNewsletterSettingsByID = function(id, vestorly-auth, newsletter_setting) {

  var examples = {};
  
  examples['application/json'] = {
  "newsletter_setting" : {
    "twitter_hour" : 123,
    "linkedin_status" : "aeiou",
    "email_hour" : 123,
    "facebook_hour" : 123,
    "linkedin_hour" : 123,
    "_id" : "aeiou",
    "email_status" : "aeiou",
    "twitter_status" : "aeiou"
  }
};
  

  
  if(Object.keys(examples).length > 0)
    return examples[Object.keys(examples)[0]];
  
}
