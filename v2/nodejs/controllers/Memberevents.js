'use strict';

var url = require('url');


var Memberevents = require('./MembereventsService');


module.exports.findMemberEvents = function findMemberEvents (req, res, next) {
  var vestorly_auth = req.swagger.params['vestorly_auth'].value;
  

  var result = Memberevents.findMemberEvents(vestorly_auth);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};
