using System;
using System.Collections.Generic;
using RestSharp;
using vestorly.client;
using vestorly.model;

namespace vestorly.api {
  
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
    /// <param name="username">Username in the vestorly platform</param>
    /// <param name="password">Password in Vestorly Platform</param>
    /// <returns>Session</returns>
    public Session Login (string username, string password) {

      String myPath = "/sessions";

       if ("username" == "vestorlyAuth") {
        if (("POST" == "POST" || "POST" == "PUT") && "SessionsApi" != "SessionsApi") {
          myPath += "?vestorly_auth=" + username;
        }
      } if ("password" == "vestorlyAuth") {
        if (("POST" == "POST" || "POST" == "PUT") && "SessionsApi" != "SessionsApi") {
          myPath += "?vestorly_auth=" + password;
        }
      }
      
      var _request = new RestRequest(myPath, Method.POST);


      
      // verify the required parameter 'username' is set
      if (username == null) throw new ApiException(400, "Missing required parameter 'username' when calling Login");
      
      // verify the required parameter 'password' is set
      if (password == null) throw new ApiException(400, "Missing required parameter 'password' when calling Login");
      

      // add default header, if any
      foreach(KeyValuePair<string, string> defaultHeader in ApiInvoker.GetDefaultHeader())
      {
        _request.AddHeader(defaultHeader.Key, defaultHeader.Value);
      }

      _request.AddUrlSegment("format", "json"); // set format to json by default
      
       if (username != null && ("POST" == "GET" || "POST" == "DELETE" || "SessionsApi" == "SessionsApi")) _request.AddParameter("username", ApiInvoker.ParameterToString(username)); // query parameter
       if (password != null && ("POST" == "GET" || "POST" == "DELETE" || "SessionsApi" == "SessionsApi")) _request.AddParameter("password", ApiInvoker.ParameterToString(password)); // query parameter
      
      
      
      

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
    /// <param name="vestorlyAuth">Authenication token</param>
    /// <param name="id">ID of pet to session</param>
    /// <returns>SessionLogoutResponse</returns>
    public SessionLogoutResponse Logout (string vestorlyAuth, string id) {

      String myPath = "/sessions/{id}";

       if ("vestorlyAuth" == "vestorlyAuth") {
        if (("DELETE" == "POST" || "DELETE" == "PUT") && "SessionsApi" != "SessionsApi") {
          myPath += "?vestorly_auth=" + vestorlyAuth;
        }
      }
      
      var _request = new RestRequest(myPath, Method.DELETE);


      
      // verify the required parameter 'vestorlyAuth' is set
      if (vestorlyAuth == null) throw new ApiException(400, "Missing required parameter 'vestorlyAuth' when calling Logout");
      
      // verify the required parameter 'id' is set
      if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling Logout");
      

      // add default header, if any
      foreach(KeyValuePair<string, string> defaultHeader in ApiInvoker.GetDefaultHeader())
      {
        _request.AddHeader(defaultHeader.Key, defaultHeader.Value);
      }

      _request.AddUrlSegment("format", "json"); // set format to json by default
      _request.AddUrlSegment("id", ApiInvoker.ParameterToString(id)); // path (url segment) parameter
      
       if (vestorlyAuth != null && ("DELETE" == "GET" || "DELETE" == "DELETE" || "SessionsApi" == "SessionsApi")) _request.AddParameter("vestorly_auth", ApiInvoker.ParameterToString(vestorlyAuth)); // query parameter
      
      
      
      

      // make the HTTP request
      IRestResponse response = restClient.Execute(_request);
      if (((int)response.StatusCode) >= 400) {
        throw new ApiException ((int)response.StatusCode, "Error calling Logout: " + response.Content);
      }
      return (SessionLogoutResponse) ApiInvoker.Deserialize(response.Content, typeof(SessionLogoutResponse));
    }
    
  }
  
}
