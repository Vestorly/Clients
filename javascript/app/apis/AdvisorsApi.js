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

exports.create = {
  'spec': {
    "description" : "Operations about pets",
    "path" : "api/advisors.json",
    "notes" : "This creates an advisor in the database",
    "summary" : "Create an advisor",
    "method": "POST",
    "params" : [
      params.query("vestorly-auth", "Authentication token", "", true, false, ""),
    ].concat([]).concat([]).concat([]),
    
    
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
    "path" : "api/advisors/{id}.json",
    "notes" : "This retrieves a specifp advisor object",
    "summary" : "Read a specific advisor",
    "method": "GET",
    "params" : [
      params.query("vestorly-auth", "Authentication token", "", true, false, ""),
    
      params.query("filter_by", "Filtered by [signups/page_views]", "", false, false, "")
    ].concat([
      params.path("id", "Id of advisor"),
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
    "path" : "api/advisors/{id}.json",
    "notes" : "This updates a advisor in the database",
    "summary" : "Update a advisor",
    "method": "PUT",
    "params" : [
      params.query("vestorly-auth", "Authentication token", "", true, false, ""),
    ].concat([
      params.path("id", "Id of advisor")
    ]).concat([]).concat([]),
    
    
    "type" : "Void",
    
    "responseMessages" : [errors.invalid('id'), errors.notFound('Void')],
    "nickname" : "update"
  },
  'action': function (req,res) {
    
    writeResponse(res, {message: "how about implementing update as a PUT method?"});    
  }
};
