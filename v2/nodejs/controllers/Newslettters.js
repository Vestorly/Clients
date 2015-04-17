'use strict';

var url = require('url');


var Newslettters = require('./NewsletttersService');


module.exports.findNewsletters = function findNewsletters (req, res, next) {
  var vestorly-auth = req.swagger.params['vestorly-auth'].value;
  

  var result = Newslettters.findNewsletters(vestorly-auth);

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
  

  var result = Newslettters.getNewsletterByID(vestorly-auth, id);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};

module.exports.updateNewsletter = function updateNewsletter (req, res, next) {
  var vestorly-auth = req.swagger.params['vestorly-auth'].value;
  var id = req.swagger.params['id'].value;
  var Newsletter = req.swagger.params['Newsletter'].value;
  

  var result = Newslettters.updateNewsletter(vestorly-auth, id, Newsletter);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};
