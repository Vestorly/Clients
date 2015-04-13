using System;
using System.Collections.Generic;
using io.swagger.client;
using io.swagger.Model;

namespace io.swagger.Api {
  
  public class RssfeedsApi {
    string basePath;
    private readonly ApiInvoker apiInvoker = ApiInvoker.GetInstance();

    public RssfeedsApi(String basePath = "http://staging.vestorly.com/")
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
    /// Read a list of rss feed This retrieves a list of rss feed objects
    /// </summary>
    /// <param name="VestorlyAuth">Authentication token</param>
     /// <param name="Ids">Return rss feed with list of IDs provided</param>
    
    /// <returns></returns>
    public void  index (string VestorlyAuth, string Ids) {
      // create path and map variables
      var path = "api/v2/rss_feeds.json".Replace("{format}","json");

      // query params
      var queryParams = new Dictionary<String, String>();
      var headerParams = new Dictionary<String, String>();
      var formParams = new Dictionary<String, object>();

      

      if (VestorlyAuth != null){
        queryParams.Add("vestorly-auth", apiInvoker.ParameterToString(VestorlyAuth));
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
    /// <param name="RssFeed">JSON block of rss feed data</param>
    
    /// <returns></returns>
    public void  create (string RssFeed) {
      // create path and map variables
      var path = "api/v2/rss_feeds.json".Replace("{format}","json");

      // query params
      var queryParams = new Dictionary<String, String>();
      var headerParams = new Dictionary<String, String>();
      var formParams = new Dictionary<String, object>();

      

      

      

      if (RssFeed != null){
        if(RssFeed is byte[]) {
          formParams.Add("rss_feed", RssFeed);
        } else {
          formParams.Add("rss_feed", apiInvoker.ParameterToString(RssFeed));
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
    /// Retreive a single rss feed Retrieve a single rss feed from the database
    /// </summary>
    /// <param name="VestorlyAuth">Authentication token</param>
     /// <param name="Id">Id of rss feed</param>
    
    /// <returns></returns>
    public RSSFeed  show (string VestorlyAuth, string Id) {
      // create path and map variables
      var path = "api/v2/rss_feeds/{id}.json".Replace("{format}","json").Replace("{" + "id" + "}", apiInvoker.ParameterToString(Id));

      // query params
      var queryParams = new Dictionary<String, String>();
      var headerParams = new Dictionary<String, String>();
      var formParams = new Dictionary<String, object>();

      

      if (VestorlyAuth != null){
        queryParams.Add("vestorly-auth", apiInvoker.ParameterToString(VestorlyAuth));
      }
      

      

      

      try {
        if (typeof(RSSFeed) == typeof(byte[])) {
          
          var response = apiInvoker.invokeBinaryAPI(basePath, path, "GET", queryParams, null, headerParams, formParams);
          return ((object)response) as RSSFeed;
          
          
        } else {
          
          var response = apiInvoker.invokeAPI(basePath, path, "GET", queryParams, null, headerParams, formParams);
          if (response != null){
             return (RSSFeed) ApiInvoker.deserialize(response, typeof(RSSFeed));
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
     /// <param name="RssFeed">JSON block of rss feed data</param>
    
    /// <returns></returns>
    public RSSFeed  update (string Id, string RssFeed) {
      // create path and map variables
      var path = "api/v2/rss_feeds/{id}.json".Replace("{format}","json").Replace("{" + "id" + "}", apiInvoker.ParameterToString(Id));

      // query params
      var queryParams = new Dictionary<String, String>();
      var headerParams = new Dictionary<String, String>();
      var formParams = new Dictionary<String, object>();

      

      

      

      if (RssFeed != null){
        if(RssFeed is byte[]) {
          formParams.Add("rss_feed", RssFeed);
        } else {
          formParams.Add("rss_feed", apiInvoker.ParameterToString(RssFeed));
        }
      }
      

      try {
        if (typeof(RSSFeed) == typeof(byte[])) {
          
          var response = apiInvoker.invokeBinaryAPI(basePath, path, "GET", queryParams, null, headerParams, formParams);
          return ((object)response) as RSSFeed;
          
          
        } else {
          
          var response = apiInvoker.invokeAPI(basePath, path, "PUT", queryParams, null, headerParams, formParams);
          if (response != null){
             return (RSSFeed) ApiInvoker.deserialize(response, typeof(RSSFeed));
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
      var path = "api/v2/rss_feeds/{id}.json".Replace("{format}","json").Replace("{" + "id" + "}", apiInvoker.ParameterToString(Id));

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
