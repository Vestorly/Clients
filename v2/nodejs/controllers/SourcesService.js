'use strict';

exports.findSources = function(vestorlyAuth) {

  var examples = {};
  
  examples['application/json'] = {
  "sources" : [ {
    "enabled" : true,
    "rss_publisher" : "aeiou",
    "_id" : "aeiou",
    "custom_rss_feed" : true,
    "name" : "aeiou",
    "logo_url" : "aeiou",
    "url" : "aeiou"
  } ]
};
  

  
  if(Object.keys(examples).length > 0)
    return examples[Object.keys(examples)[0]];
  
}
exports.createSource = function(vestorlyAuth, source) {

  var examples = {};
  
  examples['application/json'] = {
  "source" : {
    "enabled" : true,
    "rss_publisher" : "aeiou",
    "_id" : "aeiou",
    "custom_rss_feed" : true,
    "name" : "aeiou",
    "logo_url" : "aeiou",
    "url" : "aeiou"
  }
};
  

  
  if(Object.keys(examples).length > 0)
    return examples[Object.keys(examples)[0]];
  
}
exports.getSourceByID = function(vestorlyAuth, id) {

  var examples = {};
  
  examples['application/json'] = {
  "source" : {
    "enabled" : true,
    "rss_publisher" : "aeiou",
    "_id" : "aeiou",
    "custom_rss_feed" : true,
    "name" : "aeiou",
    "logo_url" : "aeiou",
    "url" : "aeiou"
  }
};
  

  
  if(Object.keys(examples).length > 0)
    return examples[Object.keys(examples)[0]];
  
}
exports.updateSourceByID = function(vestorlyAuth, id, source) {

  var examples = {};
  
  examples['application/json'] = {
  "source" : {
    "enabled" : true,
    "rss_publisher" : "aeiou",
    "_id" : "aeiou",
    "custom_rss_feed" : true,
    "name" : "aeiou",
    "logo_url" : "aeiou",
    "url" : "aeiou"
  }
};
  

  
  if(Object.keys(examples).length > 0)
    return examples[Object.keys(examples)[0]];
  
}
