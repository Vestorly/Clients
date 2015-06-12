'use strict';

exports.findNewsletters = function(vestorlyAuth) {

  var examples = {};
  
  examples['application/json'] = {
  "newsletters" : [ {
    "click_count" : 123456789,
    "is_sent" : true,
    "_id" : "aeiou",
    "total_click_count" : 123456789,
    "unique_click_count" : 123456789,
    "is_default" : true
  } ]
};
  

  
  if(Object.keys(examples).length > 0)
    return examples[Object.keys(examples)[0]];
  
}
exports.getNewsletterByID = function(vestorlyAuth, id) {

  var examples = {};
  
  examples['application/json'] = {
  "newsletter" : {
    "click_count" : 123456789,
    "is_sent" : true,
    "_id" : "aeiou",
    "total_click_count" : 123456789,
    "unique_click_count" : 123456789,
    "is_default" : true
  }
};
  

  
  if(Object.keys(examples).length > 0)
    return examples[Object.keys(examples)[0]];
  
}
exports.updateNewsletterByID = function(vestorlyAuth, id, newsletter) {

  var examples = {};
  
  examples['application/json'] = {
  "newsletter" : {
    "click_count" : 123456789,
    "is_sent" : true,
    "_id" : "aeiou",
    "total_click_count" : 123456789,
    "unique_click_count" : 123456789,
    "is_default" : true
  }
};
  

  
  if(Object.keys(examples).length > 0)
    return examples[Object.keys(examples)[0]];
  
}
