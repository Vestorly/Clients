'use strict';

exports.findMemberEvents = function(vestorly-auth) {

  var examples = {};
  
  examples['application/json'] = {
  "member_events" : [ {
    "originator_type" : "aeiou",
    "member_id" : "aeiou",
    "subject_id" : "aeiou",
    "referer" : "aeiou",
    "originator_id" : "aeiou",
    "created_at" : "aeiou",
    "parent_event_id" : "aeiou",
    "originator_group_id" : "aeiou",
    "event_source" : "aeiou",
    "source" : "aeiou",
    "type" : "aeiou",
    "event_type" : "aeiou",
    "originator_name" : "aeiou",
    "original_url" : "aeiou",
    "event_date" : "aeiou",
    "originator_email" : "aeiou",
    "content_url" : "aeiou",
    "_id" : "aeiou",
    "parent_originator_id" : "aeiou",
    "username" : "aeiou"
  } ],
  "members" : [ {
    "picture_url" : "aeiou",
    "last_name" : "aeiou",
    "_id" : "aeiou",
    "first_name" : "aeiou",
    "added_on" : "aeiou",
    "email" : "aeiou"
  } ]
};
  

  
  if(Object.keys(examples).length > 0)
    return examples[Object.keys(examples)[0]];
  
}
