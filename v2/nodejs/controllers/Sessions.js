'use strict';

var url = require('url');


var Sessions = require('./SessionsService');


module.exports.login = function login (req, res, next) {
  var username = req.swagger.params['username'].value;
  var password = req.swagger.params['password'].value;
  

  var result = Sessions.login(username, password);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};

module.exports.logout = function logout (req, res, next) {
  var vestorly_auth = req.swagger.params['vestorly_auth'].value;
  

  var result = Sessions.logout(vestorly_auth);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};
