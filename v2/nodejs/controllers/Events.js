'use strict';

var url = require('url');


var Events = require('./EventsService');


module.exports.findEvents = function findEvents (req, res, next) {
  var vestorlyAuth = req.swagger.params['vestorly_auth'].value;
  

  var result = Events.findEvents(vestorlyAuth);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};

module.exports.createEvent = function createEvent (req, res, next) {
  var vestorlyAuth = req.swagger.params['vestorly_auth'].value;
  var event = req.swagger.params['event'].value;
  

  var result = Events.createEvent(vestorlyAuth, event);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};

module.exports.findEventByID = function findEventByID (req, res, next) {
  var id = req.swagger.params['id'].value;
  var vestorlyAuth = req.swagger.params['vestorly_auth'].value;
  

  var result = Events.findEventByID(id, vestorlyAuth);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};
