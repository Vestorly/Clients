using System;
using System.Collections.Generic;
using RestSharp;
using vestorly.client;
using vestorly.Model;

namespace vestorly.Api {
  
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
    /// <param name="VestorlyAuth">Vestorly Auth Token</param>
    /// <returns>NewsletterSettings</returns>
    public NewsletterSettings FindNewsletterSettings (string VestorlyAuth) {

      var _request = new RestRequest("/newsletter_settings", Method.GET);

      
      // verify the required parameter 'VestorlyAuth' is set
      if (VestorlyAuth == null) throw new ApiException(400, "Missing required parameter 'VestorlyAuth' when calling FindNewsletterSettings");
      

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
        throw new ApiException ((int)response.StatusCode, "Error calling FindNewsletterSettings: " + response.Content);
      }
      return (NewsletterSettings) ApiInvoker.Deserialize(response.Content, typeof(NewsletterSettings));
    }
    
    
    /// <summary>
    ///  Returns a single newsletter settings if the user has access
    /// </summary>
    /// <param name="Id">Mongo ID of newsletter settings to fetch</param>
    /// <param name="VestorlyAuth">Vestorly Auth Token</param>
    /// <returns>Newslettersettingresponse</returns>
    public Newslettersettingresponse FindNewsletterSettingsByID (string Id, string VestorlyAuth) {

      var _request = new RestRequest("/newsletter_settings/{id}", Method.GET);

      
      // verify the required parameter 'Id' is set
      if (Id == null) throw new ApiException(400, "Missing required parameter 'Id' when calling FindNewsletterSettingsByID");
      
      // verify the required parameter 'VestorlyAuth' is set
      if (VestorlyAuth == null) throw new ApiException(400, "Missing required parameter 'VestorlyAuth' when calling FindNewsletterSettingsByID");
      

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
        throw new ApiException ((int)response.StatusCode, "Error calling FindNewsletterSettingsByID: " + response.Content);
      }
      return (Newslettersettingresponse) ApiInvoker.Deserialize(response.Content, typeof(Newslettersettingresponse));
    }
    
    
    /// <summary>
    ///  Update a single newsletter setting by ID
    /// </summary>
    /// <param name="Id">Mongo ID of newsletter settings to update</param>
    /// <param name="VestorlyAuth">Vestorly Auth Token</param>
    /// <param name="NewsletterSetting">newsletter settings</param>
    /// <returns>Newslettersettingresponse</returns>
    public Newslettersettingresponse UpdateNewsletterSettingsByID (string Id, string VestorlyAuth, NewsletterSettingsInput NewsletterSetting) {

      var _request = new RestRequest("/newsletter_settings/{id}", Method.PUT);

      
      // verify the required parameter 'Id' is set
      if (Id == null) throw new ApiException(400, "Missing required parameter 'Id' when calling UpdateNewsletterSettingsByID");
      
      // verify the required parameter 'VestorlyAuth' is set
      if (VestorlyAuth == null) throw new ApiException(400, "Missing required parameter 'VestorlyAuth' when calling UpdateNewsletterSettingsByID");
      
      // verify the required parameter 'NewsletterSetting' is set
      if (NewsletterSetting == null) throw new ApiException(400, "Missing required parameter 'NewsletterSetting' when calling UpdateNewsletterSettingsByID");
      

      // add default header, if any
      foreach(KeyValuePair<string, string> defaultHeader in ApiInvoker.GetDefaultHeader())
      {
        _request.AddHeader(defaultHeader.Key, defaultHeader.Value);
      }

      _request.AddUrlSegment("format", "json"); // set format to json by default
      _request.AddUrlSegment("id", ApiInvoker.ParameterToString(Id)); // path (url segment) parameter
      
       if (VestorlyAuth != null) _request.AddParameter("vestorly_auth", ApiInvoker.ParameterToString(VestorlyAuth)); // query parameter
      
      
      
      _request.AddParameter("application/json", ApiInvoker.Serialize(NewsletterSetting), ParameterType.RequestBody); // http body (model) parameter
      

      // make the HTTP request
      IRestResponse response = restClient.Execute(_request);
      if (((int)response.StatusCode) >= 400) {
        throw new ApiException ((int)response.StatusCode, "Error calling UpdateNewsletterSettingsByID: " + response.Content);
      }
      return (Newslettersettingresponse) ApiInvoker.Deserialize(response.Content, typeof(Newslettersettingresponse));
    }
    
  }
  
}
