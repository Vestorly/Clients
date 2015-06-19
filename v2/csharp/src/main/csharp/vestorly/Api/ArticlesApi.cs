using System;
using System.Collections.Generic;
using RestSharp;
using vestorly.client;
using vestorly.model;

namespace vestorly.api {
  
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
    /// <param name="vestorlyAuth">Vestorly Auth Token</param>
    /// <param name="limit">Limit on the number of articles to return</param>
    /// <param name="textQuery">Search query parameter</param>
    /// <param name="sortDirection">Direction of sort (used with sort_by parameter)</param>
    /// <param name="sortBy">Field on model to sort by</param>
    /// <returns>Articles</returns>
    public Articles FindArticles (string vestorlyAuth, int? limit, string textQuery, string sortDirection, string sortBy) {

      String myPath = "/articles";

       if ("vestorlyAuth" == "vestorlyAuth") {
        if (("GET" == "POST" || "GET" == "PUT") && "ArticlesApi" != "SessionsApi") {
          myPath += "?vestorly_auth=" + vestorlyAuth;
        }
      } if ("limit" == "vestorlyAuth") {
        if (("GET" == "POST" || "GET" == "PUT") && "ArticlesApi" != "SessionsApi") {
          myPath += "?vestorly_auth=" + limit;
        }
      } if ("textQuery" == "vestorlyAuth") {
        if (("GET" == "POST" || "GET" == "PUT") && "ArticlesApi" != "SessionsApi") {
          myPath += "?vestorly_auth=" + textQuery;
        }
      } if ("sortDirection" == "vestorlyAuth") {
        if (("GET" == "POST" || "GET" == "PUT") && "ArticlesApi" != "SessionsApi") {
          myPath += "?vestorly_auth=" + sortDirection;
        }
      } if ("sortBy" == "vestorlyAuth") {
        if (("GET" == "POST" || "GET" == "PUT") && "ArticlesApi" != "SessionsApi") {
          myPath += "?vestorly_auth=" + sortBy;
        }
      }
      
      var _request = new RestRequest(myPath, Method.GET);


      
      // verify the required parameter 'vestorlyAuth' is set
      if (vestorlyAuth == null) throw new ApiException(400, "Missing required parameter 'vestorlyAuth' when calling FindArticles");
      

      // add default header, if any
      foreach(KeyValuePair<string, string> defaultHeader in ApiInvoker.GetDefaultHeader())
      {
        _request.AddHeader(defaultHeader.Key, defaultHeader.Value);
      }

      _request.AddUrlSegment("format", "json"); // set format to json by default
      
       if (vestorlyAuth != null && ("GET" == "GET" || "GET" == "DELETE" || "ArticlesApi" == "SessionsApi")) _request.AddParameter("vestorly_auth", ApiInvoker.ParameterToString(vestorlyAuth)); // query parameter
       if (limit != null && ("GET" == "GET" || "GET" == "DELETE" || "ArticlesApi" == "SessionsApi")) _request.AddParameter("limit", ApiInvoker.ParameterToString(limit)); // query parameter
       if (textQuery != null && ("GET" == "GET" || "GET" == "DELETE" || "ArticlesApi" == "SessionsApi")) _request.AddParameter("text_query", ApiInvoker.ParameterToString(textQuery)); // query parameter
       if (sortDirection != null && ("GET" == "GET" || "GET" == "DELETE" || "ArticlesApi" == "SessionsApi")) _request.AddParameter("sort_direction", ApiInvoker.ParameterToString(sortDirection)); // query parameter
       if (sortBy != null && ("GET" == "GET" || "GET" == "DELETE" || "ArticlesApi" == "SessionsApi")) _request.AddParameter("sort_by", ApiInvoker.ParameterToString(sortBy)); // query parameter
      
      
      
      

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
    /// <param name="vestorlyAuth">Vestorly Auth Token</param>
    /// <param name="id">Article Id to fetch</param>
    /// <returns>Articleresponse</returns>
    public Articleresponse FindArticleByID (string vestorlyAuth, string id) {

      String myPath = "/articles/{id}";

       if ("vestorlyAuth" == "vestorlyAuth") {
        if (("GET" == "POST" || "GET" == "PUT") && "ArticlesApi" != "SessionsApi") {
          myPath += "?vestorly_auth=" + vestorlyAuth;
        }
      }
      
      var _request = new RestRequest(myPath, Method.GET);


      
      // verify the required parameter 'vestorlyAuth' is set
      if (vestorlyAuth == null) throw new ApiException(400, "Missing required parameter 'vestorlyAuth' when calling FindArticleByID");
      
      // verify the required parameter 'id' is set
      if (id == null) throw new ApiException(400, "Missing required parameter 'id' when calling FindArticleByID");
      

      // add default header, if any
      foreach(KeyValuePair<string, string> defaultHeader in ApiInvoker.GetDefaultHeader())
      {
        _request.AddHeader(defaultHeader.Key, defaultHeader.Value);
      }

      _request.AddUrlSegment("format", "json"); // set format to json by default
      _request.AddUrlSegment("id", ApiInvoker.ParameterToString(id)); // path (url segment) parameter
      
       if (vestorlyAuth != null && ("GET" == "GET" || "GET" == "DELETE" || "ArticlesApi" == "SessionsApi")) _request.AddParameter("vestorly_auth", ApiInvoker.ParameterToString(vestorlyAuth)); // query parameter
      
      
      
      

      // make the HTTP request
      IRestResponse response = restClient.Execute(_request);
      if (((int)response.StatusCode) >= 400) {
        throw new ApiException ((int)response.StatusCode, "Error calling FindArticleByID: " + response.Content);
      }
      return (Articleresponse) ApiInvoker.Deserialize(response.Content, typeof(Articleresponse));
    }
    
  }
  
}
