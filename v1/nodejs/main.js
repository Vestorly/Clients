var express = require("express")
 , url = require("url")
 , cors = require("cors")
 , app = express()
 , swagger = require("swagger-node-express")
 , db = false


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

app.use(express.json());
app.use(express.urlencoded());
app.use(cors(corsOptions));

var subpath = express();

app.use("/", subpath);

swagger.setAppHandler(subpath);

swagger.configureSwaggerPaths("", "api-docs", "")

var models = require("./app/models.js");

var AdvisorsApi = require("./app/apis/AdvisorsApi.js");
var PostsApi = require("./app/apis/PostsApi.js");
var MembersApi = require("./app/apis/MembersApi.js");

swagger.addModels(models)
  .addPOST(AdvisorsApi.create)
  .addGET(AdvisorsApi.show)
  .addPUT(AdvisorsApi.update)
  .addGET(PostsApi.index)
  .addPOST(PostsApi.create)
  .addGET(PostsApi.show)
  .addPUT(PostsApi.update)
  .addDELETE(PostsApi.destroy)
  .addGET(MembersApi.index)
  .addPOST(MembersApi.create)
  .addGET(MembersApi.show)
  .addPUT(MembersApi.update)
  .addDELETE(MembersApi.destroy)
  ;

// configures the app
swagger.configure("http://localhost:8002/", "0.1");

//  start the server
app.listen(8002);
