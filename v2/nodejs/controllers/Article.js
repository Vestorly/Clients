'use strict';

var url = require('url');


var Article = require('./ArticleService');


module.exports.findArticleByID = function findArticleByID (req, res, next) {
  var id = req.swagger.params['id'].value;
  

  var result = Article.findArticleByID(id);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};
