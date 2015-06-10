'use strict';

exports.findArticles = function(vestorlyAuth, limit, textQuery, sortDirection, sortBy) {

  var examples = {};
  
  examples['application/json'] = {
  "articles" : [ {
    "topic" : "aeiou",
    "summary" : "aeiou",
    "body" : "aeiou",
    "is_responsive" : true,
    "proxy_url" : "aeiou",
    "needs_sanitize" : true,
    "image_height" : 123,
    "is_mobile_proxy_needed" : true,
    "square_logo_url" : "aeiou",
    "external_url_type" : "aeiou",
    "url" : "aeiou",
    "external_url_source" : "aeiou",
    "title" : "aeiou",
    "_id" : "aeiou",
    "image_url" : "aeiou",
    "is_proxy_needed" : true,
    "image_width" : 123,
    "created_at" : "aeiou",
    "image_path" : "aeiou",
    "external_url" : "aeiou",
    "logo_url" : "aeiou",
    "suitability_score" : "aeiou"
  } ]
};
  

  
  if(Object.keys(examples).length > 0)
    return examples[Object.keys(examples)[0]];
  
}
exports.findArticleByID = function(vestorlyAuth, id) {

  var examples = {};
  
  examples['application/json'] = {
  "article" : {
    "topic" : "aeiou",
    "summary" : "aeiou",
    "body" : "aeiou",
    "is_responsive" : true,
    "proxy_url" : "aeiou",
    "needs_sanitize" : true,
    "image_height" : 123,
    "is_mobile_proxy_needed" : true,
    "square_logo_url" : "aeiou",
    "external_url_type" : "aeiou",
    "url" : "aeiou",
    "external_url_source" : "aeiou",
    "title" : "aeiou",
    "_id" : "aeiou",
    "image_url" : "aeiou",
    "is_proxy_needed" : true,
    "image_width" : 123,
    "created_at" : "aeiou",
    "image_path" : "aeiou",
    "external_url" : "aeiou",
    "logo_url" : "aeiou",
    "suitability_score" : "aeiou"
  }
};
  

  
  if(Object.keys(examples).length > 0)
    return examples[Object.keys(examples)[0]];
  
}
