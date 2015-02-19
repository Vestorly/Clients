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

var RssfeedsApi = require("./app/apis/RssfeedsApi.js");
var EventsApi = require("./app/apis/EventsApi.js");
var ArticlesApi = require("./app/apis/ArticlesApi.js");
var AdvisorsApi = require("./app/apis/AdvisorsApi.js");
var PostsApi = require("./app/apis/PostsApi.js");
var SourcesApi = require("./app/apis/SourcesApi.js");

swagger.addModels(models)
  .addGET(RssfeedsApi.index)
  .addPOST(RssfeedsApi.create)
  .addGET(RssfeedsApi.show)
  .addPUT(RssfeedsApi.update)
  .addDELETE(RssfeedsApi.destroy)
  .addGET(EventsApi.index)
  .addPOST(EventsApi.create)
  .addGET(EventsApi.show)
  .addPUT(EventsApi.update)
  .addGET(ArticlesApi.index)
  .addGET(ArticlesApi.show)
  .addPUT(ArticlesApi.update)
  .addGET(AdvisorsApi.show)
  .addGET(PostsApi.index)
  .addPOST(PostsApi.create)
  .addGET(PostsApi.show)
  .addPUT(PostsApi.update)
  .addDELETE(PostsApi.destroy)
  .addGET(SourcesApi.index)
  .addGET(SourcesApi.show)
  .addPUT(SourcesApi.update)
  ;

// configures the app
swagger.configure("http://localhost:8002/", "0.1");

//  start the server
app.listen(8002);
