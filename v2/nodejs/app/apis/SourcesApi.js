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
    "path" : "api/sources.json",
    "notes" : "This retrieves a list of sources objects",
    "summary" : "Read a list of sources",
    "method": "GET",
    "params" : [
      params.query("vestorly-auth", "Authentication token", "", true, false, ""),
    
      params.query("ids", "Return sources with list of IDs provided", "", false, false, "")
    ].concat([]).concat([]).concat([]),
    
    
    "type" : "Void",
    
    "responseMessages" : [errors.invalid('id'), errors.notFound('Void')],
    "nickname" : "index"
  },
  'action': function (req,res) {
    
    writeResponse(res, {message: "how about implementing index as a GET method?"});    
  }
};
exports.show = {
  'spec': {
    "description" : "Operations about pets",
    "path" : "api/sources/{id}.json",
    "notes" : "This retrieves a specific source document",
    "summary" : "Read a specific source",
    "method": "GET",
    "params" : [
      params.query("vestorly-auth", "Authentication token", "", true, false, "")
    ].concat([
      params.path("id", "Id of source")
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
    "path" : "api/sources/{id}.json",
    "notes" : "This creates an source in the database",
    "summary" : "Create a source",
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
