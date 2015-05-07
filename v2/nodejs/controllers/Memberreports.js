'use strict';

var url = require('url');


var Memberreports = require('./MemberreportsService');


module.exports.findMemberReports = function findMemberReports (req, res, next) {
  var vestorly-auth = req.swagger.params['vestorly-auth'].value;
  

  var result = Memberreports.findMemberReports(vestorly-auth);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};
