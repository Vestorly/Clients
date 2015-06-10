'use strict';

var url = require('url');


var Members = require('./MembersService');


module.exports.findMembers = function findMembers (req, res, next) {
  var vestorlyAuth = req.swagger.params['vestorly_auth'].value;
  

  var result = Members.findMembers(vestorlyAuth);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};

module.exports.createMember = function createMember (req, res, next) {
  var vestorlyAuth = req.swagger.params['vestorly_auth'].value;
  var member = req.swagger.params['member'].value;
  

  var result = Members.createMember(vestorlyAuth, member);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};

module.exports.findMemberByID = function findMemberByID (req, res, next) {
  var id = req.swagger.params['id'].value;
  var vestorlyAuth = req.swagger.params['vestorly_auth'].value;
  

  var result = Members.findMemberByID(id, vestorlyAuth);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};

module.exports.updateMemberByID = function updateMemberByID (req, res, next) {
  var id = req.swagger.params['id'].value;
  var vestorlyAuth = req.swagger.params['vestorly_auth'].value;
  var member = req.swagger.params['member'].value;
  

  var result = Members.updateMemberByID(id, vestorlyAuth, member);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};
