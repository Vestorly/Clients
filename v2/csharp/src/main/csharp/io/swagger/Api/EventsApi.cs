using System;
using System.Collections.Generic;
using io.swagger.client;
using io.swagger.Model;

namespace io.swagger.Api {
  
  public class EventsApi {
    string basePath;
    private readonly ApiInvoker apiInvoker = ApiInvoker.GetInstance();

    public EventsApi(String basePath = "https://staging.vestorly.com/api/v2")
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
    ///  Returns all events
    /// </summary>
    /// <param name="VestorlyAuth">Vestorly Auth Token</param>
    
    /// <returns></returns>
    public Events  findEvents (string VestorlyAuth) {
      // create path and map variables
      var path = "/events".Replace("{format}","json");

      // query params
      var queryParams = new Dictionary<String, String>();
      var headerParams = new Dictionary<String, String>();
      var formParams = new Dictionary<String, object>();

      

      if (VestorlyAuth != null){
        queryParams.Add("vestorly_auth", apiInvoker.ParameterToString(VestorlyAuth));
      }
      

      

      

      try {
        if (typeof(Events) == typeof(byte[])) {
          
          var response = apiInvoker.invokeBinaryAPI(basePath, path, "GET", queryParams, null, headerParams, formParams);
          return ((object)response) as Events;
          
          
        } else {
          
          var response = apiInvoker.invokeAPI(basePath, path, "GET", queryParams, null, headerParams, formParams);
          if (response != null){
             return (Events) ApiInvoker.deserialize(response, typeof(Events));
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
    ///  Returns a single event if the user has access
    /// </summary>
    /// <param name="Id">Mongo ID of event to fetch</param>
     /// <param name="VestorlyAuth">Vestorly Auth Token</param>
    
    /// <returns></returns>
    public Event  findEventByID (string Id, string VestorlyAuth) {
      // create path and map variables
      var path = "/events/{id}".Replace("{format}","json").Replace("{" + "id" + "}", apiInvoker.ParameterToString(Id));

      // query params
      var queryParams = new Dictionary<String, String>();
      var headerParams = new Dictionary<String, String>();
      var formParams = new Dictionary<String, object>();

      

      if (VestorlyAuth != null){
        queryParams.Add("vestorly_auth", apiInvoker.ParameterToString(VestorlyAuth));
      }
      

      

      

      try {
        if (typeof(Event) == typeof(byte[])) {
          
          var response = apiInvoker.invokeBinaryAPI(basePath, path, "GET", queryParams, null, headerParams, formParams);
          return ((object)response) as Event;
          
          
        } else {
          
          var response = apiInvoker.invokeAPI(basePath, path, "GET", queryParams, null, headerParams, formParams);
          if (response != null){
             return (Event) ApiInvoker.deserialize(response, typeof(Event));
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
    ///  Updates a single event by mongo id
    /// </summary>
    /// <param name="Id">Mongo ID of event to update</param>
     /// <param name="VestorlyAuth">Vestorly Auth Token</param>
     /// <param name="Event">Event</param>
    
    /// <returns></returns>
    public Event  updateEventByID (string Id, string VestorlyAuth, string Event) {
      // create path and map variables
      var path = "/events/{id}".Replace("{format}","json").Replace("{" + "id" + "}", apiInvoker.ParameterToString(Id));

      // query params
      var queryParams = new Dictionary<String, String>();
      var headerParams = new Dictionary<String, String>();
      var formParams = new Dictionary<String, object>();

      

      if (VestorlyAuth != null){
        queryParams.Add("vestorly_auth", apiInvoker.ParameterToString(VestorlyAuth));
      }
      

      

      if (Event != null){
        if(Event is byte[]) {
          formParams.Add("Event", Event);
        } else {
          formParams.Add("Event", apiInvoker.ParameterToString(Event));
        }
      }
      

      try {
        if (typeof(Event) == typeof(byte[])) {
          
          var response = apiInvoker.invokeBinaryAPI(basePath, path, "GET", queryParams, null, headerParams, formParams);
          return ((object)response) as Event;
          
          
        } else {
          
          var response = apiInvoker.invokeAPI(basePath, path, "PUT", queryParams, null, headerParams, formParams);
          if (response != null){
             return (Event) ApiInvoker.deserialize(response, typeof(Event));
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
