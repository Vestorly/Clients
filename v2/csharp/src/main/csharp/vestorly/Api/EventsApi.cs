using System;
using System.Collections.Generic;
using RestSharp;
using vestorly.client;
using vestorly.Model;

namespace vestorly.Api {
  
  public class EventsApi {
    string basePath;
    protected RestClient restClient;

    public EventsApi(String basePath = "https://staging.vestorly.com/api/v2")
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
    ///  Returns all events
    /// </summary>
    /// <param name="VestorlyAuth">Vestorly Auth Token</param>
    /// <returns>Events</returns>
    public Events FindEvents (string VestorlyAuth) {

      var _request = new RestRequest("/events", Method.GET);

      
      // verify the required parameter 'VestorlyAuth' is set
      if (VestorlyAuth == null) throw new ApiException(400, "Missing required parameter 'VestorlyAuth' when calling FindEvents");
      

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
        throw new ApiException ((int)response.StatusCode, "Error calling FindEvents: " + response.Content);
      }
      return (Events) ApiInvoker.Deserialize(response.Content, typeof(Events));
    }
    
    
    /// <summary>
    ///  Creates a new event in the system
    /// </summary>
    /// <param name="VestorlyAuth">Vestorly Auth Token</param>
    /// <param name="Event">Event</param>
    /// <returns>Eventcreateresponse</returns>
    public Eventcreateresponse CreateEvent (string VestorlyAuth, EventInput Event) {

      var _request = new RestRequest("/events", Method.POST);

      
      // verify the required parameter 'VestorlyAuth' is set
      if (VestorlyAuth == null) throw new ApiException(400, "Missing required parameter 'VestorlyAuth' when calling CreateEvent");
      
      // verify the required parameter 'Event' is set
      if (Event == null) throw new ApiException(400, "Missing required parameter 'Event' when calling CreateEvent");
      

      // add default header, if any
      foreach(KeyValuePair<string, string> defaultHeader in ApiInvoker.GetDefaultHeader())
      {
        _request.AddHeader(defaultHeader.Key, defaultHeader.Value);
      }

      _request.AddUrlSegment("format", "json"); // set format to json by default
      
       if (VestorlyAuth != null) _request.AddParameter("vestorly_auth", ApiInvoker.ParameterToString(VestorlyAuth)); // query parameter
      
      
      
      _request.AddParameter("application/json", ApiInvoker.Serialize(Event), ParameterType.RequestBody); // http body (model) parameter
      

      // make the HTTP request
      IRestResponse response = restClient.Execute(_request);
      if (((int)response.StatusCode) >= 400) {
        throw new ApiException ((int)response.StatusCode, "Error calling CreateEvent: " + response.Content);
      }
      return (Eventcreateresponse) ApiInvoker.Deserialize(response.Content, typeof(Eventcreateresponse));
    }
    
    
    /// <summary>
    ///  Returns a single event if the user has access
    /// </summary>
    /// <param name="Id">Mongo ID of event to fetch</param>
    /// <param name="VestorlyAuth">Vestorly Auth Token</param>
    /// <returns>Eventresponse</returns>
    public Eventresponse FindEventByID (string Id, string VestorlyAuth) {

      var _request = new RestRequest("/events/{id}", Method.GET);

      
      // verify the required parameter 'Id' is set
      if (Id == null) throw new ApiException(400, "Missing required parameter 'Id' when calling FindEventByID");
      
      // verify the required parameter 'VestorlyAuth' is set
      if (VestorlyAuth == null) throw new ApiException(400, "Missing required parameter 'VestorlyAuth' when calling FindEventByID");
      

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
        throw new ApiException ((int)response.StatusCode, "Error calling FindEventByID: " + response.Content);
      }
      return (Eventresponse) ApiInvoker.Deserialize(response.Content, typeof(Eventresponse));
    }
    
  }
  
}
