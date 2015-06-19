'use strict';

var url = require('url');


var Newsletters = require('./NewslettersService');


module.exports.findNewsletters = function findNewsletters (req, res, next) {
  var vestorlyAuth = req.swagger.params['vestorly_auth'].value;
  

  var result = Newsletters.findNewsletters(vestorlyAuth);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};

module.exports.getNewsletterByID = function getNewsletterByID (req, res, next) {
  var vestorlyAuth = req.swagger.params['vestorly_auth'].value;
  var id = req.swagger.params['id'].value;
  

  var result = Newsletters.getNewsletterByID(vestorlyAuth, id);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};

module.exports.updateNewsletterByID = function updateNewsletterByID (req, res, next) {
  var vestorlyAuth = req.swagger.params['vestorly_auth'].value;
  var id = req.swagger.params['id'].value;
  var newsletter = req.swagger.params['newsletter'].value;
  

  var result = Newsletters.updateNewsletterByID(vestorlyAuth, id, newsletter);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};
