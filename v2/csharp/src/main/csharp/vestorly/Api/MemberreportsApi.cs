using System;
using System.Collections.Generic;
using RestSharp;
using vestorly.client;
using vestorly.model;

namespace vestorly.api {
  
  public class MemberreportsApi {
    string basePath;
    protected RestClient restClient;

    public MemberreportsApi(String basePath = "https://staging.vestorly.com/api/v2")
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
    ///  Returns all member reports
    /// </summary>
    /// <param name="vestorlyAuth">Vestorly Auth Token</param>
    /// <returns>MemberReports</returns>
    public MemberReports FindMemberReports (string vestorlyAuth) {

      String myPath = "/member_reports";

       if ("vestorlyAuth" == "vestorlyAuth") {
        if (("GET" == "POST" || "GET" == "PUT") && "MemberreportsApi" != "SessionsApi") {
          myPath += "?vestorly_auth=" + vestorlyAuth;
        }
      }
      
      var _request = new RestRequest(myPath, Method.GET);


      
      // verify the required parameter 'vestorlyAuth' is set
      if (vestorlyAuth == null) throw new ApiException(400, "Missing required parameter 'vestorlyAuth' when calling FindMemberReports");
      

      // add default header, if any
      foreach(KeyValuePair<string, string> defaultHeader in ApiInvoker.GetDefaultHeader())
      {
        _request.AddHeader(defaultHeader.Key, defaultHeader.Value);
      }

      _request.AddUrlSegment("format", "json"); // set format to json by default
      
       if (vestorlyAuth != null && ("GET" == "GET" || "GET" == "DELETE" || "MemberreportsApi" == "SessionsApi")) _request.AddParameter("vestorly_auth", ApiInvoker.ParameterToString(vestorlyAuth)); // query parameter
      
      
      
      

      // make the HTTP request
      IRestResponse response = restClient.Execute(_request);
      if (((int)response.StatusCode) >= 400) {
        throw new ApiException ((int)response.StatusCode, "Error calling FindMemberReports: " + response.Content);
      }
      return (MemberReports) ApiInvoker.Deserialize(response.Content, typeof(MemberReports));
    }
    
  }
  
}
