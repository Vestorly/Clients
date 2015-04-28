using System;
using System.Collections.Generic;
using io.swagger.client;
using io.swagger.Model;

namespace io.swagger.Api {
  
  public class ArticlesApi {
    string basePath;
    private readonly ApiInvoker apiInvoker = ApiInvoker.GetInstance();

    public ArticlesApi(String basePath = "https://staging.vestorly.com/api/v2")
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
    ///  Returns all articles
    /// </summary>
    /// <param name="VestorlyAuth">Vestorly Auth Token</param>
     /// <param name="Limit">Limit on the number of articles to return</param>
     /// <param name="TextQuery">Search query parameter</param>
     /// <param name="SortDirection">Direction of sort (used with sort_by parameter)</param>
     /// <param name="SortBy">Field on model to sort by</param>
    
    /// <returns></returns>
    public Articles  findArticles (string VestorlyAuth, int? Limit, string TextQuery, string SortDirection, string SortBy) {
      // create path and map variables
      var path = "/articles".Replace("{format}","json");

      // query params
      var queryParams = new Dictionary<String, String>();
      var headerParams = new Dictionary<String, String>();
      var formParams = new Dictionary<String, object>();

      

      if (VestorlyAuth != null){
        queryParams.Add("vestorly-auth", apiInvoker.ParameterToString(VestorlyAuth));
      }
      if (Limit != null){
        queryParams.Add("limit", apiInvoker.ParameterToString(Limit));
      }
      if (TextQuery != null){
        queryParams.Add("text_query", apiInvoker.ParameterToString(TextQuery));
      }
      if (SortDirection != null){
        queryParams.Add("sort_direction", apiInvoker.ParameterToString(SortDirection));
      }
      if (SortBy != null){
        queryParams.Add("sort_by", apiInvoker.ParameterToString(SortBy));
      }
      

      

      

      try {
        if (typeof(Articles) == typeof(byte[])) {
          
          var response = apiInvoker.invokeBinaryAPI(basePath, path, "GET", queryParams, null, headerParams, formParams);
          return ((object)response) as Articles;
          
          
        } else {
          
          var response = apiInvoker.invokeAPI(basePath, path, "GET", queryParams, null, headerParams, formParams);
          if (response != null){
             return (Articles) ApiInvoker.deserialize(response, typeof(Articles));
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
    ///  Returns a single article
    /// </summary>
    /// <param name="Id">Article Id to fetch</param>
    
    /// <returns></returns>
    public Articleresponse  findArticleByID (string Id) {
      // create path and map variables
      var path = "/articles/{id}".Replace("{format}","json").Replace("{" + "id" + "}", apiInvoker.ParameterToString(Id));

      // query params
      var queryParams = new Dictionary<String, String>();
      var headerParams = new Dictionary<String, String>();
      var formParams = new Dictionary<String, object>();

      

      

      

      

      try {
        if (typeof(Articleresponse) == typeof(byte[])) {
          
          var response = apiInvoker.invokeBinaryAPI(basePath, path, "GET", queryParams, null, headerParams, formParams);
          return ((object)response) as Articleresponse;
          
          
        } else {
          
          var response = apiInvoker.invokeAPI(basePath, path, "GET", queryParams, null, headerParams, formParams);
          if (response != null){
             return (Articleresponse) ApiInvoker.deserialize(response, typeof(Articleresponse));
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
