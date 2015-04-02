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
    "path" : "api/posts.json",
    "notes" : "This retrieves a list of post objects",
    "summary" : "Read a list of posts",
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
exports.create = {
  'spec': {
    "description" : "Operations about pets",
    "path" : "api/posts.json",
    "notes" : "This creates an post in the database",
    "summary" : "Create an post",
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
    "path" : "api/posts/{id}.json",
    "notes" : "Retrieve a single post from the database",
    "summary" : "Retreive a single post",
    "method": "GET",
    "params" : [
      params.query("vestorly-auth", "Authentication token", "", true, false, "")
    ].concat([
      params.path("id", "Id of post")
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
    "path" : "api/posts/{id}.json",
    "notes" : "This creates an advisor in the database",
    "summary" : "Create an advisor",
    "method": "PUT",
    "params" : [].concat([
      params.path("id", "Id of post")
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
    "path" : "api/posts/{id}.json",
    "notes" : "This destroys a post in the database",
    "summary" : "Destroy a post",
    "method": "DELETE",
    "params" : [].concat([
      params.path("id", "Id of pow5")
    ]).concat([]).concat([]),
    
    
    "type" : "Void",
    
    "responseMessages" : [errors.invalid('id'), errors.notFound('Void')],
    "nickname" : "destroy"
  },
  'action': function (req,res) {
    
    writeResponse(res, {message: "how about implementing destroy as a DELETE method?"});    
  }
};
