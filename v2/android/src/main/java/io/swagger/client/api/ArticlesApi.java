package io.swagger.client.api;

import io.swagger.client.ApiException;
import io.swagger.client.ApiInvoker;

import io.swagger.client.model.*;

import java.util.*;


import java.util.Map;
import java.util.HashMap;
import java.io.File;

public class ArticlesApi {
  String basePath = "http://developers.vestorly.com/";
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

  
  
  public Void  index (String vestorly-auth, String is_published, String external_url_source, String ids) throws ApiException {
    Object postBody = null;

    

    // create path and map variables
    String path = "api/articles.json".replaceAll("\\{format\\}","json");

    // query params
    Map<String, String> queryParams = new HashMap<String, String>();
    Map<String, String> headerParams = new HashMap<String, String>();

    if(!"null".equals(String.valueOf(vestorly-auth)))
      queryParams.put("vestorly-auth", String.valueOf(vestorly-auth));
    if(!"null".equals(String.valueOf(is_published)))
      queryParams.put("is_published", String.valueOf(is_published));
    if(!"null".equals(String.valueOf(external_url_source)))
      queryParams.put("external_url_source", String.valueOf(external_url_source));
    if(!"null".equals(String.valueOf(ids)))
      queryParams.put("ids", String.valueOf(ids));
    

    

    String contentType = "application/json";

    try {
      String response = apiInvoker.invokeAPI(basePath, path, "GET", queryParams, postBody, headerParams, contentType);
      if(response != null){
        return (Void) ApiInvoker.deserialize(response, "", Void.class);
      }
      else {
        return null;
      }
    } catch (ApiException ex) {
      if(ex.getCode() == 404) {
        return  null;
      }
      else {
        throw ex;
      }
    }
  }
  
  
  public Void  show (String vestorly-auth, String id) throws ApiException {
    Object postBody = null;

    

    // create path and map variables
    String path = "api/articles/{id}.json".replaceAll("\\{format\\}","json").replaceAll("\\{" + "id" + "\\}", apiInvoker.escapeString(id.toString()));

    // query params
    Map<String, String> queryParams = new HashMap<String, String>();
    Map<String, String> headerParams = new HashMap<String, String>();

    if(!"null".equals(String.valueOf(vestorly-auth)))
      queryParams.put("vestorly-auth", String.valueOf(vestorly-auth));
    

    

    String contentType = "application/json";

    try {
      String response = apiInvoker.invokeAPI(basePath, path, "GET", queryParams, postBody, headerParams, contentType);
      if(response != null){
        return (Void) ApiInvoker.deserialize(response, "", Void.class);
      }
      else {
        return null;
      }
    } catch (ApiException ex) {
      if(ex.getCode() == 404) {
        return  null;
      }
      else {
        throw ex;
      }
    }
  }
  
  
  public Void  update (String vestorly-auth, String article) throws ApiException {
    Object postBody = null;

    

    // create path and map variables
    String path = "api/articles/{id}.json".replaceAll("\\{format\\}","json");

    // query params
    Map<String, String> queryParams = new HashMap<String, String>();
    Map<String, String> headerParams = new HashMap<String, String>();

    if(!"null".equals(String.valueOf(vestorly-auth)))
      queryParams.put("vestorly-auth", String.valueOf(vestorly-auth));
    

    

    String contentType = "application/json";

    try {
      String response = apiInvoker.invokeAPI(basePath, path, "PUT", queryParams, postBody, headerParams, contentType);
      if(response != null){
        return (Void) ApiInvoker.deserialize(response, "", Void.class);
      }
      else {
        return null;
      }
    } catch (ApiException ex) {
      if(ex.getCode() == 404) {
        return  null;
      }
      else {
        throw ex;
      }
    }
  }
  
}
