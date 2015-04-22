using System;
using System.Collections.Generic;
using io.swagger.client;
using io.swagger.Model;

namespace io.swagger.Api {
  
  public class SourcesApi {
    string basePath;
    private readonly ApiInvoker apiInvoker = ApiInvoker.GetInstance();

    public SourcesApi(String basePath = "https://staging.vestorly.com/api/v2")
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
    ///  Returns all sources
    /// </summary>
    /// <param name="VestorlyAuth">Vestorly Auth Token</param>
    
    /// <returns></returns>
    public Sources  findSources (string VestorlyAuth) {
      // create path and map variables
      var path = "/sources".Replace("{format}","json");

      // query params
      var queryParams = new Dictionary<String, String>();
      var headerParams = new Dictionary<String, String>();
      var formParams = new Dictionary<String, object>();

      

      if (VestorlyAuth != null){
        queryParams.Add("vestorly-auth", apiInvoker.ParameterToString(VestorlyAuth));
      }
      

      

      

      try {
        if (typeof(Sources) == typeof(byte[])) {
          
          var response = apiInvoker.invokeBinaryAPI(basePath, path, "GET", queryParams, null, headerParams, formParams);
          return ((object)response) as Sources;
          
          
        } else {
          
          var response = apiInvoker.invokeAPI(basePath, path, "GET", queryParams, null, headerParams, formParams);
          if (response != null){
             return (Sources) ApiInvoker.deserialize(response, typeof(Sources));
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
    ///  Create source
    /// </summary>
    /// <param name="VestorlyAuth">Vestorly Auth Token</param>
     /// <param name="Source">Source</param>
    
    /// <returns></returns>
    public Source  createSource (string VestorlyAuth, SourceInput Source) {
      // create path and map variables
      var path = "/sources/".Replace("{format}","json");

      // query params
      var queryParams = new Dictionary<String, String>();
      var headerParams = new Dictionary<String, String>();
      var formParams = new Dictionary<String, object>();

      

      if (VestorlyAuth != null){
        queryParams.Add("vestorly-auth", apiInvoker.ParameterToString(VestorlyAuth));
      }
      

      

      

      try {
        if (typeof(Source) == typeof(byte[])) {
          
          var response = apiInvoker.invokeBinaryAPI(basePath, path, "GET", queryParams, null, headerParams, formParams);
          return ((object)response) as Source;
          
          
        } else {
          
          var response = apiInvoker.invokeAPI(basePath, path, "POST", queryParams, Source, headerParams, formParams);
          if (response != null){
             return (Source) ApiInvoker.deserialize(response, typeof(Source));
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
    ///  Get Source By ID
    /// </summary>
    /// <param name="VestorlyAuth">Vestorly Auth Token</param>
     /// <param name="Id">ID of source to fetch</param>
    
    /// <returns></returns>
    public Source  getSourceByID (string VestorlyAuth, string Id) {
      // create path and map variables
      var path = "/sources/{id}".Replace("{format}","json").Replace("{" + "id" + "}", apiInvoker.ParameterToString(Id));

      // query params
      var queryParams = new Dictionary<String, String>();
      var headerParams = new Dictionary<String, String>();
      var formParams = new Dictionary<String, object>();

      

      if (VestorlyAuth != null){
        queryParams.Add("vestorly-auth", apiInvoker.ParameterToString(VestorlyAuth));
      }
      

      

      

      try {
        if (typeof(Source) == typeof(byte[])) {
          
          var response = apiInvoker.invokeBinaryAPI(basePath, path, "GET", queryParams, null, headerParams, formParams);
          return ((object)response) as Source;
          
          
        } else {
          
          var response = apiInvoker.invokeAPI(basePath, path, "GET", queryParams, null, headerParams, formParams);
          if (response != null){
             return (Source) ApiInvoker.deserialize(response, typeof(Source));
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
    ///  Update Source By ID
    /// </summary>
    /// <param name="VestorlyAuth">Vestorly Auth Token</param>
     /// <param name="Id">ID of source to fetch</param>
     /// <param name="Source">Source</param>
    
    /// <returns></returns>
    public Source  UpdateSourceByID (string VestorlyAuth, string Id, SourceInput Source) {
      // create path and map variables
      var path = "/sources/{id}".Replace("{format}","json").Replace("{" + "id" + "}", apiInvoker.ParameterToString(Id));

      // query params
      var queryParams = new Dictionary<String, String>();
      var headerParams = new Dictionary<String, String>();
      var formParams = new Dictionary<String, object>();

      

      if (VestorlyAuth != null){
        queryParams.Add("vestorly-auth", apiInvoker.ParameterToString(VestorlyAuth));
      }
      

      

      

      try {
        if (typeof(Source) == typeof(byte[])) {
          
          var response = apiInvoker.invokeBinaryAPI(basePath, path, "GET", queryParams, null, headerParams, formParams);
          return ((object)response) as Source;
          
          
        } else {
          
          var response = apiInvoker.invokeAPI(basePath, path, "PUT", queryParams, Source, headerParams, formParams);
          if (response != null){
             return (Source) ApiInvoker.deserialize(response, typeof(Source));
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
