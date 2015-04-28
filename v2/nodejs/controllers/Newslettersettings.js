'use strict';

var url = require('url');


var Newslettersettings = require('./NewslettersettingsService');


module.exports.findNewsletterSettings = function findNewsletterSettings (req, res, next) {
  var vestorly-auth = req.swagger.params['vestorly-auth'].value;
  

  var result = Newslettersettings.findNewsletterSettings(vestorly-auth);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};

module.exports.findNewsletterSettingsByID = function findNewsletterSettingsByID (req, res, next) {
  var id = req.swagger.params['id'].value;
  var vestorly-auth = req.swagger.params['vestorly-auth'].value;
  

  var result = Newslettersettings.findNewsletterSettingsByID(id, vestorly-auth);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};

module.exports.updateNewsletterSettingsByID = function updateNewsletterSettingsByID (req, res, next) {
  var id = req.swagger.params['id'].value;
  var vestorly-auth = req.swagger.params['vestorly-auth'].value;
  var newsletter_setting = req.swagger.params['newsletter_setting'].value;
  

  var result = Newslettersettings.updateNewsletterSettingsByID(id, vestorly-auth, newsletter_setting);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};
