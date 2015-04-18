'use strict';

var url = require('url');


var Advisors = require('./AdvisorsService');


module.exports.findAdvisors = function findAdvisors (req, res, next) {
  var vestorly_auth = req.swagger.params['vestorly_auth'].value;
  

  var result = Advisors.findAdvisors(vestorly_auth);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};

module.exports.findAdvisorByID = function findAdvisorByID (req, res, next) {
  var id = req.swagger.params['id'].value;
  var vestorly_auth = req.swagger.params['vestorly_auth'].value;
  

  var result = Advisors.findAdvisorByID(id, vestorly_auth);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};
