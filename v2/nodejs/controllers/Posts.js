'use strict';

var url = require('url');


var Posts = require('./PostsService');


module.exports.findPosts = function findPosts (req, res, next) {
  var vestorly-auth = req.swagger.params['vestorly-auth'].value;
  var text_query = req.swagger.params['text_query'].value;
  var external_url = req.swagger.params['external_url'].value;
  var is_published = req.swagger.params['is_published'].value;
  

  var result = Posts.findPosts(vestorly-auth, text_query, external_url, is_published);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};

module.exports.createPost = function createPost (req, res, next) {
  var vestorly-auth = req.swagger.params['vestorly-auth'].value;
  var post = req.swagger.params['post'].value;
  

  var result = Posts.createPost(vestorly-auth, post);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};

module.exports.getPostByID = function getPostByID (req, res, next) {
  var vestorly-auth = req.swagger.params['vestorly-auth'].value;
  var id = req.swagger.params['id'].value;
  

  var result = Posts.getPostByID(vestorly-auth, id);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};

module.exports.updatePostByID = function updatePostByID (req, res, next) {
  var vestorly-auth = req.swagger.params['vestorly-auth'].value;
  var id = req.swagger.params['id'].value;
  var post = req.swagger.params['post'].value;
  

  var result = Posts.updatePostByID(vestorly-auth, id, post);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};
