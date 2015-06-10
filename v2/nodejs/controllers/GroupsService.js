'use strict';

exports.findGroups = function(vestorlyAuth) {

  var examples = {};
  
  examples['application/json'] = {
  "groups" : [ {
    "new_weekly_mailer_content" : "aeiou",
    "newsletter_subject" : "aeiou",
    "number_articles_per_group" : 123,
    "autopublish" : true,
    "number_articles_per_newsletter" : 123,
    "_id" : "aeiou",
    "is_hidden" : true,
    "name" : "aeiou",
    "is_default" : true
  } ]
};
  

  
  if(Object.keys(examples).length > 0)
    return examples[Object.keys(examples)[0]];
  
}
exports.createGroup = function(vestorlyAuth, group) {

  var examples = {};
  
  examples['application/json'] = {
  "group" : {
    "new_weekly_mailer_content" : "aeiou",
    "newsletter_subject" : "aeiou",
    "number_articles_per_group" : 123,
    "autopublish" : true,
    "number_articles_per_newsletter" : 123,
    "_id" : "aeiou",
    "is_hidden" : true,
    "name" : "aeiou",
    "is_default" : true
  }
};
  

  
  if(Object.keys(examples).length > 0)
    return examples[Object.keys(examples)[0]];
  
}
exports.findGroupByID = function(vestorlyAuth, id) {

  var examples = {};
  
  examples['application/json'] = {
  "group" : {
    "new_weekly_mailer_content" : "aeiou",
    "newsletter_subject" : "aeiou",
    "number_articles_per_group" : 123,
    "autopublish" : true,
    "number_articles_per_newsletter" : 123,
    "_id" : "aeiou",
    "is_hidden" : true,
    "name" : "aeiou",
    "is_default" : true
  }
};
  

  
  if(Object.keys(examples).length > 0)
    return examples[Object.keys(examples)[0]];
  
}
exports.updateGroupById = function(vestorlyAuth, id, group) {

  var examples = {};
  
  examples['application/json'] = {
  "group" : {
    "new_weekly_mailer_content" : "aeiou",
    "newsletter_subject" : "aeiou",
    "number_articles_per_group" : 123,
    "autopublish" : true,
    "number_articles_per_newsletter" : 123,
    "_id" : "aeiou",
    "is_hidden" : true,
    "name" : "aeiou",
    "is_default" : true
  }
};
  

  
  if(Object.keys(examples).length > 0)
    return examples[Object.keys(examples)[0]];
  
}
exports.deleteGroup = function(vestorlyAuth, id) {

  var examples = {};
  
  examples['application/json'] = {
  "group" : {
    "new_weekly_mailer_content" : "aeiou",
    "newsletter_subject" : "aeiou",
    "number_articles_per_group" : 123,
    "autopublish" : true,
    "number_articles_per_newsletter" : 123,
    "_id" : "aeiou",
    "is_hidden" : true,
    "name" : "aeiou",
    "is_default" : true
  }
};
  

  
  if(Object.keys(examples).length > 0)
    return examples[Object.keys(examples)[0]];
  
}
