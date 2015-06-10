'use strict';

var url = require('url');


var Memberreports = require('./MemberreportsService');


module.exports.findMemberReports = function findMemberReports (req, res, next) {
  var vestorlyAuth = req.swagger.params['vestorly_auth'].value;
  

  var result = Memberreports.findMemberReports(vestorlyAuth);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};
