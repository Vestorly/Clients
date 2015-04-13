using System;
using System.Collections.Generic;
using io.swagger.client;
using io.swagger.Model;

namespace io.swagger.Api {
  
  public class ArticlesApi {
    string basePath;
    private readonly ApiInvoker apiInvoker = ApiInvoker.GetInstance();

    public ArticlesApi(String basePath = "http://staging.vestorly.com/")
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
    /// Read a list of articles This retrieves a list of articles objects
    /// </summary>
    /// <param name="VestorlyAuth">Authentication token</param>
     /// <param name="IsPublished">Filter by published articles</param>
     /// <param name="ExternalUrlSource">Filter by posts with external URL source</param>
     /// <param name="Ids">Return posts with list of IDs provided</param>
    
    /// <returns></returns>
    public Article  index (string VestorlyAuth, string IsPublished, string ExternalUrlSource, string Ids) {
      // create path and map variables
      var path = "api/v2/articles.json".Replace("{format}","json");

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
        if (typeof(Article) == typeof(byte[])) {
          
          var response = apiInvoker.invokeBinaryAPI(basePath, path, "GET", queryParams, null, headerParams, formParams);
          return ((object)response) as Article;
          
          
        } else {
          
          var response = apiInvoker.invokeAPI(basePath, path, "GET", queryParams, null, headerParams, formParams);
          if (response != null){
             return (Article) ApiInvoker.deserialize(response, typeof(Article));
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
    /// Read a specific article This retrieves a specific article document
    /// </summary>
    /// <param name="VestorlyAuth">Authentication token</param>
     /// <param name="Id">Id of article</param>
    
    /// <returns></returns>
    public Article  show (string VestorlyAuth, string Id) {
      // create path and map variables
      var path = "api/v2/articles/{id}.json".Replace("{format}","json").Replace("{" + "id" + "}", apiInvoker.ParameterToString(Id));

      // query params
      var queryParams = new Dictionary<String, String>();
      var headerParams = new Dictionary<String, String>();
      var formParams = new Dictionary<String, object>();

      

      if (VestorlyAuth != null){
        queryParams.Add("vestorly-auth", apiInvoker.ParameterToString(VestorlyAuth));
      }
      

      

      

      try {
        if (typeof(Article) == typeof(byte[])) {
          
          var response = apiInvoker.invokeBinaryAPI(basePath, path, "GET", queryParams, null, headerParams, formParams);
          return ((object)response) as Article;
          
          
        } else {
          
          var response = apiInvoker.invokeAPI(basePath, path, "GET", queryParams, null, headerParams, formParams);
          if (response != null){
             return (Article) ApiInvoker.deserialize(response, typeof(Article));
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
    /// Update an article This updates an article in the database
    /// </summary>
    /// <param name="VestorlyAuth">Authentication token</param>
     /// <param name="Article">JSON block of article data</param>
    
    /// <returns></returns>
    public Article  update (string VestorlyAuth, string Article) {
      // create path and map variables
      var path = "api/v2/articles/{id}.json".Replace("{format}","json");

      // query params
      var queryParams = new Dictionary<String, String>();
      var headerParams = new Dictionary<String, String>();
      var formParams = new Dictionary<String, object>();

      

      if (VestorlyAuth != null){
        queryParams.Add("vestorly-auth", apiInvoker.ParameterToString(VestorlyAuth));
      }
      

      

      if (Article != null){
        if(Article is byte[]) {
          formParams.Add("article", Article);
        } else {
          formParams.Add("article", apiInvoker.ParameterToString(Article));
        }
      }
      

      try {
        if (typeof(Article) == typeof(byte[])) {
          
          var response = apiInvoker.invokeBinaryAPI(basePath, path, "GET", queryParams, null, headerParams, formParams);
          return ((object)response) as Article;
          
          
        } else {
          
          var response = apiInvoker.invokeAPI(basePath, path, "PUT", queryParams, null, headerParams, formParams);
          if (response != null){
             return (Article) ApiInvoker.deserialize(response, typeof(Article));
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
    
  }
  
}
