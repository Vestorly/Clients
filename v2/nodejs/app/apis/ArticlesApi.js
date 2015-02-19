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
    "path" : "api/articles.json",
    "notes" : "This retrieves a list of articles objects",
    "summary" : "Read a list of articles",
    "method": "GET",
    "params" : [
      params.query("vestorly-auth", "Authentication token", "", true, false, ""),
    
      params.query("is_published", "Filter by published articles", "", false, false, ""),
    
      params.query("external_url_source", "Filter by posts with external URL source", "", false, false, ""),
    
      params.query("ids", "Return posts with list of IDs provided", "", false, false, "")
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
    "path" : "api/articles/{id}.json",
    "notes" : "This retrieves a specific article document",
    "summary" : "Read a specific article",
    "method": "GET",
    "params" : [
      params.query("vestorly-auth", "Authentication token", "", true, false, "")
    ].concat([
      params.path("id", "Id of article")
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
    "path" : "api/articles/{id}.json",
    "notes" : "This updates an article in the database",
    "summary" : "Update an article",
    "method": "PUT",
    "params" : [
      params.query("vestorly-auth", "Authentication token", "", true, false, "")
    ].concat([]).concat([]).concat([]),
    
    
    "type" : "Void",
    
    "responseMessages" : [errors.invalid('id'), errors.notFound('Void')],
    "nickname" : "update"
  },
  'action': function (req,res) {
    
    writeResponse(res, {message: "how about implementing update as a PUT method?"});    
  }
};
