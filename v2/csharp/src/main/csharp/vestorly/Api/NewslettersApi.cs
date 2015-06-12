using System;
using System.Collections.Generic;
using RestSharp;
using vestorly.client;
using vestorly.Model;

namespace vestorly.Api {
  
  public class NewslettersApi {
    string basePath;
    protected RestClient restClient;

    public NewslettersApi(String basePath = "https://staging.vestorly.com/api/v2")
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
    ///  Returns all newsletters
    /// </summary>
    /// <param name="VestorlyAuth">Vestorly Auth Token</param>
    /// <returns>Newsletters</returns>
    public Newsletters FindNewsletters (string VestorlyAuth) {

      var _request = new RestRequest("/newsletters", Method.GET);

      
      // verify the required parameter 'VestorlyAuth' is set
      if (VestorlyAuth == null) throw new ApiException(400, "Missing required parameter 'VestorlyAuth' when calling FindNewsletters");
      

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
        throw new ApiException ((int)response.StatusCode, "Error calling FindNewsletters: " + response.Content);
      }
      return (Newsletters) ApiInvoker.Deserialize(response.Content, typeof(Newsletters));
    }
    
    
    /// <summary>
    ///  Get a newsletter by ID
    /// </summary>
    /// <param name="VestorlyAuth">Vestorly Auth Token</param>
    /// <param name="Id">Mongo ID of event to get</param>
    /// <returns>Newsletterresponse</returns>
    public Newsletterresponse GetNewsletterByID (string VestorlyAuth, string Id) {

      var _request = new RestRequest("/newsletters/{id}", Method.GET);

      
      // verify the required parameter 'VestorlyAuth' is set
      if (VestorlyAuth == null) throw new ApiException(400, "Missing required parameter 'VestorlyAuth' when calling GetNewsletterByID");
      
      // verify the required parameter 'Id' is set
      if (Id == null) throw new ApiException(400, "Missing required parameter 'Id' when calling GetNewsletterByID");
      

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
        throw new ApiException ((int)response.StatusCode, "Error calling GetNewsletterByID: " + response.Content);
      }
      return (Newsletterresponse) ApiInvoker.Deserialize(response.Content, typeof(Newsletterresponse));
    }
    
    
    /// <summary>
    ///  Updates a newsletter
    /// </summary>
    /// <param name="VestorlyAuth">Vestorly Auth Token</param>
    /// <param name="Id">Mongo ID of event to update</param>
    /// <param name="Newsletter">Newsletter</param>
    /// <returns>Newsletterresponse</returns>
    public Newsletterresponse UpdateNewsletterByID (string VestorlyAuth, string Id, NewsletterInput Newsletter) {

      var _request = new RestRequest("/newsletters/{id}", Method.PUT);

      
      // verify the required parameter 'VestorlyAuth' is set
      if (VestorlyAuth == null) throw new ApiException(400, "Missing required parameter 'VestorlyAuth' when calling UpdateNewsletterByID");
      
      // verify the required parameter 'Id' is set
      if (Id == null) throw new ApiException(400, "Missing required parameter 'Id' when calling UpdateNewsletterByID");
      
      // verify the required parameter 'Newsletter' is set
      if (Newsletter == null) throw new ApiException(400, "Missing required parameter 'Newsletter' when calling UpdateNewsletterByID");
      

      // add default header, if any
      foreach(KeyValuePair<string, string> defaultHeader in ApiInvoker.GetDefaultHeader())
      {
        _request.AddHeader(defaultHeader.Key, defaultHeader.Value);
      }

      _request.AddUrlSegment("format", "json"); // set format to json by default
      _request.AddUrlSegment("id", ApiInvoker.ParameterToString(Id)); // path (url segment) parameter
      
       if (VestorlyAuth != null) _request.AddParameter("vestorly_auth", ApiInvoker.ParameterToString(VestorlyAuth)); // query parameter
      
      
      
      _request.AddParameter("application/json", ApiInvoker.Serialize(Newsletter), ParameterType.RequestBody); // http body (model) parameter
      

      // make the HTTP request
      IRestResponse response = restClient.Execute(_request);
      if (((int)response.StatusCode) >= 400) {
        throw new ApiException ((int)response.StatusCode, "Error calling UpdateNewsletterByID: " + response.Content);
      }
      return (Newsletterresponse) ApiInvoker.Deserialize(response.Content, typeof(Newsletterresponse));
    }
    
  }
  
}
