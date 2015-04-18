'use strict';

var url = require('url');


var Sources = require('./SourcesService');


module.exports.findSources = function findSources (req, res, next) {
  var vestorly_auth = req.swagger.params['vestorly_auth'].value;
  

  var result = Sources.findSources(vestorly_auth);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};

module.exports.createSource = function createSource (req, res, next) {
  var vestorly_auth = req.swagger.params['vestorly_auth'].value;
  var Source = req.swagger.params['Source'].value;
  

  var result = Sources.createSource(vestorly_auth, Source);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};

module.exports.getSourceByID = function getSourceByID (req, res, next) {
  var vestorly_auth = req.swagger.params['vestorly_auth'].value;
  var id = req.swagger.params['id'].value;
  

  var result = Sources.getSourceByID(vestorly_auth, id);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};

module.exports.UpdateSourceByID = function UpdateSourceByID (req, res, next) {
  var vestorly_auth = req.swagger.params['vestorly_auth'].value;
  var id = req.swagger.params['id'].value;
  var Source = req.swagger.params['Source'].value;
  

  var result = Sources.UpdateSourceByID(vestorly_auth, id, Source);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};
