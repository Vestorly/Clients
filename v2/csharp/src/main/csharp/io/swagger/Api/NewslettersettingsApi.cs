using System;
using System.Collections.Generic;
using io.swagger.client;
using io.swagger.Model;

namespace io.swagger.Api {
  
  public class NewslettersettingsApi {
    string basePath;
    private readonly ApiInvoker apiInvoker = ApiInvoker.GetInstance();

    public NewslettersettingsApi(String basePath = "https://staging.vestorly.com/api/v2")
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
    ///  Returns all newsletter settings
    /// </summary>
    /// <param name="VestorlyAuth">Vestorly Auth Token</param>
    
    /// <returns></returns>
    public NewsletterSettings  findNewsletterSettings (string VestorlyAuth) {
      // create path and map variables
      var path = "/newsletter_settings".Replace("{format}","json");

      // query params
      var queryParams = new Dictionary<String, String>();
      var headerParams = new Dictionary<String, String>();
      var formParams = new Dictionary<String, object>();

      

      if (VestorlyAuth != null){
        queryParams.Add("vestorly_auth", apiInvoker.ParameterToString(VestorlyAuth));
      }
      

      

      

      try {
        if (typeof(NewsletterSettings) == typeof(byte[])) {
          
          var response = apiInvoker.invokeBinaryAPI(basePath, path, "GET", queryParams, null, headerParams, formParams);
          return ((object)response) as NewsletterSettings;
          
          
        } else {
          
          var response = apiInvoker.invokeAPI(basePath, path, "GET", queryParams, null, headerParams, formParams);
          if (response != null){
             return (NewsletterSettings) ApiInvoker.deserialize(response, typeof(NewsletterSettings));
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
    ///  Update a single newsletter setting by ID
    /// </summary>
    /// <param name="VestorlyAuth">Vestorly Auth Token</param>
     /// <param name="NewsletterSettings">newsletter settings</param>
    
    /// <returns></returns>
    public NewsletterSettings  updateNewsletterSettingsByID (string VestorlyAuth, string NewsletterSettings) {
      // create path and map variables
      var path = "/newsletter_settings".Replace("{format}","json");

      // query params
      var queryParams = new Dictionary<String, String>();
      var headerParams = new Dictionary<String, String>();
      var formParams = new Dictionary<String, object>();

      

      if (VestorlyAuth != null){
        queryParams.Add("vestorly_auth", apiInvoker.ParameterToString(VestorlyAuth));
      }
      

      

      if (NewsletterSettings != null){
        if(NewsletterSettings is byte[]) {
          formParams.Add("newsletter_settings", NewsletterSettings);
        } else {
          formParams.Add("newsletter_settings", apiInvoker.ParameterToString(NewsletterSettings));
        }
      }
      

      try {
        if (typeof(NewsletterSettings) == typeof(byte[])) {
          
          var response = apiInvoker.invokeBinaryAPI(basePath, path, "GET", queryParams, null, headerParams, formParams);
          return ((object)response) as NewsletterSettings;
          
          
        } else {
          
          var response = apiInvoker.invokeAPI(basePath, path, "PUT", queryParams, null, headerParams, formParams);
          if (response != null){
             return (NewsletterSettings) ApiInvoker.deserialize(response, typeof(NewsletterSettings));
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
    ///  Returns a single newsletter settings if the user has access
    /// </summary>
    /// <param name="Id">Mongo ID of newsletter settings to fetch</param>
     /// <param name="VestorlyAuth">Vestorly Auth Token</param>
    
    /// <returns></returns>
    public NewsletterSettings  findNewsletterSettingsByID (string Id, string VestorlyAuth) {
      // create path and map variables
      var path = "/newsletter_settings/{id}".Replace("{format}","json").Replace("{" + "id" + "}", apiInvoker.ParameterToString(Id));

      // query params
      var queryParams = new Dictionary<String, String>();
      var headerParams = new Dictionary<String, String>();
      var formParams = new Dictionary<String, object>();

      

      if (VestorlyAuth != null){
        queryParams.Add("vestorly_auth", apiInvoker.ParameterToString(VestorlyAuth));
      }
      

      

      

      try {
        if (typeof(NewsletterSettings) == typeof(byte[])) {
          
          var response = apiInvoker.invokeBinaryAPI(basePath, path, "GET", queryParams, null, headerParams, formParams);
          return ((object)response) as NewsletterSettings;
          
          
        } else {
          
          var response = apiInvoker.invokeAPI(basePath, path, "GET", queryParams, null, headerParams, formParams);
          if (response != null){
             return (NewsletterSettings) ApiInvoker.deserialize(response, typeof(NewsletterSettings));
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
