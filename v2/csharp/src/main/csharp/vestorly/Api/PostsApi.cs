using System;
using System.Collections.Generic;
using RestSharp;
using vestorly.client;
using vestorly.model;

namespace vestorly.api {
  
  public class PostsApi {
    string basePath;
    protected RestClient restClient;

    public PostsApi(String basePath = "https://staging.vestorly.com/api/v2")
    {
      this.basePath = basePath;
      this.restClient = new RestClient(basePath);
    }

    /// <summary>
    /// Sets the endpoint base url for the services being accessed
    /// </summary>
    /// <param name="basePath"> Base URL
    /// <returns></returns>
    public void SetBasePath(string basePath) {
      this.basePath = basePath;
    }

    /// <summary>
    /// Gets the endpoint base url for the services being accessed
    /// <returns>Base URL</returns>
    /// </summary>
    public String GetBasePath() {
      return this.basePath;
    }

    
    
    /// <summary>
    ///  Query all posts
    /// </summary>
    /// <param name="vestorlyAuth">Vestorly Auth Token</param>
    /// <param name="textQuery">Filter post by parameters</param>
    /// <param name="externalUrl">Filter by External URL</param>
    /// <param name="isPublished">Filter by is_published boolean</param>
    /// <returns>Posts</returns>
    public Posts FindPosts (string vestorlyAuth, string textQuery, string externalUrl, string isPublished) {

      String myPath = "/posts";

       if ("vestorlyAuth" == "vestorlyAuth") {
        if (("GET" == "POST" || "GET" == "PUT") && "PostsApi" != "SessionsApi") {
          myPath += "?vestorly_auth=" + vestorlyAuth;
        }
      } if ("textQuery" == "vestorlyAuth") {
        if (("GET" == "POST" || "GET" == "PUT") && "PostsApi" != "SessionsApi") {
          myPath += "?vestorly_auth=" + textQuery;
        }
      } if ("externalUrl" == "vestorlyAuth") {
        if (("GET" == "POST" || "GET" == "PUT") && "PostsApi" != "SessionsApi") {
          myPath += "?vestorly_auth=" + externalUrl;
        }
      } if ("isPublished" == "vestorlyAuth") {
        if (("GET" == "POST" || "GET" == "PUT") && "PostsApi" != "SessionsApi") {
          myPath += "?vestorly_auth=" + isPublished;
        }
      }
      
      var _request = new RestRequest(myPath, Method.GET);


      
      // verify the required parameter 'vestorlyAuth' is set
      if (vestorlyAuth == null) throw new ApiException(400, "Missing required parameter 'vestorlyAuth' when calling FindPosts");
      

      // add default header, if any
      foreach(KeyValuePair<string, string> defaultHeader in ApiInvoker.GetDefaultHeader())
      {
        _request.AddHeader(defaultHeader.Key, defaultHeader.Value);
      }

      _request.AddUrlSegment("format", "json"); // set format to json by default
      
       if (vestorlyAuth != null && ("GET" == "GET" || "GET" == "DELETE" || "PostsApi" == "SessionsApi")) _request.AddParameter("vestorly_auth", ApiInvoker.ParameterToString(vestorlyAuth)); // query parameter
       if (textQuery != null && ("GET" == "GET" || "GET" == "DELETE" || "PostsApi" == "SessionsApi")) _request.AddParameter("text_query", ApiInvoker.ParameterToString(textQuery)); // query parameter
       if (externalUrl != null && ("GET" == "GET" || "GET" == "DELETE" || "PostsApi" == "SessionsApi")) _request.AddParameter("external_url", ApiInvoker.ParameterToString(externalUrl)); // query parameter
       if (isPublished != null && ("GET" == "GET" || "GET" == "DELETE" || "PostsApi" == "SessionsApi")) _request.AddParameter("is_published", ApiInvoker.ParameterToString(isPublished)); // query parameter
      
      
      
      

      // make the HTTP request
      IRestResponse response = restClient.Execute(_request);
      if (((int)response.StatusCode) >= 400) {
        throw new ApiException ((int)response.StatusCode, "Error calling FindPosts: " + response.Content);
      }
      return (Posts) ApiInvoker.Deserialize(response.Content, typeof(Posts));
    }
    
    
    /// <summary>
    ///  Create a new post in the Vestorly Platform
    /// </summary>
    /// <param name="vestorlyAuth">Vestorly Auth Token</param>
    /// <param name="post">Post you want to create</param>
    /// <returns>Postresponse</returns>
    public Postresponse CreatePost (string vestorlyAuth, PostInput post) {

      String myPath = "/posts";

       if ("vestorlyAuth" == "vestorlyAuth") {
        if (("POST" == "POST" || "POST" == "PUT") && "PostsApi" != "SessionsApi") {
          myPath += "?vestorly_auth=" + vestorlyAuth;
        }
      }
      
      var _request = new RestRequest(myPath, Method.POST);


      
      // verify the required parameter 'vestorlyAuth' is set
      if (vestorlyAuth == null) throw new ApiException(400, "Missing required parameter 'vestorlyAuth' when calling CreatePost");
      
      // verify the required parameter 'post' is set
      if (post == null) throw new ApiException(400, "Missing required parameter 'post' when calling CreatePost");
      

      // add default header, if any
      foreach(KeyValuePair<string, string> defaultHeader in ApiInvoker.GetDefaultHeader())
      {
        _request.AddHeader(defaultHeader.Key, defaultHeader.Value);
      }

      _request.AddUrlSegment("format", "json"); // set format to json by default
      
       if (vestorlyAuth != null && ("POST" == "GET" || "POST" == "DELETE" || "PostsApi" == "SessionsApi")) _request.AddParameter("vestorly_auth", ApiInvoker.ParameterToString(vestorlyAuth)); // query parameter
      
      
      
      _request.AddParameter("application/json", ApiInvoker.Serialize(post), ParameterType.RequestBody); // http body (model) parameter
      

      // make the HTTP request
      IRestResponse response = restClient.Execute(_request);
      if (((int)response.StatusCode) >= 400) {
        throw new ApiException ((int)response.StatusCode, "Error calling CreatePost: " + response.Content);
      }
      return (Postresponse) ApiInvoker.Deserialize(response.Content, typeof(Postresponse));
    }
    
    
    /// <summary>
    ///  Query all posts
    /// </summary>
    /// <param name="vestorlyAuth">Vestorly Auth Token</param>
    /// <param name="id">ID of post to fetch</param>
    /// <returns>Postresponse</returns>
    public Postresponse GetPostByID (string vestorlyAuth, string id) {

      String myPath = "/posts/{id}";

       if ("vestorlyAuth" == "vestorlyAuth") {
        if (("GET" == "POST" || "GET" == "PUT") && "PostsApi" != "SessionsApi") {
          myPath += "?vestorly_auth=" + vestorlyAuth;
        }
      }
      
      var _request = new RestRequest(myPath, Method.GET);


      
      // verify the required parameter 'vestorlyAuth' is set
      if (vestorlyAuth == null) throw new ApiException(400, "Missing required parameter 'vestorlyAuth' when calling GetPostByID");
      
      // verify the required parameter 'id' is set
      if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling GetPostByID");
      

      // add default header, if any
      foreach(KeyValuePair<string, string> defaultHeader in ApiInvoker.GetDefaultHeader())
      {
        _request.AddHeader(defaultHeader.Key, defaultHeader.Value);
      }

      _request.AddUrlSegment("format", "json"); // set format to json by default
      _request.AddUrlSegment("id", ApiInvoker.ParameterToString(id)); // path (url segment) parameter
      
       if (vestorlyAuth != null && ("GET" == "GET" || "GET" == "DELETE" || "PostsApi" == "SessionsApi")) _request.AddParameter("vestorly_auth", ApiInvoker.ParameterToString(vestorlyAuth)); // query parameter
      
      
      
      

      // make the HTTP request
      IRestResponse response = restClient.Execute(_request);
      if (((int)response.StatusCode) >= 400) {
        throw new ApiException ((int)response.StatusCode, "Error calling GetPostByID: " + response.Content);
      }
      return (Postresponse) ApiInvoker.Deserialize(response.Content, typeof(Postresponse));
    }
    
    
    /// <summary>
    ///  Update A Post
    /// </summary>
    /// <param name="vestorlyAuth">Vestorly Auth Token</param>
    /// <param name="id">id of post to update</param>
    /// <param name="post">Post you want to update</param>
    /// <returns>Postresponse</returns>
    public Postresponse UpdatePostByID (string vestorlyAuth, string id, Post post) {

      String myPath = "/posts/{id}";

       if ("vestorlyAuth" == "vestorlyAuth") {
        if (("PUT" == "POST" || "PUT" == "PUT") && "PostsApi" != "SessionsApi") {
          myPath += "?vestorly_auth=" + vestorlyAuth;
        }
      }
      
      var _request = new RestRequest(myPath, Method.PUT);


      
      // verify the required parameter 'vestorlyAuth' is set
      if (vestorlyAuth == null) throw new ApiException(400, "Missing required parameter 'vestorlyAuth' when calling UpdatePostByID");
      
      // verify the required parameter 'id' is set
      if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling UpdatePostByID");
      
      // verify the required parameter 'post' is set
      if (post == null) throw new ApiException(400, "Missing required parameter 'post' when calling UpdatePostByID");
      

      // add default header, if any
      foreach(KeyValuePair<string, string> defaultHeader in ApiInvoker.GetDefaultHeader())
      {
        _request.AddHeader(defaultHeader.Key, defaultHeader.Value);
      }

      _request.AddUrlSegment("format", "json"); // set format to json by default
      _request.AddUrlSegment("id", ApiInvoker.ParameterToString(id)); // path (url segment) parameter
      
       if (vestorlyAuth != null && ("PUT" == "GET" || "PUT" == "DELETE" || "PostsApi" == "SessionsApi")) _request.AddParameter("vestorly_auth", ApiInvoker.ParameterToString(vestorlyAuth)); // query parameter
      
      
      
      _request.AddParameter("application/json", ApiInvoker.Serialize(post), ParameterType.RequestBody); // http body (model) parameter
      

      // make the HTTP request
      IRestResponse response = restClient.Execute(_request);
      if (((int)response.StatusCode) >= 400) {
        throw new ApiException ((int)response.StatusCode, "Error calling UpdatePostByID: " + response.Content);
      }
      return (Postresponse) ApiInvoker.Deserialize(response.Content, typeof(Postresponse));
    }
    
  }
  
}
