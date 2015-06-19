'use strict';

var url = require('url');


var Articles = require('./ArticlesService');


module.exports.findArticles = function findArticles (req, res, next) {
  var vestorlyAuth = req.swagger.params['vestorly_auth'].value;
  var limit = req.swagger.params['limit'].value;
  var textQuery = req.swagger.params['text_query'].value;
  var sortDirection = req.swagger.params['sort_direction'].value;
  var sortBy = req.swagger.params['sort_by'].value;
  

  var result = Articles.findArticles(vestorlyAuth, limit, textQuery, sortDirection, sortBy);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};

module.exports.findArticleByID = function findArticleByID (req, res, next) {
  var vestorlyAuth = req.swagger.params['vestorly_auth'].value;
  var id = req.swagger.params['id'].value;
  

  var result = Articles.findArticleByID(vestorlyAuth, id);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};
