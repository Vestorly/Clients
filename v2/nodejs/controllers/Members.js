'use strict';

var url = require('url');


var Members = require('./MembersService');


module.exports.findMembers = function findMembers (req, res, next) {
  var vestorly_auth = req.swagger.params['vestorly_auth'].value;
  

  var result = Members.findMembers(vestorly_auth);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};

module.exports.findMemberByID = function findMemberByID (req, res, next) {
  var id = req.swagger.params['id'].value;
  var vestorly_auth = req.swagger.params['vestorly_auth'].value;
  

  var result = Members.findMemberByID(id, vestorly_auth);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};

module.exports.findMemberByID_1 = function findMemberByID_1 (req, res, next) {
  var id = req.swagger.params['id'].value;
  var vestorly_auth = req.swagger.params['vestorly_auth'].value;
  

  var result = Members.findMemberByID_1(id, vestorly_auth);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};
