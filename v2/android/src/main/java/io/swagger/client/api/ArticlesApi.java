package io.swagger.client.api;

import io.swagger.client.ApiException;
import io.swagger.client.ApiInvoker;

import io.swagger.client.model.*;

import java.util.*;

import io.swagger.client.model.Articles;
import io.swagger.client.model.Articleresponse;

import org.apache.http.HttpEntity;
import org.apache.http.entity.mime.MultipartEntityBuilder;

import java.util.Map;
import java.util.HashMap;
import java.io.File;

public class ArticlesApi {
  String basePath = "https://staging.vestorly.com/api/v2";
  ApiInvoker apiInvoker = ApiInvoker.getInstance();

  public void addHeader(String key, String value) {
    getInvoker().addDefaultHeader(key, value);
  }

  public ApiInvoker getInvoker() {
    return apiInvoker;
  }

  public void setBasePath(String basePath) {
    this.basePath = basePath;
  }

  public String getBasePath() {
    return basePath;
  }

  
  /**
   * 
   * Returns all articles
   * @param vestorlyAuth Vestorly Auth Token
   * @param limit Limit on the number of articles to return
   * @param textQuery Search query parameter
   * @param sortDirection Direction of sort (used with sort_by parameter)
   * @param sortBy Field on model to sort by
   * @return Articles
   */
  public Articles  findArticles (String vestorlyAuth, Integer limit, String textQuery, String sortDirection, String sortBy) throws ApiException {
    Object postBody = null;
    
    // verify the required parameter 'vestorlyAuth' is set
    if (vestorlyAuth == null) {
       throw new ApiException(400, "Missing the required parameter 'vestorlyAuth' when calling findArticles");
    }
    

    // create path and map variables
    String path = "/articles".replaceAll("\\{format\\}","json");

    // query params
    Map<String, String> queryParams = new HashMap<String, String>();
    // header params
    Map<String, String> headerParams = new HashMap<String, String>();
    // form params
    Map<String, String> formParams = new HashMap<String, String>();

    if (vestorlyAuth != null)
      queryParams.put("vestorly_auth", ApiInvoker.parameterToString(vestorlyAuth));
    if (limit != null)
      queryParams.put("limit", ApiInvoker.parameterToString(limit));
    if (textQuery != null)
      queryParams.put("text_query", ApiInvoker.parameterToString(textQuery));
    if (sortDirection != null)
      queryParams.put("sort_direction", ApiInvoker.parameterToString(sortDirection));
    if (sortBy != null)
      queryParams.put("sort_by", ApiInvoker.parameterToString(sortBy));
    

    

    String[] contentTypes = {
      
    };
    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";

    if (contentType.startsWith("multipart/form-data")) {
      // file uploading
      MultipartEntityBuilder builder = MultipartEntityBuilder.create();
      

      HttpEntity httpEntity = builder.build();
      postBody = httpEntity;
    } else {
      // normal form params
      
    }

    try {
      String response = apiInvoker.invokeAPI(basePath, path, "GET", queryParams, postBody, headerParams, formParams, contentType);
      if(response != null){
        return (Articles) ApiInvoker.deserialize(response, "", Articles.class);
      }
      else {
        return null;
      }
    } catch (ApiException ex) {
      throw ex;
    }
  }
  
  /**
   * 
   * Returns a single article
   * @param vestorlyAuth Vestorly Auth Token
   * @param id Article Id to fetch
   * @return Articleresponse
   */
  public Articleresponse  findArticleByID (String vestorlyAuth, String id) throws ApiException {
    Object postBody = null;
    
    // verify the required parameter 'vestorlyAuth' is set
    if (vestorlyAuth == null) {
       throw new ApiException(400, "Missing the required parameter 'vestorlyAuth' when calling findArticleByID");
    }
    
    // verify the required parameter 'id' is set
    if (id == null) {
       throw new ApiException(400, "Missing the required parameter 'id' when calling findArticleByID");
    }
    

    // create path and map variables
    String path = "/articles/{id}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "id" + "\\}", apiInvoker.escapeString(id.toString()));

    // query params
    Map<String, String> queryParams = new HashMap<String, String>();
    // header params
    Map<String, String> headerParams = new HashMap<String, String>();
    // form params
    Map<String, String> formParams = new HashMap<String, String>();

    if (vestorlyAuth != null)
      queryParams.put("vestorly_auth", ApiInvoker.parameterToString(vestorlyAuth));
    

    

    String[] contentTypes = {
      
    };
    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";

    if (contentType.startsWith("multipart/form-data")) {
      // file uploading
      MultipartEntityBuilder builder = MultipartEntityBuilder.create();
      

      HttpEntity httpEntity = builder.build();
      postBody = httpEntity;
    } else {
      // normal form params
      
    }

    try {
      String response = apiInvoker.invokeAPI(basePath, path, "GET", queryParams, postBody, headerParams, formParams, contentType);
      if(response != null){
        return (Articleresponse) ApiInvoker.deserialize(response, "", Articleresponse.class);
      }
      else {
        return null;
      }
    } catch (ApiException ex) {
      throw ex;
    }
  }
  
}
