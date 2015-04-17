'use strict';

var url = require('url');


var Posts = require('./PostsService');


module.exports.createPost = function createPost (req, res, next) {
  var Post = req.swagger.params['Post'].value;
  

  var result = Posts.createPost(Post);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};
