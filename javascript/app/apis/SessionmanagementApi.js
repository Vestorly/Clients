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

exports.sign_in = {
  'spec': {
    "description" : "Operations about pets",
    "path" : "api/session_management/sign_in.json",
    "notes" : "This retrieves a list of group objects",
    "summary" : "Authenticate and signs in user",
    "method": "POST",
    "params" : [
      params.query("login_with_email_only", "Login to application by email only", "", false, false, ""),
    
      params.query("create_account", "Create an account", "", false, false, "")
    ].concat([]).concat([]).concat([]),
    
    
    "type" : "Void",
    
    "responseMessages" : [errors.invalid('id'), errors.notFound('Void')],
    "nickname" : "sign_in"
  },
  'action': function (req,res) {
    
    writeResponse(res, {message: "how about implementing sign_in as a POST method?"});    
  }
};
exports.sign_out = {
  'spec': {
    "description" : "Operations about pets",
    "path" : "api/session_management/{id}/sign_out.json",
    "notes" : "This retrieves a list of group objects",
    "summary" : "De-Authenticate and signs a user out of the application",
    "method": "DELETE",
    "params" : [].concat([]).concat([]).concat([]),
    
    
    "type" : "Void",
    
    "responseMessages" : [errors.invalid('id'), errors.notFound('Void')],
    "nickname" : "sign_out"
  },
  'action': function (req,res) {
    
    writeResponse(res, {message: "how about implementing sign_out as a DELETE method?"});    
  }
};
