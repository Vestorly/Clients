'use strict';

var url = require('url');


var Posts = require('./PostsService');


module.exports.findPosts = function findPosts (req, res, next) {
  var vestorlyAuth = req.swagger.params['vestorly_auth'].value;
  var textQuery = req.swagger.params['text_query'].value;
  var externalUrl = req.swagger.params['external_url'].value;
  var isPublished = req.swagger.params['is_published'].value;
  

  var result = Posts.findPosts(vestorlyAuth, textQuery, externalUrl, isPublished);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};

module.exports.createPost = function createPost (req, res, next) {
  var vestorlyAuth = req.swagger.params['vestorly_auth'].value;
  var post = req.swagger.params['post'].value;
  

  var result = Posts.createPost(vestorlyAuth, post);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};

module.exports.getPostByID = function getPostByID (req, res, next) {
  var vestorlyAuth = req.swagger.params['vestorly_auth'].value;
  var id = req.swagger.params['id'].value;
  

  var result = Posts.getPostByID(vestorlyAuth, id);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};

module.exports.updatePostByID = function updatePostByID (req, res, next) {
  var vestorlyAuth = req.swagger.params['vestorly_auth'].value;
  var id = req.swagger.params['id'].value;
  var post = req.swagger.params['post'].value;
  

  var result = Posts.updatePostByID(vestorlyAuth, id, post);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};
