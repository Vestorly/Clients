'use strict';

exports.findMemberReports = function(vestorly-auth) {

  var examples = {};
  
  examples['application/json'] = {
  "member_reports" : [ {
    "year" : 123,
    "event_count" : 123,
    "originator_group_id" : "aeiou",
    "source" : "aeiou",
    "type" : "aeiou",
    "day" : 123,
    "parent_originator_id" : "aeiou"
  } ]
};
  

  
  if(Object.keys(examples).length > 0)
    return examples[Object.keys(examples)[0]];
  
}
