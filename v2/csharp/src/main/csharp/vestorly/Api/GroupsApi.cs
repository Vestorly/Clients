using System;
using System.Collections.Generic;
using RestSharp;
using vestorly.client;
using vestorly.Model;

namespace vestorly.Api {
  
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
    /// <param name="VestorlyAuth">Vestorly Auth Token</param>
    /// <returns>Groups</returns>
    public Groups FindGroups (string VestorlyAuth) {

      var _request = new RestRequest("/groups", Method.GET);

      
      // verify the required parameter 'VestorlyAuth' is set
      if (VestorlyAuth == null) throw new ApiException(400, "Missing required parameter 'VestorlyAuth' when calling FindGroups");
      

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
        throw new ApiException ((int)response.StatusCode, "Error calling FindGroups: " + response.Content);
      }
      return (Groups) ApiInvoker.Deserialize(response.Content, typeof(Groups));
    }
    
    
    /// <summary>
    ///  Creates a new Group
    /// </summary>
    /// <param name="VestorlyAuth">Vestorly Auth Token</param>
    /// <param name="Group">Group to add</param>
    /// <returns>Groupresponse</returns>
    public Groupresponse CreateGroup (string VestorlyAuth, GroupInput Group) {

      var _request = new RestRequest("/groups", Method.POST);

      
      // verify the required parameter 'VestorlyAuth' is set
      if (VestorlyAuth == null) throw new ApiException(400, "Missing required parameter 'VestorlyAuth' when calling CreateGroup");
      
      // verify the required parameter 'Group' is set
      if (Group == null) throw new ApiException(400, "Missing required parameter 'Group' when calling CreateGroup");
      

      // add default header, if any
      foreach(KeyValuePair<string, string> defaultHeader in ApiInvoker.GetDefaultHeader())
      {
        _request.AddHeader(defaultHeader.Key, defaultHeader.Value);
      }

      _request.AddUrlSegment("format", "json"); // set format to json by default
      
       if (VestorlyAuth != null) _request.AddParameter("vestorly_auth", ApiInvoker.ParameterToString(VestorlyAuth)); // query parameter
      
      
      
      _request.AddParameter("application/json", ApiInvoker.Serialize(Group), ParameterType.RequestBody); // http body (model) parameter
      

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
    /// <param name="VestorlyAuth">Vestorly Auth Token</param>
    /// <param name="Id">Mongo ID of group to fetch</param>
    /// <returns>Groupresponse</returns>
    public Groupresponse FindGroupByID (string VestorlyAuth, string Id) {

      var _request = new RestRequest("/groups/{id}", Method.GET);

      
      // verify the required parameter 'VestorlyAuth' is set
      if (VestorlyAuth == null) throw new ApiException(400, "Missing required parameter 'VestorlyAuth' when calling FindGroupByID");
      
      // verify the required parameter 'Id' is set
      if (Id == null) throw new ApiException(400, "Missing required parameter 'Id' when calling FindGroupByID");
      

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
        throw new ApiException ((int)response.StatusCode, "Error calling FindGroupByID: " + response.Content);
      }
      return (Groupresponse) ApiInvoker.Deserialize(response.Content, typeof(Groupresponse));
    }
    
    
    /// <summary>
    ///  Updates a Group
    /// </summary>
    /// <param name="VestorlyAuth">Vestorly Auth Token</param>
    /// <param name="Id">id of group to update</param>
    /// <param name="Group">Group to update</param>
    /// <returns>Groupresponse</returns>
    public Groupresponse UpdateGroupById (string VestorlyAuth, string Id, GroupInput Group) {

      var _request = new RestRequest("/groups/{id}", Method.PUT);

      
      // verify the required parameter 'VestorlyAuth' is set
      if (VestorlyAuth == null) throw new ApiException(400, "Missing required parameter 'VestorlyAuth' when calling UpdateGroupById");
      
      // verify the required parameter 'Id' is set
      if (Id == null) throw new ApiException(400, "Missing required parameter 'Id' when calling UpdateGroupById");
      
      // verify the required parameter 'Group' is set
      if (Group == null) throw new ApiException(400, "Missing required parameter 'Group' when calling UpdateGroupById");
      

      // add default header, if any
      foreach(KeyValuePair<string, string> defaultHeader in ApiInvoker.GetDefaultHeader())
      {
        _request.AddHeader(defaultHeader.Key, defaultHeader.Value);
      }

      _request.AddUrlSegment("format", "json"); // set format to json by default
      _request.AddUrlSegment("id", ApiInvoker.ParameterToString(Id)); // path (url segment) parameter
      
       if (VestorlyAuth != null) _request.AddParameter("vestorly_auth", ApiInvoker.ParameterToString(VestorlyAuth)); // query parameter
      
      
      
      _request.AddParameter("application/json", ApiInvoker.Serialize(Group), ParameterType.RequestBody); // http body (model) parameter
      

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
    /// <param name="VestorlyAuth">Vestorly Auth Token</param>
    /// <param name="Id">id of group to delete</param>
    /// <returns>Groupresponse</returns>
    public Groupresponse DeleteGroup (string VestorlyAuth, string Id) {

      var _request = new RestRequest("/groups/{id}", Method.DELETE);

      
      // verify the required parameter 'VestorlyAuth' is set
      if (VestorlyAuth == null) throw new ApiException(400, "Missing required parameter 'VestorlyAuth' when calling DeleteGroup");
      
      // verify the required parameter 'Id' is set
      if (Id == null) throw new ApiException(400, "Missing required parameter 'Id' when calling DeleteGroup");
      

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
        throw new ApiException ((int)response.StatusCode, "Error calling DeleteGroup: " + response.Content);
      }
      return (Groupresponse) ApiInvoker.Deserialize(response.Content, typeof(Groupresponse));
    }
    
  }
  
}
