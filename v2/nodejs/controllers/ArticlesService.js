'use strict';

exports.findArticles = function(vestorly-auth, limit, text_query, sort_direction, sort_by) {

  var examples = {};
  
  examples['application/json'] = {
  "articles" : [ {
    "summary" : "aeiou",
    "logo_url" : "aeiou",
    "image_url" : "aeiou",
    "created_at" : "aeiou",
    "open_calais_keywords" : "aeiou",
    "title" : "aeiou",
    "url" : "aeiou",
    "tags" : "aeiou",
    "external_url" : "aeiou",
    "_id" : "aeiou",
    "open_calais_topics" : "aeiou",
    "categories" : "aeiou",
    "vestorly_topics" : "aeiou",
    "unparsed_html" : "aeiou"
  } ]
};
  

  
  if(Object.keys(examples).length > 0)
    return examples[Object.keys(examples)[0]];
  
}
exports.findArticleByID = function(vestorly-auth, id) {

  var examples = {};
  
  examples['application/json'] = {
  "article" : {
    "summary" : "aeiou",
    "logo_url" : "aeiou",
    "image_url" : "aeiou",
    "created_at" : "aeiou",
    "open_calais_keywords" : "aeiou",
    "title" : "aeiou",
    "url" : "aeiou",
    "tags" : "aeiou",
    "external_url" : "aeiou",
    "_id" : "aeiou",
    "open_calais_topics" : "aeiou",
    "categories" : "aeiou",
    "vestorly_topics" : "aeiou",
    "unparsed_html" : "aeiou"
  }
};
  

  
  if(Object.keys(examples).length > 0)
    return examples[Object.keys(examples)[0]];
  
}
