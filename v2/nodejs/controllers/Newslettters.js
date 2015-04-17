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
