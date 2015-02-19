var swagger = require("swagger-node-express");
var url = require("url");
var errors = swagger.errors;
var params = swagger.params;

/* add model includes */

function writeResponse (response, data) {
  response.header('Access-Control-Allow-Origin', "*");
  response.header("Access-Control-Allow-Methods", "GET, POST, DELETE, PUT");
  response.header("Access-Control-Allow-Headers", "Content-Type");
  response.header("Content-Type", "application/json; charset=utf-8");
  response.send(JSON.stringify(data));
}

exports.models = models = require("../models.js");

exports.index = {
  'spec': {
    "description" : "Operations about pets",
    "path" : "api/events.json",
    "notes" : "This retrieves a list of events objects",
    "summary" : "Read a list of events",
    "method": "GET",
    "params" : [
      params.query("vestorly-auth", "Authentication token", "", true, false, "")
    ].concat([]).concat([]).concat([]),
    
    
    "type" : "Void",
    
    "responseMessages" : [errors.invalid('id'), errors.notFound('Void')],
    "nickname" : "index"
  },
  'action': function (req,res) {
    
    writeResponse(res, {message: "how about implementing index as a GET method?"});    
  }
};
exports.create = {
  'spec': {
    "description" : "Operations about pets",
    "path" : "api/events.json",
    "notes" : "This creates an event in the database",
    "summary" : "Create a event",
    "method": "POST",
    "params" : [].concat([]).concat([]).concat([]),
    
    
    "type" : "Void",
    
    "responseMessages" : [errors.invalid('id'), errors.notFound('Void')],
    "nickname" : "create"
  },
  'action': function (req,res) {
    
    writeResponse(res, {message: "how about implementing create as a POST method?"});    
  }
};
exports.show = {
  'spec': {
    "description" : "Operations about pets",
    "path" : "api/events/{id}.json",
    "notes" : "This retrieves a specific event document",
    "summary" : "Read a specific event",
    "method": "GET",
    "params" : [
      params.query("vestorly-auth", "Authentication token", "", true, false, "")
    ].concat([
      params.path("id", "Id of event")
    ]).concat([]).concat([]),
    
    
    "type" : "Void",
    
    "responseMessages" : [errors.invalid('id'), errors.notFound('Void')],
    "nickname" : "show"
  },
  'action': function (req,res) {
    
    writeResponse(res, {message: "how about implementing show as a GET method?"});    
  }
};
exports.update = {
  'spec': {
    "description" : "Operations about pets",
    "path" : "api/events/{id}.json",
    "notes" : "This creates an event in the database",
    "summary" : "Create a event",
    "method": "PUT",
    "params" : [].concat([
      params.path("id", "Id of g")
    ]).concat([]).concat([]),
    
    
    "type" : "Void",
    
    "responseMessages" : [errors.invalid('id'), errors.notFound('Void')],
    "nickname" : "update"
  },
  'action': function (req,res) {
    
    writeResponse(res, {message: "how about implementing update as a PUT method?"});    
  }
};
