'use strict';

var url = require('url');


var Advisor = require('./AdvisorService');


module.exports.findAdvisors = function findAdvisors (req, res, next) {
  var vestorly-auth = req.swagger.params['vestorly-auth'].value;
  

  var result = Advisor.findAdvisors(vestorly-auth);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};

module.exports.findAdvisorByID = function findAdvisorByID (req, res, next) {
  var id = req.swagger.params['id'].value;
  var vestorly-auth = req.swagger.params['vestorly-auth'].value;
  

  var result = Advisor.findAdvisorByID(id, vestorly-auth);

  if(typeof result !== 'undefined') {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(result || {}, null, 2));
  }
  else
    res.end();
};
