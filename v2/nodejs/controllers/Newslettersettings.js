'use strict';

var url = require('url');


var Newslettersettings = require('./NewslettersettingsService');


module.exports.findNewsletterSettings = function findNewsletterSettings (req, res, next) {
  var vestorlyAuth = req.swagger.params['vestorly_auth'].value;
  

  var result = Newslettersettings.findNewsletterSettings(vestorlyAuth);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};

module.exports.findNewsletterSettingsByID = function findNewsletterSettingsByID (req, res, next) {
  var id = req.swagger.params['id'].value;
  var vestorlyAuth = req.swagger.params['vestorly_auth'].value;
  

  var result = Newslettersettings.findNewsletterSettingsByID(id, vestorlyAuth);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};

module.exports.updateNewsletterSettingsByID = function updateNewsletterSettingsByID (req, res, next) {
  var id = req.swagger.params['id'].value;
  var vestorlyAuth = req.swagger.params['vestorly_auth'].value;
  var newsletterSetting = req.swagger.params['newsletter_setting'].value;
  

  var result = Newslettersettings.updateNewsletterSettingsByID(id, vestorlyAuth, newsletterSetting);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};
