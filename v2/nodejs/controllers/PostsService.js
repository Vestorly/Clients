'use strict';

exports.findPosts = function(vestorly_auth, filter_by) {

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
exports.createPost = function(vestorly_auth, Post) {

  var examples = {};
  
  examples['application/json'] = {
  "client_only" : true,
  "img_compressed" : true,
  "img_changed" : true
};
  

  
  if(Object.keys(examples).length > 0)
    return examples[Object.keys(examples)[0]];
  
}
exports.getPostByID = function(vestorly_auth, id, filter_by) {

  var examples = {};
  
  examples['application/json'] = {
  "client_only" : true,
  "img_compressed" : true,
  "img_changed" : true
};
  

  
  if(Object.keys(examples).length > 0)
    return examples[Object.keys(examples)[0]];
  
}
exports.updatePostByID = function(vestorly_auth, id, Post) {

  var examples = {};
  
  examples['application/json'] = {
  "client_only" : true,
  "img_compressed" : true,
  "img_changed" : true
};
  

  
  if(Object.keys(examples).length > 0)
    return examples[Object.keys(examples)[0]];
  
}
