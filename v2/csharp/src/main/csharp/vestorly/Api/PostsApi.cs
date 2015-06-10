using System;
using System.Collections.Generic;
using RestSharp;
using vestorly.client;
using vestorly.Model;

namespace vestorly.Api {
  
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
    /// <param name="VestorlyAuth">Vestorly Auth Token</param>
    /// <param name="TextQuery">Filter post by parameters</param>
    /// <param name="ExternalUrl">Filter by External URL</param>
    /// <param name="IsPublished">Filter by is_published boolean</param>
    /// <returns>Posts</returns>
    public Posts FindPosts (string VestorlyAuth, string TextQuery, string ExternalUrl, string IsPublished) {

      var _request = new RestRequest("/posts", Method.GET);

      
      // verify the required parameter 'VestorlyAuth' is set
      if (VestorlyAuth == null) throw new ApiException(400, "Missing required parameter 'VestorlyAuth' when calling FindPosts");
      

      // add default header, if any
      foreach(KeyValuePair<string, string> defaultHeader in ApiInvoker.GetDefaultHeader())
      {
        _request.AddHeader(defaultHeader.Key, defaultHeader.Value);
      }

      _request.AddUrlSegment("format", "json"); // set format to json by default
      
       if (VestorlyAuth != null) _request.AddParameter("vestorly_auth", ApiInvoker.ParameterToString(VestorlyAuth)); // query parameter
       if (TextQuery != null) _request.AddParameter("text_query", ApiInvoker.ParameterToString(TextQuery)); // query parameter
       if (ExternalUrl != null) _request.AddParameter("external_url", ApiInvoker.ParameterToString(ExternalUrl)); // query parameter
       if (IsPublished != null) _request.AddParameter("is_published", ApiInvoker.ParameterToString(IsPublished)); // query parameter
      
      
      
      

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
    /// <param name="VestorlyAuth">Vestorly Auth Token</param>
    /// <param name="Post">Post you want to create</param>
    /// <returns>Postresponse</returns>
    public Postresponse CreatePost (string VestorlyAuth, PostInput Post) {

      var _request = new RestRequest("/posts", Method.POST);

      
      // verify the required parameter 'VestorlyAuth' is set
      if (VestorlyAuth == null) throw new ApiException(400, "Missing required parameter 'VestorlyAuth' when calling CreatePost");
      
      // verify the required parameter 'Post' is set
      if (Post == null) throw new ApiException(400, "Missing required parameter 'Post' when calling CreatePost");
      

      // add default header, if any
      foreach(KeyValuePair<string, string> defaultHeader in ApiInvoker.GetDefaultHeader())
      {
        _request.AddHeader(defaultHeader.Key, defaultHeader.Value);
      }

      _request.AddUrlSegment("format", "json"); // set format to json by default
      
       if (VestorlyAuth != null) _request.AddParameter("vestorly_auth", ApiInvoker.ParameterToString(VestorlyAuth)); // query parameter
      
      
      
      _request.AddParameter("application/json", ApiInvoker.Serialize(Post), ParameterType.RequestBody); // http body (model) parameter
      

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
    /// <param name="VestorlyAuth">Vestorly Auth Token</param>
    /// <param name="Id">ID of post to fetch</param>
    /// <returns>Postresponse</returns>
    public Postresponse GetPostByID (string VestorlyAuth, string Id) {

      var _request = new RestRequest("/posts/{id}", Method.GET);

      
      // verify the required parameter 'VestorlyAuth' is set
      if (VestorlyAuth == null) throw new ApiException(400, "Missing required parameter 'VestorlyAuth' when calling GetPostByID");
      
      // verify the required parameter 'Id' is set
      if (Id == null) throw new ApiException(400, "Missing required parameter 'Id' when calling GetPostByID");
      

      // add default header, if any
      foreach(KeyValuePair<string, string> defaultHeader in ApiInvoker.GetDefaultHeader())
      {
        _request.AddHeader(defaultHeader.Key, defaultHeader.Value);
      }

      _request.AddUrlSegment("format", "json"); // set format to json by default
      _request.AddUrlSegment("id", ApiInvoker.ParameterToString(Id)); // path (url segment) parameter
      
       if (VestorlyAuth != null) _request.AddParameter("vestorly_auth", ApiInvoker.ParameterToString(VestorlyAuth)); // query parameter
      
      
      
      

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
    /// <param name="VestorlyAuth">Vestorly Auth Token</param>
    /// <param name="Id">id of post to update</param>
    /// <param name="Post">Post you want to update</param>
    /// <returns>Postresponse</returns>
    public Postresponse UpdatePostByID (string VestorlyAuth, string Id, Post Post) {

      var _request = new RestRequest("/posts/{id}", Method.PUT);

      
      // verify the required parameter 'VestorlyAuth' is set
      if (VestorlyAuth == null) throw new ApiException(400, "Missing required parameter 'VestorlyAuth' when calling UpdatePostByID");
      
      // verify the required parameter 'Id' is set
      if (Id == null) throw new ApiException(400, "Missing required parameter 'Id' when calling UpdatePostByID");
      
      // verify the required parameter 'Post' is set
      if (Post == null) throw new ApiException(400, "Missing required parameter 'Post' when calling UpdatePostByID");
      

      // add default header, if any
      foreach(KeyValuePair<string, string> defaultHeader in ApiInvoker.GetDefaultHeader())
      {
        _request.AddHeader(defaultHeader.Key, defaultHeader.Value);
      }

      _request.AddUrlSegment("format", "json"); // set format to json by default
      _request.AddUrlSegment("id", ApiInvoker.ParameterToString(Id)); // path (url segment) parameter
      
       if (VestorlyAuth != null) _request.AddParameter("vestorly_auth", ApiInvoker.ParameterToString(VestorlyAuth)); // query parameter
      
      
      
      _request.AddParameter("application/json", ApiInvoker.Serialize(Post), ParameterType.RequestBody); // http body (model) parameter
      

      // make the HTTP request
      IRestResponse response = restClient.Execute(_request);
      if (((int)response.StatusCode) >= 400) {
        throw new ApiException ((int)response.StatusCode, "Error calling UpdatePostByID: " + response.Content);
      }
      return (Postresponse) ApiInvoker.Deserialize(response.Content, typeof(Postresponse));
    }
    
  }
  
}
