var express = require("express")
 , url = require("url")
 , cors = require("cors")
 , swagger = require("swagger-node-express")
 , db = false

var app = express();
app.use(express.bodyParser());

var corsOptions = {
  credentials: true,
  origin: function(origin,callback) {
    if(origin===undefined) {
      callback(null,false);
    } else {
      callback(null,true);
    }
  }
};

app.use(cors(corsOptions));

var subpath = express();

app.use("/", subpath);

swagger.setAppHandler(subpath);

swagger.configureSwaggerPaths("", "api-docs", "")

var models = require("./app/models.js");

var AdvisorsApi = require("./app/apis/AdvisorsApi.js");
var SessionmanagementApi = require("./app/apis/SessionmanagementApi.js");
var MembersApi = require("./app/apis/MembersApi.js");

swagger.addModels(models)
  .addPOST(AdvisorsApi.create).addGET(AdvisorsApi.show).addPUT(AdvisorsApi.update)
  .addPOST(SessionmanagementApi.sign_in).addDELETE(SessionmanagementApi.sign_out)
  .addGET(MembersApi.index).addPOST(MembersApi.create).addGET(MembersApi.show).addPUT(MembersApi.update).addDELETE(MembersApi.destroy)
  ;

// configures the app
swagger.configure("http://localhost:8002/", "0.1");

//  start the server
app.listen(8002);
