'use strict';

var url = require('url');


var Groups = require('./GroupsService');


module.exports.findGroups = function findGroups (req, res, next) {
  var vestorly-auth = req.swagger.params['vestorly-auth'].value;
  

  var result = Groups.findGroups(vestorly-auth);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};

module.exports.findGroupByID = function findGroupByID (req, res, next) {
  var vestorly-auth = req.swagger.params['vestorly-auth'].value;
  var id = req.swagger.params['id'].value;
  

  var result = Groups.findGroupByID(vestorly-auth, id);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};

module.exports.addGroup = function addGroup (req, res, next) {
  var group = req.swagger.params['group'].value;
  

  var result = Groups.addGroup(group);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};

module.exports.addGroup_1 = function addGroup_1 (req, res, next) {
  var group = req.swagger.params['group'].value;
  

  var result = Groups.addGroup_1(group);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};

module.exports.deleteGroup = function deleteGroup (req, res, next) {
  var group = req.swagger.params['group'].value;
  

  var result = Groups.deleteGroup(group);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};
