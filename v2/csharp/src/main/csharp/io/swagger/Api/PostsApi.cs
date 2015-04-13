using System;
using System.Collections.Generic;
using io.swagger.client;
using io.swagger.Model;

namespace io.swagger.Api {
  
  public class PostsApi {
    string basePath;
    private readonly ApiInvoker apiInvoker = ApiInvoker.GetInstance();

    public PostsApi(String basePath = "http://staging.vestorly.com/")
    {
      this.basePath = basePath;
    }

    public ApiInvoker getInvoker() {
      return apiInvoker;
    }

    // Sets the endpoint base url for the services being accessed
    public void setBasePath(string basePath) {
      this.basePath = basePath;
    }

    // Gets the endpoint base url for the services being accessed
    public String getBasePath() {
      return basePath;
    }

    

    /// <summary>
    /// Read a list of posts This retrieves a list of post objects
    /// </summary>
    /// <param name="VestorlyAuth">Authentication token</param>
     /// <param name="IsPublished">Filter by published articles</param>
     /// <param name="ExternalUrlSource">Filter by posts with external URL source</param>
     /// <param name="Ids">Return posts with list of IDs provided</param>
    
    /// <returns></returns>
    public void  index (string VestorlyAuth, string IsPublished, string ExternalUrlSource, string Ids) {
      // create path and map variables
      var path = "api/v2/posts.json".Replace("{format}","json");

      // query params
      var queryParams = new Dictionary<String, String>();
      var headerParams = new Dictionary<String, String>();
      var formParams = new Dictionary<String, object>();

      

      if (VestorlyAuth != null){
        queryParams.Add("vestorly-auth", apiInvoker.ParameterToString(VestorlyAuth));
      }
      if (IsPublished != null){
        queryParams.Add("is_published", apiInvoker.ParameterToString(IsPublished));
      }
      if (ExternalUrlSource != null){
        queryParams.Add("external_url_source", apiInvoker.ParameterToString(ExternalUrlSource));
      }
      if (Ids != null){
        queryParams.Add("ids", apiInvoker.ParameterToString(Ids));
      }
      

      

      

      try {
        if (typeof(void) == typeof(byte[])) {
          
          
          apiInvoker.invokeBinaryAPI(basePath, path, "GET", queryParams, null, headerParams, formParams);
          return;
          
        } else {
          
          
          apiInvoker.invokeAPI(basePath, path, "GET", queryParams, null, headerParams, formParams);
          return;
          
        }
      } catch (ApiException ex) {
        if(ex.ErrorCode == 404) {
          return ;
        }
        else {
          throw ex;
        }
      }
    }
    

    /// <summary>
    /// Create an post This creates an post in the database
    /// </summary>
    /// <param name="Post">JSON block of post data</param>
    
    /// <returns></returns>
    public void  create (string Post) {
      // create path and map variables
      var path = "api/v2/posts.json".Replace("{format}","json");

      // query params
      var queryParams = new Dictionary<String, String>();
      var headerParams = new Dictionary<String, String>();
      var formParams = new Dictionary<String, object>();

      

      

      

      if (Post != null){
        if(Post is byte[]) {
          formParams.Add("post", Post);
        } else {
          formParams.Add("post", apiInvoker.ParameterToString(Post));
        }
      }
      

      try {
        if (typeof(void) == typeof(byte[])) {
          
          
          apiInvoker.invokeBinaryAPI(basePath, path, "GET", queryParams, null, headerParams, formParams);
          return;
          
        } else {
          
          
          apiInvoker.invokeAPI(basePath, path, "POST", queryParams, null, headerParams, formParams);
          return;
          
        }
      } catch (ApiException ex) {
        if(ex.ErrorCode == 404) {
          return ;
        }
        else {
          throw ex;
        }
      }
    }
    

    /// <summary>
    /// Retreive a single post Retrieve a single post from the database
    /// </summary>
    /// <param name="VestorlyAuth">Authentication token</param>
     /// <param name="Id">Id of post</param>
    
    /// <returns></returns>
    public Post  show (string VestorlyAuth, string Id) {
      // create path and map variables
      var path = "api/v2/posts/{id}.json".Replace("{format}","json").Replace("{" + "id" + "}", apiInvoker.ParameterToString(Id));

      // query params
      var queryParams = new Dictionary<String, String>();
      var headerParams = new Dictionary<String, String>();
      var formParams = new Dictionary<String, object>();

      

      if (VestorlyAuth != null){
        queryParams.Add("vestorly-auth", apiInvoker.ParameterToString(VestorlyAuth));
      }
      

      

      

      try {
        if (typeof(Post) == typeof(byte[])) {
          
          var response = apiInvoker.invokeBinaryAPI(basePath, path, "GET", queryParams, null, headerParams, formParams);
          return ((object)response) as Post;
          
          
        } else {
          
          var response = apiInvoker.invokeAPI(basePath, path, "GET", queryParams, null, headerParams, formParams);
          if (response != null){
             return (Post) ApiInvoker.deserialize(response, typeof(Post));
          }
          else {
            return null;
          }
          
          
        }
      } catch (ApiException ex) {
        if(ex.ErrorCode == 404) {
          return null;
        }
        else {
          throw ex;
        }
      }
    }
    

    /// <summary>
    /// Create an advisor This creates an advisor in the database
    /// </summary>
    /// <param name="Id">Id of post</param>
     /// <param name="Post">JSON block of post data</param>
    
    /// <returns></returns>
    public Post  update (string Id, string Post) {
      // create path and map variables
      var path = "api/v2/posts/{id}.json".Replace("{format}","json").Replace("{" + "id" + "}", apiInvoker.ParameterToString(Id));

      // query params
      var queryParams = new Dictionary<String, String>();
      var headerParams = new Dictionary<String, String>();
      var formParams = new Dictionary<String, object>();

      

      

      

      if (Post != null){
        if(Post is byte[]) {
          formParams.Add("post", Post);
        } else {
          formParams.Add("post", apiInvoker.ParameterToString(Post));
        }
      }
      

      try {
        if (typeof(Post) == typeof(byte[])) {
          
          var response = apiInvoker.invokeBinaryAPI(basePath, path, "GET", queryParams, null, headerParams, formParams);
          return ((object)response) as Post;
          
          
        } else {
          
          var response = apiInvoker.invokeAPI(basePath, path, "PUT", queryParams, null, headerParams, formParams);
          if (response != null){
             return (Post) ApiInvoker.deserialize(response, typeof(Post));
          }
          else {
            return null;
          }
          
          
        }
      } catch (ApiException ex) {
        if(ex.ErrorCode == 404) {
          return null;
        }
        else {
          throw ex;
        }
      }
    }
    

    /// <summary>
    /// Destroy a post This destroys a post in the database
    /// </summary>
    /// <param name="Id">Id of pow5</param>
    
    /// <returns></returns>
    public void  destroy (string Id) {
      // create path and map variables
      var path = "api/v2/posts/{id}.json".Replace("{format}","json").Replace("{" + "id" + "}", apiInvoker.ParameterToString(Id));

      // query params
      var queryParams = new Dictionary<String, String>();
      var headerParams = new Dictionary<String, String>();
      var formParams = new Dictionary<String, object>();

      

      

      

      

      try {
        if (typeof(void) == typeof(byte[])) {
          
          
          apiInvoker.invokeBinaryAPI(basePath, path, "GET", queryParams, null, headerParams, formParams);
          return;
          
        } else {
          
          
          apiInvoker.invokeAPI(basePath, path, "DELETE", queryParams, null, headerParams, formParams);
          return;
          
        }
      } catch (ApiException ex) {
        if(ex.ErrorCode == 404) {
          return ;
        }
        else {
          throw ex;
        }
      }
    }
    
  }
  
}
