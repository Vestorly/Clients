'use strict';

var url = require('url');


var Groups = require('./GroupsService');


module.exports.findGroups = function findGroups (req, res, next) {
  var vestorlyAuth = req.swagger.params['vestorly_auth'].value;
  

  var result = Groups.findGroups(vestorlyAuth);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};

module.exports.createGroup = function createGroup (req, res, next) {
  var vestorlyAuth = req.swagger.params['vestorly_auth'].value;
  var group = req.swagger.params['group'].value;
  

  var result = Groups.createGroup(vestorlyAuth, group);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};

module.exports.findGroupByID = function findGroupByID (req, res, next) {
  var vestorlyAuth = req.swagger.params['vestorly_auth'].value;
  var id = req.swagger.params['id'].value;
  

  var result = Groups.findGroupByID(vestorlyAuth, id);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};

module.exports.updateGroupById = function updateGroupById (req, res, next) {
  var vestorlyAuth = req.swagger.params['vestorly_auth'].value;
  var id = req.swagger.params['id'].value;
  var group = req.swagger.params['group'].value;
  

  var result = Groups.updateGroupById(vestorlyAuth, id, group);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};

module.exports.deleteGroup = function deleteGroup (req, res, next) {
  var vestorlyAuth = req.swagger.params['vestorly_auth'].value;
  var id = req.swagger.params['id'].value;
  

  var result = Groups.deleteGroup(vestorlyAuth, id);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};
