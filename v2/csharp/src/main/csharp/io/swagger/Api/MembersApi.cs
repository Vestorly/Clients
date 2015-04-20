using System;
using System.Collections.Generic;
using io.swagger.client;
using io.swagger.Model;

namespace io.swagger.Api {
  
  public class MembersApi {
    string basePath;
    private readonly ApiInvoker apiInvoker = ApiInvoker.GetInstance();

    public MembersApi(String basePath = "https://staging.vestorly.com/api/v2")
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
    ///  Returns all members
    /// </summary>
    /// <param name="VestorlyAuth">Vestorly Auth Token</param>
    
    /// <returns></returns>
    public Members  findMembers (string VestorlyAuth) {
      // create path and map variables
      var path = "/members".Replace("{format}","json");

      // query params
      var queryParams = new Dictionary<String, String>();
      var headerParams = new Dictionary<String, String>();
      var formParams = new Dictionary<String, object>();

      

      if (VestorlyAuth != null){
        queryParams.Add("vestorly_auth", apiInvoker.ParameterToString(VestorlyAuth));
      }
      

      

      

      try {
        if (typeof(Members) == typeof(byte[])) {
          
          var response = apiInvoker.invokeBinaryAPI(basePath, path, "GET", queryParams, null, headerParams, formParams);
          return ((object)response) as Members;
          
          
        } else {
          
          var response = apiInvoker.invokeAPI(basePath, path, "GET", queryParams, null, headerParams, formParams);
          if (response != null){
             return (Members) ApiInvoker.deserialize(response, typeof(Members));
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
    ///  Returns a single member
    /// </summary>
    /// <param name="Id">Mongo ID of member to fetch</param>
     /// <param name="VestorlyAuth">Vestorly Auth Token</param>
    
    /// <returns></returns>
    public Member  findMemberByID (string Id, string VestorlyAuth) {
      // create path and map variables
      var path = "/members/{id}".Replace("{format}","json").Replace("{" + "id" + "}", apiInvoker.ParameterToString(Id));

      // query params
      var queryParams = new Dictionary<String, String>();
      var headerParams = new Dictionary<String, String>();
      var formParams = new Dictionary<String, object>();

      

      if (VestorlyAuth != null){
        queryParams.Add("vestorly_auth", apiInvoker.ParameterToString(VestorlyAuth));
      }
      

      

      

      try {
        if (typeof(Member) == typeof(byte[])) {
          
          var response = apiInvoker.invokeBinaryAPI(basePath, path, "GET", queryParams, null, headerParams, formParams);
          return ((object)response) as Member;
          
          
        } else {
          
          var response = apiInvoker.invokeAPI(basePath, path, "GET", queryParams, null, headerParams, formParams);
          if (response != null){
             return (Member) ApiInvoker.deserialize(response, typeof(Member));
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
    ///  Returns a single member
    /// </summary>
    /// <param name="Id">Mongo ID of member to fetch</param>
     /// <param name="VestorlyAuth">Vestorly Auth Token</param>
    
    /// <returns></returns>
    public Member  findMemberByID_1 (string Id, string VestorlyAuth) {
      // create path and map variables
      var path = "/members/{id}".Replace("{format}","json").Replace("{" + "id" + "}", apiInvoker.ParameterToString(Id));

      // query params
      var queryParams = new Dictionary<String, String>();
      var headerParams = new Dictionary<String, String>();
      var formParams = new Dictionary<String, object>();

      

      if (VestorlyAuth != null){
        queryParams.Add("vestorly_auth", apiInvoker.ParameterToString(VestorlyAuth));
      }
      

      

      

      try {
        if (typeof(Member) == typeof(byte[])) {
          
          var response = apiInvoker.invokeBinaryAPI(basePath, path, "GET", queryParams, null, headerParams, formParams);
          return ((object)response) as Member;
          
          
        } else {
          
          var response = apiInvoker.invokeAPI(basePath, path, "PUT", queryParams, null, headerParams, formParams);
          if (response != null){
             return (Member) ApiInvoker.deserialize(response, typeof(Member));
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
