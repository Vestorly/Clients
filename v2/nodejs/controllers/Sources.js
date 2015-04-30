'use strict';

var url = require('url');


var Sources = require('./SourcesService');


module.exports.findSources = function findSources (req, res, next) {
  var vestorly-auth = req.swagger.params['vestorly-auth'].value;
  

  var result = Sources.findSources(vestorly-auth);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};

module.exports.createSource = function createSource (req, res, next) {
  var vestorly-auth = req.swagger.params['vestorly-auth'].value;
  var source = req.swagger.params['source'].value;
  

  var result = Sources.createSource(vestorly-auth, source);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};

module.exports.getSourceByID = function getSourceByID (req, res, next) {
  var vestorly-auth = req.swagger.params['vestorly-auth'].value;
  var id = req.swagger.params['id'].value;
  

  var result = Sources.getSourceByID(vestorly-auth, id);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};

module.exports.updateSourceByID = function updateSourceByID (req, res, next) {
  var vestorly-auth = req.swagger.params['vestorly-auth'].value;
  var id = req.swagger.params['id'].value;
  var source = req.swagger.params['source'].value;
  

  var result = Sources.updateSourceByID(vestorly-auth, id, source);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};
