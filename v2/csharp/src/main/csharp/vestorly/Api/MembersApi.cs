using System;
using System.Collections.Generic;
using RestSharp;
using vestorly.client;
using vestorly.Model;

namespace vestorly.Api {
  
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
    /// <param name="VestorlyAuth">Vestorly Auth Token</param>
    /// <returns>Members</returns>
    public Members FindMembers (string VestorlyAuth) {

      var _request = new RestRequest("/members", Method.GET);

      
      // verify the required parameter 'VestorlyAuth' is set
      if (VestorlyAuth == null) throw new ApiException(400, "Missing required parameter 'VestorlyAuth' when calling FindMembers");
      

      // add default header, if any
      foreach(KeyValuePair<string, string> defaultHeader in ApiInvoker.GetDefaultHeader())
      {
        _request.AddHeader(defaultHeader.Key, defaultHeader.Value);
      }

      _request.AddUrlSegment("format", "json"); // set format to json by default
      
       if (VestorlyAuth != null) _request.AddParameter("vestorly_auth", ApiInvoker.ParameterToString(VestorlyAuth)); // query parameter
      
      
      
      

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
    /// <param name="VestorlyAuth">Vestorly Auth Token</param>
    /// <param name="Member">Member you want to create</param>
    /// <returns>Memberresponse</returns>
    public Memberresponse CreateMember (string VestorlyAuth, Member Member) {

      var _request = new RestRequest("/members", Method.POST);

      
      // verify the required parameter 'VestorlyAuth' is set
      if (VestorlyAuth == null) throw new ApiException(400, "Missing required parameter 'VestorlyAuth' when calling CreateMember");
      
      // verify the required parameter 'Member' is set
      if (Member == null) throw new ApiException(400, "Missing required parameter 'Member' when calling CreateMember");
      

      // add default header, if any
      foreach(KeyValuePair<string, string> defaultHeader in ApiInvoker.GetDefaultHeader())
      {
        _request.AddHeader(defaultHeader.Key, defaultHeader.Value);
      }

      _request.AddUrlSegment("format", "json"); // set format to json by default
      
       if (VestorlyAuth != null) _request.AddParameter("vestorly_auth", ApiInvoker.ParameterToString(VestorlyAuth)); // query parameter
      
      
      
      _request.AddParameter("application/json", ApiInvoker.Serialize(Member), ParameterType.RequestBody); // http body (model) parameter
      

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
    /// <param name="Id">Mongo ID of member to fetch</param>
    /// <param name="VestorlyAuth">Vestorly Auth Token</param>
    /// <returns>Memberresponse</returns>
    public Memberresponse FindMemberByID (string Id, string VestorlyAuth) {

      var _request = new RestRequest("/members/{id}", Method.GET);

      
      // verify the required parameter 'Id' is set
      if (Id == null) throw new ApiException(400, "Missing required parameter 'Id' when calling FindMemberByID");
      
      // verify the required parameter 'VestorlyAuth' is set
      if (VestorlyAuth == null) throw new ApiException(400, "Missing required parameter 'VestorlyAuth' when calling FindMemberByID");
      

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
        throw new ApiException ((int)response.StatusCode, "Error calling FindMemberByID: " + response.Content);
      }
      return (Memberresponse) ApiInvoker.Deserialize(response.Content, typeof(Memberresponse));
    }
    
    
    /// <summary>
    ///  Updates a single member
    /// </summary>
    /// <param name="Id">Mongo ID of member to fetch</param>
    /// <param name="VestorlyAuth">Vestorly Auth Token</param>
    /// <param name="Member">Member you want to update</param>
    /// <returns>Memberresponse</returns>
    public Memberresponse UpdateMemberByID (string Id, string VestorlyAuth, Member Member) {

      var _request = new RestRequest("/members/{id}", Method.PUT);

      
      // verify the required parameter 'Id' is set
      if (Id == null) throw new ApiException(400, "Missing required parameter 'Id' when calling UpdateMemberByID");
      
      // verify the required parameter 'VestorlyAuth' is set
      if (VestorlyAuth == null) throw new ApiException(400, "Missing required parameter 'VestorlyAuth' when calling UpdateMemberByID");
      
      // verify the required parameter 'Member' is set
      if (Member == null) throw new ApiException(400, "Missing required parameter 'Member' when calling UpdateMemberByID");
      

      // add default header, if any
      foreach(KeyValuePair<string, string> defaultHeader in ApiInvoker.GetDefaultHeader())
      {
        _request.AddHeader(defaultHeader.Key, defaultHeader.Value);
      }

      _request.AddUrlSegment("format", "json"); // set format to json by default
      _request.AddUrlSegment("id", ApiInvoker.ParameterToString(Id)); // path (url segment) parameter
      
       if (VestorlyAuth != null) _request.AddParameter("vestorly_auth", ApiInvoker.ParameterToString(VestorlyAuth)); // query parameter
      
      
      
      _request.AddParameter("application/json", ApiInvoker.Serialize(Member), ParameterType.RequestBody); // http body (model) parameter
      

      // make the HTTP request
      IRestResponse response = restClient.Execute(_request);
      if (((int)response.StatusCode) >= 400) {
        throw new ApiException ((int)response.StatusCode, "Error calling UpdateMemberByID: " + response.Content);
      }
      return (Memberresponse) ApiInvoker.Deserialize(response.Content, typeof(Memberresponse));
    }
    
  }
  
}
