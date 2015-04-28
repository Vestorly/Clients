'use strict';

var url = require('url');


var Newsletters = require('./NewslettersService');


module.exports.findNewsletters = function findNewsletters (req, res, next) {
  var vestorly-auth = req.swagger.params['vestorly-auth'].value;
  

  var result = Newsletters.findNewsletters(vestorly-auth);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};

module.exports.createNewsletter = function createNewsletter (req, res, next) {
  var vestorly-auth = req.swagger.params['vestorly-auth'].value;
  var Event = req.swagger.params['Event'].value;
  

  var result = Newsletters.createNewsletter(vestorly-auth, Event);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};

module.exports.getNewsletterByID = function getNewsletterByID (req, res, next) {
  var vestorly-auth = req.swagger.params['vestorly-auth'].value;
  var id = req.swagger.params['id'].value;
  

  var result = Newsletters.getNewsletterByID(vestorly-auth, id);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};

module.exports.updateNewsletterByID = function updateNewsletterByID (req, res, next) {
  var vestorly-auth = req.swagger.params['vestorly-auth'].value;
  var id = req.swagger.params['id'].value;
  var Event = req.swagger.params['Event'].value;
  

  var result = Newsletters.updateNewsletterByID(vestorly-auth, id, Event);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};
