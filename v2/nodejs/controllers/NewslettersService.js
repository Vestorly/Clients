'use strict';

exports.findNewsletters = function(vestorly-auth) {

  var examples = {};
  
  examples['application/json'] = {
  "is_sent" : true,
  "click_count" : 123456789,
  "unique_click_count" : 123456789,
  "_id" : "aeiou",
  "is_default" : true,
  "total_click_count" : 123456789
};
  

  
  if(Object.keys(examples).length > 0)
    return examples[Object.keys(examples)[0]];
  
}
exports.createNewsletter = function(vestorly-auth, newsletter) {

  var examples = {};
  
  examples['application/json'] = {
  "newsletter" : {
    "img" : "aeiou",
    "client_only" : true,
    "image_url" : "aeiou",
    "video" : "aeiou",
    "title" : "aeiou",
    "body" : "aeiou",
    "img_compressed" : true,
    "img_changed" : true,
    "attachment" : "aeiou",
    "post_date" : "aeiou",
    "vestorly_url" : "aeiou",
    "topic" : "aeiou",
    "comment" : "aeiou",
    "_id" : "aeiou"
  }
};
  

  
  if(Object.keys(examples).length > 0)
    return examples[Object.keys(examples)[0]];
  
}
exports.getNewsletterByID = function(vestorly-auth, id) {

  var examples = {};
  
  examples['application/json'] = {
  "newsletter" : {
    "img" : "aeiou",
    "client_only" : true,
    "image_url" : "aeiou",
    "video" : "aeiou",
    "title" : "aeiou",
    "body" : "aeiou",
    "img_compressed" : true,
    "img_changed" : true,
    "attachment" : "aeiou",
    "post_date" : "aeiou",
    "vestorly_url" : "aeiou",
    "topic" : "aeiou",
    "comment" : "aeiou",
    "_id" : "aeiou"
  }
};
  

  
  if(Object.keys(examples).length > 0)
    return examples[Object.keys(examples)[0]];
  
}
exports.updateNewsletterByID = function(vestorly-auth, id, newsletter) {

  var examples = {};
  
  examples['application/json'] = {
  "newsletter" : {
    "img" : "aeiou",
    "client_only" : true,
    "image_url" : "aeiou",
    "video" : "aeiou",
    "title" : "aeiou",
    "body" : "aeiou",
    "img_compressed" : true,
    "img_changed" : true,
    "attachment" : "aeiou",
    "post_date" : "aeiou",
    "vestorly_url" : "aeiou",
    "topic" : "aeiou",
    "comment" : "aeiou",
    "_id" : "aeiou"
  }
};
  

  
  if(Object.keys(examples).length > 0)
    return examples[Object.keys(examples)[0]];
  
}
