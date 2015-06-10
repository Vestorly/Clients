using System;
using System.Collections.Generic;
using RestSharp;
using vestorly.client;
using vestorly.Model;

namespace vestorly.Api {
  
  public class ArticlesApi {
    string basePath;
    protected RestClient restClient;

    public ArticlesApi(String basePath = "https://staging.vestorly.com/api/v2")
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
    ///  Returns all articles
    /// </summary>
    /// <param name="VestorlyAuth">Vestorly Auth Token</param>
    /// <param name="Limit">Limit on the number of articles to return</param>
    /// <param name="TextQuery">Search query parameter</param>
    /// <param name="SortDirection">Direction of sort (used with sort_by parameter)</param>
    /// <param name="SortBy">Field on model to sort by</param>
    /// <returns>Articles</returns>
    public Articles FindArticles (string VestorlyAuth, int? Limit, string TextQuery, string SortDirection, string SortBy) {

      var _request = new RestRequest("/articles", Method.GET);

      
      // verify the required parameter 'VestorlyAuth' is set
      if (VestorlyAuth == null) throw new ApiException(400, "Missing required parameter 'VestorlyAuth' when calling FindArticles");
      

      // add default header, if any
      foreach(KeyValuePair<string, string> defaultHeader in ApiInvoker.GetDefaultHeader())
      {
        _request.AddHeader(defaultHeader.Key, defaultHeader.Value);
      }

      _request.AddUrlSegment("format", "json"); // set format to json by default
      
       if (VestorlyAuth != null) _request.AddParameter("vestorly_auth", ApiInvoker.ParameterToString(VestorlyAuth)); // query parameter
       if (Limit != null) _request.AddParameter("limit", ApiInvoker.ParameterToString(Limit)); // query parameter
       if (TextQuery != null) _request.AddParameter("text_query", ApiInvoker.ParameterToString(TextQuery)); // query parameter
       if (SortDirection != null) _request.AddParameter("sort_direction", ApiInvoker.ParameterToString(SortDirection)); // query parameter
       if (SortBy != null) _request.AddParameter("sort_by", ApiInvoker.ParameterToString(SortBy)); // query parameter
      
      
      
      

      // make the HTTP request
      IRestResponse response = restClient.Execute(_request);
      if (((int)response.StatusCode) >= 400) {
        throw new ApiException ((int)response.StatusCode, "Error calling FindArticles: " + response.Content);
      }
      return (Articles) ApiInvoker.Deserialize(response.Content, typeof(Articles));
    }
    
    
    /// <summary>
    ///  Returns a single article
    /// </summary>
    /// <param name="VestorlyAuth">Vestorly Auth Token</param>
    /// <param name="Id">Article Id to fetch</param>
    /// <returns>Articleresponse</returns>
    public Articleresponse FindArticleByID (string VestorlyAuth, string Id) {

      var _request = new RestRequest("/articles/{id}", Method.GET);

      
      // verify the required parameter 'VestorlyAuth' is set
      if (VestorlyAuth == null) throw new ApiException(400, "Missing required parameter 'VestorlyAuth' when calling FindArticleByID");
      
      // verify the required parameter 'Id' is set
      if (Id == null) throw new ApiException(400, "Missing required parameter 'Id' when calling FindArticleByID");
      

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
        throw new ApiException ((int)response.StatusCode, "Error calling FindArticleByID: " + response.Content);
      }
      return (Articleresponse) ApiInvoker.Deserialize(response.Content, typeof(Articleresponse));
    }
    
  }
  
}
