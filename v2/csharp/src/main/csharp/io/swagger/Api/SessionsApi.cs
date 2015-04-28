using System;
using System.Collections.Generic;
using io.swagger.client;
using io.swagger.Model;

namespace io.swagger.Api {
  
  public class SessionsApi {
    string basePath;
    private readonly ApiInvoker apiInvoker = ApiInvoker.GetInstance();

    public SessionsApi(String basePath = "https://staging.vestorly.com/api/v2")
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
    ///  Login To Vestorly Platform
    /// </summary>
    /// <param name="Username">Username in the vestorly platform</param>
     /// <param name="Password">Password in Vestorly Platform</param>
    
    /// <returns></returns>
    public Session  login (string Username, string Password) {
      // create path and map variables
      var path = "/sessions".Replace("{format}","json");

      // query params
      var queryParams = new Dictionary<String, String>();
      var headerParams = new Dictionary<String, String>();
      var formParams = new Dictionary<String, object>();

      

      if (Username != null){
        queryParams.Add("username", apiInvoker.ParameterToString(Username));
      }
      if (Password != null){
        queryParams.Add("password", apiInvoker.ParameterToString(Password));
      }
      

      

      

      try {
        if (typeof(Session) == typeof(byte[])) {
          
          var response = apiInvoker.invokeBinaryAPI(basePath, path, "GET", queryParams, null, headerParams, formParams);
          return ((object)response) as Session;
          
          
        } else {
          
          var response = apiInvoker.invokeAPI(basePath, path, "POST", queryParams, null, headerParams, formParams);
          if (response != null){
             return (Session) ApiInvoker.deserialize(response, typeof(Session));
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
    ///  Logout of the vestorly platform
    /// </summary>
    /// <param name="VestorlyAuth">Authenication token</param>
     /// <param name="Id">ID of pet to session</param>
    
    /// <returns></returns>
    public Session  logout (string VestorlyAuth, string Id) {
      // create path and map variables
      var path = "/sessions/{id}".Replace("{format}","json").Replace("{" + "id" + "}", apiInvoker.ParameterToString(Id));

      // query params
      var queryParams = new Dictionary<String, String>();
      var headerParams = new Dictionary<String, String>();
      var formParams = new Dictionary<String, object>();

      

      if (VestorlyAuth != null){
        queryParams.Add("vestorly-auth", apiInvoker.ParameterToString(VestorlyAuth));
      }
      

      

      

      try {
        if (typeof(Session) == typeof(byte[])) {
          
          var response = apiInvoker.invokeBinaryAPI(basePath, path, "GET", queryParams, null, headerParams, formParams);
          return ((object)response) as Session;
          
          
        } else {
          
          var response = apiInvoker.invokeAPI(basePath, path, "DELETE", queryParams, null, headerParams, formParams);
          if (response != null){
             return (Session) ApiInvoker.deserialize(response, typeof(Session));
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
