'use strict';

exports.findPosts = function(vestorly-auth, filter_by) {

  var examples = {};
  
  examples['application/json'] = {
  "posts" : [ {
    "client_only" : true,
    "img_compressed" : true,
    "img_changed" : true
  } ]
};
  

  
  if(Object.keys(examples).length > 0)
    return examples[Object.keys(examples)[0]];
  
}
exports.createPost = function(vestorly-auth, Post) {

  var examples = {};
  
  examples['application/json'] = {
  "client_only" : true,
  "img_compressed" : true,
  "img_changed" : true
};
  

  
  if(Object.keys(examples).length > 0)
    return examples[Object.keys(examples)[0]];
  
}
exports.getPostByID = function(vestorly-auth, id, filter_by) {

  var examples = {};
  
  examples['application/json'] = {
  "client_only" : true,
  "img_compressed" : true,
  "img_changed" : true
};
  

  
  if(Object.keys(examples).length > 0)
    return examples[Object.keys(examples)[0]];
  
}
exports.updatePostByID = function(vestorly-auth, id, Post) {

  var examples = {};
  
  examples['application/json'] = {
  "client_only" : true,
  "img_compressed" : true,
  "img_changed" : true
};
  

  
  if(Object.keys(examples).length > 0)
    return examples[Object.keys(examples)[0]];
  
}
