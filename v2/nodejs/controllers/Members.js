'use strict';

var url = require('url');


var Members = require('./MembersService');


module.exports.findMembers = function findMembers (req, res, next) {
  var vestorly-auth = req.swagger.params['vestorly-auth'].value;
  

  var result = Members.findMembers(vestorly-auth);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};

module.exports.createMember = function createMember (req, res, next) {
  var vestorly-auth = req.swagger.params['vestorly-auth'].value;
  var member = req.swagger.params['member'].value;
  

  var result = Members.createMember(vestorly-auth, member);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};

module.exports.findMemberByID = function findMemberByID (req, res, next) {
  var id = req.swagger.params['id'].value;
  var vestorly-auth = req.swagger.params['vestorly-auth'].value;
  

  var result = Members.findMemberByID(id, vestorly-auth);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};

module.exports.findMemberByID_1 = function findMemberByID_1 (req, res, next) {
  var id = req.swagger.params['id'].value;
  var vestorly-auth = req.swagger.params['vestorly-auth'].value;
  var member = req.swagger.params['member'].value;
  

  var result = Members.findMemberByID_1(id, vestorly-auth, member);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};
