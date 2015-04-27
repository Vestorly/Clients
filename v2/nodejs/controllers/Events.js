'use strict';

var url = require('url');


var Events = require('./EventsService');


module.exports.findEvents = function findEvents (req, res, next) {
  var vestorly-auth = req.swagger.params['vestorly-auth'].value;
  

  var result = Events.findEvents(vestorly-auth);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};

module.exports.createEvent = function createEvent (req, res, next) {
  var vestorly-auth = req.swagger.params['vestorly-auth'].value;
  var Event = req.swagger.params['Event'].value;
  

  var result = Events.createEvent(vestorly-auth, Event);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};

module.exports.findEventByID = function findEventByID (req, res, next) {
  var id = req.swagger.params['id'].value;
  var vestorly-auth = req.swagger.params['vestorly-auth'].value;
  

  var result = Events.findEventByID(id, vestorly-auth);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};

module.exports.updateEventByID = function updateEventByID (req, res, next) {
  var id = req.swagger.params['id'].value;
  var vestorly-auth = req.swagger.params['vestorly-auth'].value;
  var Event = req.swagger.params['Event'].value;
  

  var result = Events.updateEventByID(id, vestorly-auth, Event);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};
