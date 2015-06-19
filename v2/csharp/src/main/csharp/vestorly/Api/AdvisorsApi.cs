using System;
using System.Collections.Generic;
using RestSharp;
using vestorly.client;
using vestorly.model;

namespace vestorly.api {
  
  public class AdvisorsApi {
    string basePath;
    protected RestClient restClient;

    public AdvisorsApi(String basePath = "https://staging.vestorly.com/api/v2")
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
    ///  Returns a single advisor given their ID
    /// </summary>
    /// <param name="vestorlyAuth">Vestorly Auth Token</param>
    /// <param name="id">Advisor Id to fetch</param>
    /// <returns>Advisor</returns>
    public Advisor FindAdvisorByID (string vestorlyAuth, string id) {

      String myPath = "/advisors/{id}";

       if ("vestorlyAuth" == "vestorlyAuth") {
        if (("GET" == "POST" || "GET" == "PUT") && "AdvisorsApi" != "SessionsApi") {
          myPath += "?vestorly_auth=" + vestorlyAuth;
        }
      }
      
      var _request = new RestRequest(myPath, Method.GET);


      
      // verify the required parameter 'vestorlyAuth' is set
      if (vestorlyAuth == null) throw new ApiException(400, "Missing required parameter 'vestorlyAuth' when calling FindAdvisorByID");
      
      // verify the required parameter 'id' is set
      if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling FindAdvisorByID");
      

      // add default header, if any
      foreach(KeyValuePair<string, string> defaultHeader in ApiInvoker.GetDefaultHeader())
      {
        _request.AddHeader(defaultHeader.Key, defaultHeader.Value);
      }

      _request.AddUrlSegment("format", "json"); // set format to json by default
      _request.AddUrlSegment("id", ApiInvoker.ParameterToString(id)); // path (url segment) parameter
      
       if (vestorlyAuth != null && ("GET" == "GET" || "GET" == "DELETE" || "AdvisorsApi" == "SessionsApi")) _request.AddParameter("vestorly_auth", ApiInvoker.ParameterToString(vestorlyAuth)); // query parameter
      
      
      
      

      // make the HTTP request
      IRestResponse response = restClient.Execute(_request);
      if (((int)response.StatusCode) >= 400) {
        throw new ApiException ((int)response.StatusCode, "Error calling FindAdvisorByID: " + response.Content);
      }
      return (Advisor) ApiInvoker.Deserialize(response.Content, typeof(Advisor));
    }
    
  }
  
}
