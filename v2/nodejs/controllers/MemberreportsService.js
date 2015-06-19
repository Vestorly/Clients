'use strict';

exports.findMemberReports = function(vestorlyAuth) {

  var examples = {};
  
  examples['application/json'] = {
  "member_reports" : [ {
    "parent_originator_id" : "aeiou",
    "source" : "aeiou",
    "year" : 123,
    "originator_group_id" : "aeiou",
    "day" : 123,
    "type" : "aeiou",
    "event_count" : 123
  } ]
};
  

  
  if(Object.keys(examples).length > 0)
    return examples[Object.keys(examples)[0]];
  
}
