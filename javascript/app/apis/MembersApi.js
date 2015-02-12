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
    "path" : "api/advisors/{advisor_id}/members.json",
    "notes" : "This lists all the active members for a given advisor",
    "summary" : "Read member lead data",
    "method": "GET",
    "params" : [
      params.query("vestorly-auth", "Authentication token", "", true, false, ""),
    
      params.query("search", "Fuzzy search by name", "", false, false, ""),
    
      params.query("sorted_by", "Sort by: first_name, last_name, content_views, shares, posts_read, signed_up, last_active", "", false, false, ""),
    
      params.query("sorted_order", "Sort order: asc, desc", "", false, false, "")
    ].concat([
      params.path("advisor_id", "Id of Advisor"),
    ]).concat([]).concat([]),
    
    
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
    "path" : "api/advisors/{advisor_id}/members.json",
    "notes" : "This creates a member in the database",
    "summary" : "Create a member",
    "method": "POST",
    "params" : [
      params.query("vestorly-auth", "Authentication token", "", true, false, ""),
    ].concat([
      params.path("advisor_id", "Id of advisor"),
    ]).concat([]).concat([]),
    
    
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
    "path" : "api/advisors/{advisor_id}/members/{id}.json",
    "notes" : "This retrieves a specifp ic member object",
    "summary" : "Read a specific member",
    "method": "GET",
    "params" : [
      params.query("vestorly-auth", "Authentication token", "", true, false, ""),
    ].concat([
      params.path("advisor_id", "Id of advisor"),
    
      params.path("id", "Id of member")
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
    "path" : "api/advisors/{advisor_id}/members/{id}.json",
    "notes" : "This updates a member in the database",
    "summary" : "Update a member",
    "method": "PUT",
    "params" : [
      params.query("vestorly-auth", "Authentication token", "", true, false, ""),
    ].concat([
      params.path("advisor_id", "Id of advisor"),
    
      params.path("id", "Id of member"),
    ]).concat([]).concat([]),
    
    
    "type" : "Void",
    
    "responseMessages" : [errors.invalid('id'), errors.notFound('Void')],
    "nickname" : "update"
  },
  'action': function (req,res) {
    
    writeResponse(res, {message: "how about implementing update as a PUT method?"});    
  }
};
exports.destroy = {
  'spec': {
    "description" : "Operations about pets",
    "path" : "api/advisors/{advisor_id}/members/{id}.json",
    "notes" : "This deletes a member in the database",
    "summary" : "Deletes a member",
    "method": "DELETE",
    "params" : [
      params.query("vestorly-auth", "Authentication token", "", true, false, ""),
    ].concat([
      params.path("advisor_id", "Id of advisor"),
    
      params.path("id", "Id of member")
    ]).concat([]).concat([]),
    
    
    "type" : "Void",
    
    "responseMessages" : [errors.invalid('id'), errors.notFound('Void')],
    "nickname" : "destroy"
  },
  'action': function (req,res) {
    
    writeResponse(res, {message: "how about implementing destroy as a DELETE method?"});    
  }
};
