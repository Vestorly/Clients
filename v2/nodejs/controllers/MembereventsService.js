'use strict';

exports.findMemberEvents = function(vestorlyAuth) {

  var examples = {};
  
  examples['application/json'] = {
  "member_events" : [ {
    "parent_originator_id" : "aeiou",
    "originator_id" : "aeiou",
    "original_url" : "aeiou",
    "subject_id" : "aeiou",
    "event_type" : "aeiou",
    "type" : "aeiou",
    "originator_name" : "aeiou",
    "parent_event_id" : "aeiou",
    "member_id" : "aeiou",
    "content_url" : "aeiou",
    "originator_type" : "aeiou",
    "username" : "aeiou",
    "_id" : "aeiou",
    "source" : "aeiou",
    "originator_email" : "aeiou",
    "event_date" : "aeiou",
    "created_at" : "aeiou",
    "originator_group_id" : "aeiou",
    "referer" : "aeiou",
    "event_source" : "aeiou"
  } ],
  "members" : [ {
    "first_name" : "aeiou",
    "picture_url" : "aeiou",
    "_id" : "aeiou",
    "email" : "aeiou",
    "last_name" : "aeiou",
    "added_on" : "aeiou"
  } ]
};
  

  
  if(Object.keys(examples).length > 0)
    return examples[Object.keys(examples)[0]];
  
}
