using System;
using System.Collections.Generic;
using RestSharp;
using vestorly.client;
using vestorly.model;

namespace vestorly.api {
  
  public class GroupsApi {
    string basePath;
    protected RestClient restClient;

    public GroupsApi(String basePath = "https://staging.vestorly.com/api/v2")
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
    ///  Returns all groups
    /// </summary>
    /// <param name="vestorlyAuth">Vestorly Auth Token</param>
    /// <returns>Groups</returns>
    public Groups FindGroups (string vestorlyAuth) {

      String myPath = "/groups";

       if ("vestorlyAuth" == "vestorlyAuth") {
        if (("GET" == "POST" || "GET" == "PUT") && "GroupsApi" != "SessionsApi") {
          myPath += "?vestorly_auth=" + vestorlyAuth;
        }
      }
      
      var _request = new RestRequest(myPath, Method.GET);


      
      // verify the required parameter 'vestorlyAuth' is set
      if (vestorlyAuth == null) throw new ApiException(400, "Missing required parameter 'vestorlyAuth' when calling FindGroups");
      

      // add default header, if any
      foreach(KeyValuePair<string, string> defaultHeader in ApiInvoker.GetDefaultHeader())
      {
        _request.AddHeader(defaultHeader.Key, defaultHeader.Value);
      }

      _request.AddUrlSegment("format", "json"); // set format to json by default
      
       if (vestorlyAuth != null && ("GET" == "GET" || "GET" == "DELETE" || "GroupsApi" == "SessionsApi")) _request.AddParameter("vestorly_auth", ApiInvoker.ParameterToString(vestorlyAuth)); // query parameter
      
      
      
      

      // make the HTTP request
      IRestResponse response = restClient.Execute(_request);
      if (((int)response.StatusCode) >= 400) {
        throw new ApiException ((int)response.StatusCode, "Error calling FindGroups: " + response.Content);
      }
      return (Groups) ApiInvoker.Deserialize(response.Content, typeof(Groups));
    }
    
    
    /// <summary>
    ///  Creates a new Group
    /// </summary>
    /// <param name="vestorlyAuth">Vestorly Auth Token</param>
    /// <param name="group">Group to add</param>
    /// <returns>Groupresponse</returns>
    public Groupresponse CreateGroup (string vestorlyAuth, GroupInput group) {

      String myPath = "/groups";

       if ("vestorlyAuth" == "vestorlyAuth") {
        if (("POST" == "POST" || "POST" == "PUT") && "GroupsApi" != "SessionsApi") {
          myPath += "?vestorly_auth=" + vestorlyAuth;
        }
      }
      
      var _request = new RestRequest(myPath, Method.POST);


      
      // verify the required parameter 'vestorlyAuth' is set
      if (vestorlyAuth == null) throw new ApiException(400, "Missing required parameter 'vestorlyAuth' when calling CreateGroup");
      
      // verify the required parameter 'group' is set
      if (group == null) throw new ApiException(400, "Missing required parameter 'group' when calling CreateGroup");
      

      // add default header, if any
      foreach(KeyValuePair<string, string> defaultHeader in ApiInvoker.GetDefaultHeader())
      {
        _request.AddHeader(defaultHeader.Key, defaultHeader.Value);
      }

      _request.AddUrlSegment("format", "json"); // set format to json by default
      
       if (vestorlyAuth != null && ("POST" == "GET" || "POST" == "DELETE" || "GroupsApi" == "SessionsApi")) _request.AddParameter("vestorly_auth", ApiInvoker.ParameterToString(vestorlyAuth)); // query parameter
      
      
      
      _request.AddParameter("application/json", ApiInvoker.Serialize(group), ParameterType.RequestBody); // http body (model) parameter
      

      // make the HTTP request
      IRestResponse response = restClient.Execute(_request);
      if (((int)response.StatusCode) >= 400) {
        throw new ApiException ((int)response.StatusCode, "Error calling CreateGroup: " + response.Content);
      }
      return (Groupresponse) ApiInvoker.Deserialize(response.Content, typeof(Groupresponse));
    }
    
    
    /// <summary>
    ///  Returns a single group if user has access
    /// </summary>
    /// <param name="vestorlyAuth">Vestorly Auth Token</param>
    /// <param name="id">Mongo ID of group to fetch</param>
    /// <returns>Groupresponse</returns>
    public Groupresponse FindGroupByID (string vestorlyAuth, string id) {

      String myPath = "/groups/{id}";

       if ("vestorlyAuth" == "vestorlyAuth") {
        if (("GET" == "POST" || "GET" == "PUT") && "GroupsApi" != "SessionsApi") {
          myPath += "?vestorly_auth=" + vestorlyAuth;
        }
      }
      
      var _request = new RestRequest(myPath, Method.GET);


      
      // verify the required parameter 'vestorlyAuth' is set
      if (vestorlyAuth == null) throw new ApiException(400, "Missing required parameter 'vestorlyAuth' when calling FindGroupByID");
      
      // verify the required parameter 'id' is set
      if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling FindGroupByID");
      

      // add default header, if any
      foreach(KeyValuePair<string, string> defaultHeader in ApiInvoker.GetDefaultHeader())
      {
        _request.AddHeader(defaultHeader.Key, defaultHeader.Value);
      }

      _request.AddUrlSegment("format", "json"); // set format to json by default
      _request.AddUrlSegment("id", ApiInvoker.ParameterToString(id)); // path (url segment) parameter
      
       if (vestorlyAuth != null && ("GET" == "GET" || "GET" == "DELETE" || "GroupsApi" == "SessionsApi")) _request.AddParameter("vestorly_auth", ApiInvoker.ParameterToString(vestorlyAuth)); // query parameter
      
      
      
      

      // make the HTTP request
      IRestResponse response = restClient.Execute(_request);
      if (((int)response.StatusCode) >= 400) {
        throw new ApiException ((int)response.StatusCode, "Error calling FindGroupByID: " + response.Content);
      }
      return (Groupresponse) ApiInvoker.Deserialize(response.Content, typeof(Groupresponse));
    }
    
    
    /// <summary>
    ///  Updates a Group
    /// </summary>
    /// <param name="vestorlyAuth">Vestorly Auth Token</param>
    /// <param name="id">id of group to update</param>
    /// <param name="group">Group to update</param>
    /// <returns>Groupresponse</returns>
    public Groupresponse UpdateGroupById (string vestorlyAuth, string id, GroupInput group) {

      String myPath = "/groups/{id}";

       if ("vestorlyAuth" == "vestorlyAuth") {
        if (("PUT" == "POST" || "PUT" == "PUT") && "GroupsApi" != "SessionsApi") {
          myPath += "?vestorly_auth=" + vestorlyAuth;
        }
      }
      
      var _request = new RestRequest(myPath, Method.PUT);


      
      // verify the required parameter 'vestorlyAuth' is set
      if (vestorlyAuth == null) throw new ApiException(400, "Missing required parameter 'vestorlyAuth' when calling UpdateGroupById");
      
      // verify the required parameter 'id' is set
      if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling UpdateGroupById");
      
      // verify the required parameter 'group' is set
      if (group == null) throw new ApiException(400, "Missing required parameter 'group' when calling UpdateGroupById");
      

      // add default header, if any
      foreach(KeyValuePair<string, string> defaultHeader in ApiInvoker.GetDefaultHeader())
      {
        _request.AddHeader(defaultHeader.Key, defaultHeader.Value);
      }

      _request.AddUrlSegment("format", "json"); // set format to json by default
      _request.AddUrlSegment("id", ApiInvoker.ParameterToString(id)); // path (url segment) parameter
      
       if (vestorlyAuth != null && ("PUT" == "GET" || "PUT" == "DELETE" || "GroupsApi" == "SessionsApi")) _request.AddParameter("vestorly_auth", ApiInvoker.ParameterToString(vestorlyAuth)); // query parameter
      
      
      
      _request.AddParameter("application/json", ApiInvoker.Serialize(group), ParameterType.RequestBody); // http body (model) parameter
      

      // make the HTTP request
      IRestResponse response = restClient.Execute(_request);
      if (((int)response.StatusCode) >= 400) {
        throw new ApiException ((int)response.StatusCode, "Error calling UpdateGroupById: " + response.Content);
      }
      return (Groupresponse) ApiInvoker.Deserialize(response.Content, typeof(Groupresponse));
    }
    
    
    /// <summary>
    ///  Deletes a Group
    /// </summary>
    /// <param name="vestorlyAuth">Vestorly Auth Token</param>
    /// <param name="id">id of group to delete</param>
    /// <returns>Groupresponse</returns>
    public Groupresponse DeleteGroup (string vestorlyAuth, string id) {

      String myPath = "/groups/{id}";

       if ("vestorlyAuth" == "vestorlyAuth") {
        if (("DELETE" == "POST" || "DELETE" == "PUT") && "GroupsApi" != "SessionsApi") {
          myPath += "?vestorly_auth=" + vestorlyAuth;
        }
      }
      
      var _request = new RestRequest(myPath, Method.DELETE);


      
      // verify the required parameter 'vestorlyAuth' is set
      if (vestorlyAuth == null) throw new ApiException(400, "Missing required parameter 'vestorlyAuth' when calling DeleteGroup");
      
      // verify the required parameter 'id' is set
      if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling DeleteGroup");
      

      // add default header, if any
      foreach(KeyValuePair<string, string> defaultHeader in ApiInvoker.GetDefaultHeader())
      {
        _request.AddHeader(defaultHeader.Key, defaultHeader.Value);
      }

      _request.AddUrlSegment("format", "json"); // set format to json by default
      _request.AddUrlSegment("id", ApiInvoker.ParameterToString(id)); // path (url segment) parameter
      
       if (vestorlyAuth != null && ("DELETE" == "GET" || "DELETE" == "DELETE" || "GroupsApi" == "SessionsApi")) _request.AddParameter("vestorly_auth", ApiInvoker.ParameterToString(vestorlyAuth)); // query parameter
      
      
      
      

      // make the HTTP request
      IRestResponse response = restClient.Execute(_request);
      if (((int)response.StatusCode) >= 400) {
        throw new ApiException ((int)response.StatusCode, "Error calling DeleteGroup: " + response.Content);
      }
      return (Groupresponse) ApiInvoker.Deserialize(response.Content, typeof(Groupresponse));
    }
    
  }
  
}
