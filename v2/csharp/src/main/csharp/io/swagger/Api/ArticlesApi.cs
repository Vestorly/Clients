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
    
    /// <returns></returns>
    public void  findArticles (string VestorlyAuth, long? Limit, string TextQuery) {
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
    
  }
  
}
