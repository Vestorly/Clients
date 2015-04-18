'use strict';

exports.findNewsletters = function(vestorly_auth) {

  var examples = {};
  
  examples['application/json'] = {
  "newletters" : [ {
    "is_sent" : true,
    "click_count" : 123456789,
    "unique_click_count" : 123456789,
    "is_default" : true,
    "total_click_count" : 123456789
  } ]
};
  

  
  if(Object.keys(examples).length > 0)
    return examples[Object.keys(examples)[0]];
  
}
exports.getNewsletterByID = function(vestorly_auth, id) {

  var examples = {};
  
  examples['application/json'] = {
  "is_sent" : true,
  "click_count" : 123456789,
  "unique_click_count" : 123456789,
  "is_default" : true,
  "total_click_count" : 123456789
};
  

  
  if(Object.keys(examples).length > 0)
    return examples[Object.keys(examples)[0]];
  
}
exports.updateNewsletter = function(vestorly_auth, id, Newsletter) {

  var examples = {};
  
  examples['application/json'] = {
  "is_sent" : true,
  "click_count" : 123456789,
  "unique_click_count" : 123456789,
  "is_default" : true,
  "total_click_count" : 123456789
};
  

  
  if(Object.keys(examples).length > 0)
    return examples[Object.keys(examples)[0]];
  
}
