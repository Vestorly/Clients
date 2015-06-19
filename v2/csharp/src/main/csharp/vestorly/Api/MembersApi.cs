using System;
using System.Collections.Generic;
using RestSharp;
using vestorly.client;
using vestorly.model;

namespace vestorly.api {
  
  public class MembersApi {
    string basePath;
    protected RestClient restClient;

    public MembersApi(String basePath = "https://staging.vestorly.com/api/v2")
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
    ///  Returns all members
    /// </summary>
    /// <param name="vestorlyAuth">Vestorly Auth Token</param>
    /// <returns>Members</returns>
    public Members FindMembers (string vestorlyAuth) {

      String myPath = "/members";

       if ("vestorlyAuth" == "vestorlyAuth") {
        if (("GET" == "POST" || "GET" == "PUT") && "MembersApi" != "SessionsApi") {
          myPath += "?vestorly_auth=" + vestorlyAuth;
        }
      }
      
      var _request = new RestRequest(myPath, Method.GET);


      
      // verify the required parameter 'vestorlyAuth' is set
      if (vestorlyAuth == null) throw new ApiException(400, "Missing required parameter 'vestorlyAuth' when calling FindMembers");
      

      // add default header, if any
      foreach(KeyValuePair<string, string> defaultHeader in ApiInvoker.GetDefaultHeader())
      {
        _request.AddHeader(defaultHeader.Key, defaultHeader.Value);
      }

      _request.AddUrlSegment("format", "json"); // set format to json by default
      
       if (vestorlyAuth != null && ("GET" == "GET" || "GET" == "DELETE" || "MembersApi" == "SessionsApi")) _request.AddParameter("vestorly_auth", ApiInvoker.ParameterToString(vestorlyAuth)); // query parameter
      
      
      
      

      // make the HTTP request
      IRestResponse response = restClient.Execute(_request);
      if (((int)response.StatusCode) >= 400) {
        throw new ApiException ((int)response.StatusCode, "Error calling FindMembers: " + response.Content);
      }
      return (Members) ApiInvoker.Deserialize(response.Content, typeof(Members));
    }
    
    
    /// <summary>
    ///  Create a new member in the Vestorly Platform
    /// </summary>
    /// <param name="vestorlyAuth">Vestorly Auth Token</param>
    /// <param name="member">Member you want to create</param>
    /// <returns>Memberresponse</returns>
    public Memberresponse CreateMember (string vestorlyAuth, Member member) {

      String myPath = "/members";

       if ("vestorlyAuth" == "vestorlyAuth") {
        if (("POST" == "POST" || "POST" == "PUT") && "MembersApi" != "SessionsApi") {
          myPath += "?vestorly_auth=" + vestorlyAuth;
        }
      }
      
      var _request = new RestRequest(myPath, Method.POST);


      
      // verify the required parameter 'vestorlyAuth' is set
      if (vestorlyAuth == null) throw new ApiException(400, "Missing required parameter 'vestorlyAuth' when calling CreateMember");
      
      // verify the required parameter 'member' is set
      if (member == null) throw new ApiException(400, "Missing required parameter 'member' when calling CreateMember");
      

      // add default header, if any
      foreach(KeyValuePair<string, string> defaultHeader in ApiInvoker.GetDefaultHeader())
      {
        _request.AddHeader(defaultHeader.Key, defaultHeader.Value);
      }

      _request.AddUrlSegment("format", "json"); // set format to json by default
      
       if (vestorlyAuth != null && ("POST" == "GET" || "POST" == "DELETE" || "MembersApi" == "SessionsApi")) _request.AddParameter("vestorly_auth", ApiInvoker.ParameterToString(vestorlyAuth)); // query parameter
      
      
      
      _request.AddParameter("application/json", ApiInvoker.Serialize(member), ParameterType.RequestBody); // http body (model) parameter
      

      // make the HTTP request
      IRestResponse response = restClient.Execute(_request);
      if (((int)response.StatusCode) >= 400) {
        throw new ApiException ((int)response.StatusCode, "Error calling CreateMember: " + response.Content);
      }
      return (Memberresponse) ApiInvoker.Deserialize(response.Content, typeof(Memberresponse));
    }
    
    
    /// <summary>
    ///  Returns a single member
    /// </summary>
    /// <param name="id">Mongo ID of member to fetch</param>
    /// <param name="vestorlyAuth">Vestorly Auth Token</param>
    /// <returns>Memberresponse</returns>
    public Memberresponse FindMemberByID (string id, string vestorlyAuth) {

      String myPath = "/members/{id}";

       if ("vestorlyAuth" == "vestorlyAuth") {
        if (("GET" == "POST" || "GET" == "PUT") && "MembersApi" != "SessionsApi") {
          myPath += "?vestorly_auth=" + vestorlyAuth;
        }
      }
      
      var _request = new RestRequest(myPath, Method.GET);


      
      // verify the required parameter 'id' is set
      if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling FindMemberByID");
      
      // verify the required parameter 'vestorlyAuth' is set
      if (vestorlyAuth == null) throw new ApiException(400, "Missing required parameter 'vestorlyAuth' when calling FindMemberByID");
      

      // add default header, if any
      foreach(KeyValuePair<string, string> defaultHeader in ApiInvoker.GetDefaultHeader())
      {
        _request.AddHeader(defaultHeader.Key, defaultHeader.Value);
      }

      _request.AddUrlSegment("format", "json"); // set format to json by default
      _request.AddUrlSegment("id", ApiInvoker.ParameterToString(id)); // path (url segment) parameter
      
       if (vestorlyAuth != null && ("GET" == "GET" || "GET" == "DELETE" || "MembersApi" == "SessionsApi")) _request.AddParameter("vestorly_auth", ApiInvoker.ParameterToString(vestorlyAuth)); // query parameter
      
      
      
      

      // make the HTTP request
      IRestResponse response = restClient.Execute(_request);
      if (((int)response.StatusCode) >= 400) {
        throw new ApiException ((int)response.StatusCode, "Error calling FindMemberByID: " + response.Content);
      }
      return (Memberresponse) ApiInvoker.Deserialize(response.Content, typeof(Memberresponse));
    }
    
    
    /// <summary>
    ///  Updates a single member
    /// </summary>
    /// <param name="id">Mongo ID of member to fetch</param>
    /// <param name="vestorlyAuth">Vestorly Auth Token</param>
    /// <param name="member">Member you want to update</param>
    /// <returns>Memberresponse</returns>
    public Memberresponse UpdateMemberByID (string id, string vestorlyAuth, Member member) {

      String myPath = "/members/{id}";

       if ("vestorlyAuth" == "vestorlyAuth") {
        if (("PUT" == "POST" || "PUT" == "PUT") && "MembersApi" != "SessionsApi") {
          myPath += "?vestorly_auth=" + vestorlyAuth;
        }
      }
      
      var _request = new RestRequest(myPath, Method.PUT);


      
      // verify the required parameter 'id' is set
      if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling UpdateMemberByID");
      
      // verify the required parameter 'vestorlyAuth' is set
      if (vestorlyAuth == null) throw new ApiException(400, "Missing required parameter 'vestorlyAuth' when calling UpdateMemberByID");
      
      // verify the required parameter 'member' is set
      if (member == null) throw new ApiException(400, "Missing required parameter 'member' when calling UpdateMemberByID");
      

      // add default header, if any
      foreach(KeyValuePair<string, string> defaultHeader in ApiInvoker.GetDefaultHeader())
      {
        _request.AddHeader(defaultHeader.Key, defaultHeader.Value);
      }

      _request.AddUrlSegment("format", "json"); // set format to json by default
      _request.AddUrlSegment("id", ApiInvoker.ParameterToString(id)); // path (url segment) parameter
      
       if (vestorlyAuth != null && ("PUT" == "GET" || "PUT" == "DELETE" || "MembersApi" == "SessionsApi")) _request.AddParameter("vestorly_auth", ApiInvoker.ParameterToString(vestorlyAuth)); // query parameter
      
      
      
      _request.AddParameter("application/json", ApiInvoker.Serialize(member), ParameterType.RequestBody); // http body (model) parameter
      

      // make the HTTP request
      IRestResponse response = restClient.Execute(_request);
      if (((int)response.StatusCode) >= 400) {
        throw new ApiException ((int)response.StatusCode, "Error calling UpdateMemberByID: " + response.Content);
      }
      return (Memberresponse) ApiInvoker.Deserialize(response.Content, typeof(Memberresponse));
    }
    
  }
  
}
