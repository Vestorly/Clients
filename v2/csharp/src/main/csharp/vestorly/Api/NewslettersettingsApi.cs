using System;
using System.Collections.Generic;
using RestSharp;
using vestorly.client;
using vestorly.model;

namespace vestorly.api {
  
  public class NewslettersettingsApi {
    string basePath;
    protected RestClient restClient;

    public NewslettersettingsApi(String basePath = "https://staging.vestorly.com/api/v2")
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
    ///  Returns all newsletter settings
    /// </summary>
    /// <param name="vestorlyAuth">Vestorly Auth Token</param>
    /// <returns>NewsletterSettings</returns>
    public NewsletterSettings FindNewsletterSettings (string vestorlyAuth) {

      String myPath = "/newsletter_settings";

       if ("vestorlyAuth" == "vestorlyAuth") {
        if (("GET" == "POST" || "GET" == "PUT") && "NewslettersettingsApi" != "SessionsApi") {
          myPath += "?vestorly_auth=" + vestorlyAuth;
        }
      }
      
      var _request = new RestRequest(myPath, Method.GET);


      
      // verify the required parameter 'vestorlyAuth' is set
      if (vestorlyAuth == null) throw new ApiException(400, "Missing required parameter 'vestorlyAuth' when calling FindNewsletterSettings");
      

      // add default header, if any
      foreach(KeyValuePair<string, string> defaultHeader in ApiInvoker.GetDefaultHeader())
      {
        _request.AddHeader(defaultHeader.Key, defaultHeader.Value);
      }

      _request.AddUrlSegment("format", "json"); // set format to json by default
      
       if (vestorlyAuth != null && ("GET" == "GET" || "GET" == "DELETE" || "NewslettersettingsApi" == "SessionsApi")) _request.AddParameter("vestorly_auth", ApiInvoker.ParameterToString(vestorlyAuth)); // query parameter
      
      
      
      

      // make the HTTP request
      IRestResponse response = restClient.Execute(_request);
      if (((int)response.StatusCode) >= 400) {
        throw new ApiException ((int)response.StatusCode, "Error calling FindNewsletterSettings: " + response.Content);
      }
      return (NewsletterSettings) ApiInvoker.Deserialize(response.Content, typeof(NewsletterSettings));
    }
    
    
    /// <summary>
    ///  Returns a single newsletter settings if the user has access
    /// </summary>
    /// <param name="id">Mongo ID of newsletter settings to fetch</param>
    /// <param name="vestorlyAuth">Vestorly Auth Token</param>
    /// <returns>Newslettersettingresponse</returns>
    public Newslettersettingresponse FindNewsletterSettingsByID (string id, string vestorlyAuth) {

      String myPath = "/newsletter_settings/{id}";

       if ("vestorlyAuth" == "vestorlyAuth") {
        if (("GET" == "POST" || "GET" == "PUT") && "NewslettersettingsApi" != "SessionsApi") {
          myPath += "?vestorly_auth=" + vestorlyAuth;
        }
      }
      
      var _request = new RestRequest(myPath, Method.GET);


      
      // verify the required parameter 'id' is set
      if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling FindNewsletterSettingsByID");
      
      // verify the required parameter 'vestorlyAuth' is set
      if (vestorlyAuth == null) throw new ApiException(400, "Missing required parameter 'vestorlyAuth' when calling FindNewsletterSettingsByID");
      

      // add default header, if any
      foreach(KeyValuePair<string, string> defaultHeader in ApiInvoker.GetDefaultHeader())
      {
        _request.AddHeader(defaultHeader.Key, defaultHeader.Value);
      }

      _request.AddUrlSegment("format", "json"); // set format to json by default
      _request.AddUrlSegment("id", ApiInvoker.ParameterToString(id)); // path (url segment) parameter
      
       if (vestorlyAuth != null && ("GET" == "GET" || "GET" == "DELETE" || "NewslettersettingsApi" == "SessionsApi")) _request.AddParameter("vestorly_auth", ApiInvoker.ParameterToString(vestorlyAuth)); // query parameter
      
      
      
      

      // make the HTTP request
      IRestResponse response = restClient.Execute(_request);
      if (((int)response.StatusCode) >= 400) {
        throw new ApiException ((int)response.StatusCode, "Error calling FindNewsletterSettingsByID: " + response.Content);
      }
      return (Newslettersettingresponse) ApiInvoker.Deserialize(response.Content, typeof(Newslettersettingresponse));
    }
    
    
    /// <summary>
    ///  Update a single newsletter setting by ID
    /// </summary>
    /// <param name="id">Mongo ID of newsletter settings to update</param>
    /// <param name="vestorlyAuth">Vestorly Auth Token</param>
    /// <param name="newsletterSetting">newsletter settings</param>
    /// <returns>Newslettersettingresponse</returns>
    public Newslettersettingresponse UpdateNewsletterSettingsByID (string id, string vestorlyAuth, NewsletterSettingsInput newsletterSetting) {

      String myPath = "/newsletter_settings/{id}";

       if ("vestorlyAuth" == "vestorlyAuth") {
        if (("PUT" == "POST" || "PUT" == "PUT") && "NewslettersettingsApi" != "SessionsApi") {
          myPath += "?vestorly_auth=" + vestorlyAuth;
        }
      }
      
      var _request = new RestRequest(myPath, Method.PUT);


      
      // verify the required parameter 'id' is set
      if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling UpdateNewsletterSettingsByID");
      
      // verify the required parameter 'vestorlyAuth' is set
      if (vestorlyAuth == null) throw new ApiException(400, "Missing required parameter 'vestorlyAuth' when calling UpdateNewsletterSettingsByID");
      
      // verify the required parameter 'newsletterSetting' is set
      if (newsletterSetting == null) throw new ApiException(400, "Missing required parameter 'newsletterSetting' when calling UpdateNewsletterSettingsByID");
      

      // add default header, if any
      foreach(KeyValuePair<string, string> defaultHeader in ApiInvoker.GetDefaultHeader())
      {
        _request.AddHeader(defaultHeader.Key, defaultHeader.Value);
      }

      _request.AddUrlSegment("format", "json"); // set format to json by default
      _request.AddUrlSegment("id", ApiInvoker.ParameterToString(id)); // path (url segment) parameter
      
       if (vestorlyAuth != null && ("PUT" == "GET" || "PUT" == "DELETE" || "NewslettersettingsApi" == "SessionsApi")) _request.AddParameter("vestorly_auth", ApiInvoker.ParameterToString(vestorlyAuth)); // query parameter
      
      
      
      _request.AddParameter("application/json", ApiInvoker.Serialize(newsletterSetting), ParameterType.RequestBody); // http body (model) parameter
      

      // make the HTTP request
      IRestResponse response = restClient.Execute(_request);
      if (((int)response.StatusCode) >= 400) {
        throw new ApiException ((int)response.StatusCode, "Error calling UpdateNewsletterSettingsByID: " + response.Content);
      }
      return (Newslettersettingresponse) ApiInvoker.Deserialize(response.Content, typeof(Newslettersettingresponse));
    }
    
  }
  
}
