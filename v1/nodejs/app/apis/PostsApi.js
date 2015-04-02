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
    "path" : "api/advisors/{advisor_id}/posts.json",
    "notes" : "This retrieves a list of post objects",
    "summary" : "Read a list of posts",
    "method": "GET",
    "params" : [
      params.query("vestorly-auth", "Authentication token", "", true, false, ""),
    
      params.query("filter_by", "Supports [all/published/unpublished/features/vestorly/newsletter]", "", false, false, ""),
    
      params.query("filter_by_group_id", "Filter by group id", "", false, false, ""),
    
      params.query("filter_by_newsletter_id", "Filter by newsletter", "", false, false, "")
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
    "path" : "api/advisors/{advisor_id}/posts.json",
    "notes" : "This creates an post in the database",
    "summary" : "Create an post",
    "method": "POST",
    "params" : [
      params.query("vestorly-auth", "Authentication token", "", true, false, "")
    ].concat([
      params.path("advisor_id", "Id of advisor")
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
    "path" : "api/advisors/{advisor_id}/posts/{id}.json",
    "notes" : "This retrieves a specific post object",
    "summary" : "Read a specific post",
    "method": "GET",
    "params" : [
      params.query("vestorly-auth", "Authentication token", "", true, false, "")
    ].concat([
      params.path("id", "Id of post"),
    
      params.path("advisor_id", "Id of advisor")
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
    "path" : "api/advisors/{advisor_id}/posts/{id}.json",
    "notes" : "This updates a post in the database",
    "summary" : "Update a post",
    "method": "PUT",
    "params" : [
      params.query("vestorly-auth", "Authentication token", "", true, false, "")
    ].concat([
      params.path("id", "Id of post"),
    
      params.path("advisor_id", "Id of advisor")
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
    "path" : "api/advisors/{advisor_id}/posts/{id}.json",
    "notes" : "This deletes a post in the database",
    "summary" : "Deletes a post",
    "method": "DELETE",
    "params" : [
      params.query("vestorly-auth", "Authentication token", "", true, false, "")
    ].concat([
      params.path("id", "Id of advisor")
    ]).concat([]).concat([]),
    
    
    "type" : "Void",
    
    "responseMessages" : [errors.invalid('id'), errors.notFound('Void')],
    "nickname" : "destroy"
  },
  'action': function (req,res) {
    
    writeResponse(res, {message: "how about implementing destroy as a DELETE method?"});    
  }
};
