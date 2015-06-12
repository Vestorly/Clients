'use strict';

exports.findEvents = function(vestorlyAuth) {

  var examples = {};
  
  examples['application/json'] = {
  "events" : [ {
    "event_content" : {
      "updated_at" : "aeiou",
      "content_id" : "aeiou",
      "_id" : "aeiou",
      "content_field" : "aeiou",
      "created_at" : "aeiou",
      "slug" : "aeiou",
      "content_type" : "aeiou"
    },
    "advisor_id" : "aeiou",
    "originator_id" : "aeiou",
    "original_url" : "aeiou",
    "_id" : "aeiou",
    "subject_email" : "aeiou",
    "subject_id" : "aeiou",
    "originator_email" : "aeiou",
    "created_at" : "aeiou",
    "referer" : "aeiou",
    "parent_event_id" : "aeiou",
    "type" : "aeiou"
  } ]
};
  

  
  if(Object.keys(examples).length > 0)
    return examples[Object.keys(examples)[0]];
  
}
exports.createEvent = function(vestorlyAuth, event) {

  var examples = {};
  
  examples['application/json'] = {
  "meta" : {
    "message" : "aeiou"
  }
};
  

  
  if(Object.keys(examples).length > 0)
    return examples[Object.keys(examples)[0]];
  
}
exports.findEventByID = function(id, vestorlyAuth) {

  var examples = {};
  
  examples['application/json'] = {
  "event" : {
    "event_content" : {
      "updated_at" : "aeiou",
      "content_id" : "aeiou",
      "_id" : "aeiou",
      "content_field" : "aeiou",
      "created_at" : "aeiou",
      "slug" : "aeiou",
      "content_type" : "aeiou"
    },
    "advisor_id" : "aeiou",
    "originator_id" : "aeiou",
    "original_url" : "aeiou",
    "_id" : "aeiou",
    "subject_email" : "aeiou",
    "subject_id" : "aeiou",
    "originator_email" : "aeiou",
    "created_at" : "aeiou",
    "referer" : "aeiou",
    "parent_event_id" : "aeiou",
    "type" : "aeiou"
  }
};
  

  
  if(Object.keys(examples).length > 0)
    return examples[Object.keys(examples)[0]];
  
}
