'use strict';

var url = require('url');


var Posts = require('./PostsService');


module.exports.findPosts = function findPosts (req, res, next) {
  var vestorly_auth = req.swagger.params['vestorly_auth'].value;
  var filter_by = req.swagger.params['filter_by'].value;
  

  var result = Posts.findPosts(vestorly_auth, filter_by);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};

module.exports.createPost = function createPost (req, res, next) {
  var vestorly_auth = req.swagger.params['vestorly_auth'].value;
  var Post = req.swagger.params['Post'].value;
  

  var result = Posts.createPost(vestorly_auth, Post);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};

module.exports.getPostByID = function getPostByID (req, res, next) {
  var vestorly_auth = req.swagger.params['vestorly_auth'].value;
  var id = req.swagger.params['id'].value;
  var filter_by = req.swagger.params['filter_by'].value;
  

  var result = Posts.getPostByID(vestorly_auth, id, filter_by);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};

module.exports.updatePostByID = function updatePostByID (req, res, next) {
  var vestorly_auth = req.swagger.params['vestorly_auth'].value;
  var id = req.swagger.params['id'].value;
  var Post = req.swagger.params['Post'].value;
  

  var result = Posts.updatePostByID(vestorly_auth, id, Post);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};
