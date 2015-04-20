using System;
using System.Collections.Generic;
using io.swagger.client;
using io.swagger.Model;

namespace io.swagger.Api {
  
  public class NewslettersApi {
    string basePath;
    private readonly ApiInvoker apiInvoker = ApiInvoker.GetInstance();

    public NewslettersApi(String basePath = "https://staging.vestorly.com/api/v2")
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
    ///  Returns all newsletters
    /// </summary>
    /// <param name="VestorlyAuth">Vestorly Auth Token</param>
    
    /// <returns></returns>
    public Newsletters  findNewsletters (string VestorlyAuth) {
      // create path and map variables
      var path = "/newsletters".Replace("{format}","json");

      // query params
      var queryParams = new Dictionary<String, String>();
      var headerParams = new Dictionary<String, String>();
      var formParams = new Dictionary<String, object>();

      

      if (VestorlyAuth != null){
        queryParams.Add("vestorly_auth", apiInvoker.ParameterToString(VestorlyAuth));
      }
      

      

      

      try {
        if (typeof(Newsletters) == typeof(byte[])) {
          
          var response = apiInvoker.invokeBinaryAPI(basePath, path, "GET", queryParams, null, headerParams, formParams);
          return ((object)response) as Newsletters;
          
          
        } else {
          
          var response = apiInvoker.invokeAPI(basePath, path, "GET", queryParams, null, headerParams, formParams);
          if (response != null){
             return (Newsletters) ApiInvoker.deserialize(response, typeof(Newsletters));
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
    ///  Returns newsletter by ID
    /// </summary>
    /// <param name="VestorlyAuth">Vestorly Auth Token</param>
     /// <param name="Id">ID of newsletter to fetch</param>
    
    /// <returns></returns>
    public Newsletter  getNewsletterByID (string VestorlyAuth, string Id) {
      // create path and map variables
      var path = "/newsletters/{id}".Replace("{format}","json").Replace("{" + "id" + "}", apiInvoker.ParameterToString(Id));

      // query params
      var queryParams = new Dictionary<String, String>();
      var headerParams = new Dictionary<String, String>();
      var formParams = new Dictionary<String, object>();

      

      if (VestorlyAuth != null){
        queryParams.Add("vestorly_auth", apiInvoker.ParameterToString(VestorlyAuth));
      }
      

      

      

      try {
        if (typeof(Newsletter) == typeof(byte[])) {
          
          var response = apiInvoker.invokeBinaryAPI(basePath, path, "GET", queryParams, null, headerParams, formParams);
          return ((object)response) as Newsletter;
          
          
        } else {
          
          var response = apiInvoker.invokeAPI(basePath, path, "GET", queryParams, null, headerParams, formParams);
          if (response != null){
             return (Newsletter) ApiInvoker.deserialize(response, typeof(Newsletter));
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
    ///  Update newsletter by ID
    /// </summary>
    /// <param name="VestorlyAuth">Vestorly Auth Token</param>
     /// <param name="Id">ID of newsletter to fetch</param>
     /// <param name="Newsletter">Newsletter</param>
    
    /// <returns></returns>
    public Newsletter  updateNewsletter (string VestorlyAuth, string Id, string Newsletter) {
      // create path and map variables
      var path = "/newsletters/{id}".Replace("{format}","json").Replace("{" + "id" + "}", apiInvoker.ParameterToString(Id));

      // query params
      var queryParams = new Dictionary<String, String>();
      var headerParams = new Dictionary<String, String>();
      var formParams = new Dictionary<String, object>();

      

      if (VestorlyAuth != null){
        queryParams.Add("vestorly_auth", apiInvoker.ParameterToString(VestorlyAuth));
      }
      

      

      if (Newsletter != null){
        if(Newsletter is byte[]) {
          formParams.Add("Newsletter", Newsletter);
        } else {
          formParams.Add("Newsletter", apiInvoker.ParameterToString(Newsletter));
        }
      }
      

      try {
        if (typeof(Newsletter) == typeof(byte[])) {
          
          var response = apiInvoker.invokeBinaryAPI(basePath, path, "GET", queryParams, null, headerParams, formParams);
          return ((object)response) as Newsletter;
          
          
        } else {
          
          var response = apiInvoker.invokeAPI(basePath, path, "PUT", queryParams, null, headerParams, formParams);
          if (response != null){
             return (Newsletter) ApiInvoker.deserialize(response, typeof(Newsletter));
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
