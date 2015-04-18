'use strict';

var url = require('url');


var Articles = require('./ArticlesService');


module.exports.findArticles = function findArticles (req, res, next) {
  var vestorly-auth = req.swagger.params['vestorly-auth'].value;
  var limit = req.swagger.params['limit'].value;
  var text_query = req.swagger.params['text_query'].value;
  

  var result = Articles.findArticles(vestorly-auth, limit, text_query);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};

module.exports.findArticleByID = function findArticleByID (req, res, next) {
  var id = req.swagger.params['id'].value;
  

  var result = Articles.findArticleByID(id);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};
