'use strict';

exports.findArticles = function(vestorly-auth, limit, text_query, sort_direction, sort_by) {

  var examples = {};
  
  examples['application/json'] = {
  "articles" : [ {
    "summary" : "aeiou",
    "square_logo_url" : "aeiou",
    "suitability_score" : "aeiou",
    "is_responsive" : true,
    "logo_url" : "aeiou",
    "image_url" : "aeiou",
    "needs_sanitize" : true,
    "created_at" : "aeiou",
    "is_mobile_proxy_needed" : true,
    "external_url_type" : "aeiou",
    "image_width" : 123,
    "title" : "aeiou",
    "body" : "aeiou",
    "url" : "aeiou",
    "external_url" : "aeiou",
    "image_height" : 123,
    "is_proxy_needed" : true,
    "image_path" : "aeiou",
    "topic" : "aeiou",
    "_id" : "aeiou",
    "proxy_url" : "aeiou",
    "external_url_source" : "aeiou"
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
    "square_logo_url" : "aeiou",
    "suitability_score" : "aeiou",
    "is_responsive" : true,
    "logo_url" : "aeiou",
    "image_url" : "aeiou",
    "needs_sanitize" : true,
    "created_at" : "aeiou",
    "is_mobile_proxy_needed" : true,
    "external_url_type" : "aeiou",
    "image_width" : 123,
    "title" : "aeiou",
    "body" : "aeiou",
    "url" : "aeiou",
    "external_url" : "aeiou",
    "image_height" : 123,
    "is_proxy_needed" : true,
    "image_path" : "aeiou",
    "topic" : "aeiou",
    "_id" : "aeiou",
    "proxy_url" : "aeiou",
    "external_url_source" : "aeiou"
  }
};
  

  
  if(Object.keys(examples).length > 0)
    return examples[Object.keys(examples)[0]];
  
}
