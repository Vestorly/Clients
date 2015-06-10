using System;
using System.Collections.Generic;
using RestSharp;
using vestorly.client;
using vestorly.Model;

namespace vestorly.Api {
  
  public class SessionsApi {
    string basePath;
    protected RestClient restClient;

    public SessionsApi(String basePath = "https://staging.vestorly.com/api/v2")
    {
      this.basePath = basePath;
      this.restClient = new RestClient(basePath);
    }

    /// <summary>
    /// Sets the endpoint base url for the services being accessed
    /// </summary>
    /// <param name="basePath"> Base URL
    /// <returns></returns>
    public void SetBasePath(string basePath) {
      this.basePath = basePath;
    }

    /// <summary>
    /// Gets the endpoint base url for the services being accessed
    /// <returns>Base URL</returns>
    /// </summary>
    public String GetBasePath() {
      return this.basePath;
    }

    
    
    /// <summary>
    ///  Login To Vestorly Platform
    /// </summary>
    /// <param name="Username">Username in the vestorly platform</param>
    /// <param name="Password">Password in Vestorly Platform</param>
    /// <returns>Session</returns>
    public Session Login (string Username, string Password) {

      var _request = new RestRequest("/sessions", Method.POST);

      
      // verify the required parameter 'Username' is set
      if (Username == null) throw new ApiException(400, "Missing required parameter 'Username' when calling Login");
      
      // verify the required parameter 'Password' is set
      if (Password == null) throw new ApiException(400, "Missing required parameter 'Password' when calling Login");
      

      // add default header, if any
      foreach(KeyValuePair<string, string> defaultHeader in ApiInvoker.GetDefaultHeader())
      {
        _request.AddHeader(defaultHeader.Key, defaultHeader.Value);
      }

      _request.AddUrlSegment("format", "json"); // set format to json by default
      
       if (Username != null) _request.AddParameter("username", ApiInvoker.ParameterToString(Username)); // query parameter
       if (Password != null) _request.AddParameter("password", ApiInvoker.ParameterToString(Password)); // query parameter
      
      
      
      

      // make the HTTP request
      IRestResponse response = restClient.Execute(_request);
      if (((int)response.StatusCode) >= 400) {
        throw new ApiException ((int)response.StatusCode, "Error calling Login: " + response.Content);
      }
      return (Session) ApiInvoker.Deserialize(response.Content, typeof(Session));
    }
    
    
    /// <summary>
    ///  Logout of the vestorly platform
    /// </summary>
    /// <param name="VestorlyAuth">Authenication token</param>
    /// <param name="Id">ID of pet to session</param>
    /// <returns>SessionLogoutResponse</returns>
    public SessionLogoutResponse Logout (string VestorlyAuth, string Id) {

      var _request = new RestRequest("/sessions/{id}", Method.DELETE);

      
      // verify the required parameter 'VestorlyAuth' is set
      if (VestorlyAuth == null) throw new ApiException(400, "Missing required parameter 'VestorlyAuth' when calling Logout");
      
      // verify the required parameter 'Id' is set
      if (Id == null) throw new ApiException(400, "Missing required parameter 'Id' when calling Logout");
      

      // add default header, if any
      foreach(KeyValuePair<string, string> defaultHeader in ApiInvoker.GetDefaultHeader())
      {
        _request.AddHeader(defaultHeader.Key, defaultHeader.Value);
      }

      _request.AddUrlSegment("format", "json"); // set format to json by default
      _request.AddUrlSegment("id", ApiInvoker.ParameterToString(Id)); // path (url segment) parameter
      
       if (VestorlyAuth != null) _request.AddParameter("vestorly_auth", ApiInvoker.ParameterToString(VestorlyAuth)); // query parameter
      
      
      
      

      // make the HTTP request
      IRestResponse response = restClient.Execute(_request);
      if (((int)response.StatusCode) >= 400) {
        throw new ApiException ((int)response.StatusCode, "Error calling Logout: " + response.Content);
      }
      return (SessionLogoutResponse) ApiInvoker.Deserialize(response.Content, typeof(SessionLogoutResponse));
    }
    
  }
  
}
