package com.wordnik.client.api;

import com.wordnik.client.ApiException;
import com.wordnik.client.ApiInvoker;

import com.wordnik.client.model.*;

import java.util.*;

import com.wordnik.client.model.Void;

import java.util.Map;
import java.util.HashMap;
import java.io.File;

public class AdvisorsApi {
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

  
  
  public Void  create (String vestorly-auth, String advisor) throws ApiException {
    Object postBody = null;

    

    // create path and map variables
    String path = "api/advisors.json".replaceAll("\\{format\\}","json");

    // query params
    Map<String, String> queryParams = new HashMap<String, String>();
    Map<String, String> headerParams = new HashMap<String, String>();

    if(!"null".equals(String.valueOf(vestorly-auth)))
      queryParams.put("vestorly-auth", String.valueOf(vestorly-auth));
    

    

    String contentType = "application/json";

    try {
      String response = apiInvoker.invokeAPI(basePath, path, "POST", queryParams, postBody, headerParams, contentType);
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
  
  
  public Void  show (String vestorly-auth, String id, String filter_by) throws ApiException {
    Object postBody = null;

    

    // create path and map variables
    String path = "api/advisors/{id}.json".replaceAll("\\{format\\}","json").replaceAll("\\{" + "id" + "\\}", apiInvoker.escapeString(id.toString()));

    // query params
    Map<String, String> queryParams = new HashMap<String, String>();
    Map<String, String> headerParams = new HashMap<String, String>();

    if(!"null".equals(String.valueOf(vestorly-auth)))
      queryParams.put("vestorly-auth", String.valueOf(vestorly-auth));
    if(!"null".equals(String.valueOf(filter_by)))
      queryParams.put("filter_by", String.valueOf(filter_by));
    

    

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
  
  
  public Void  update (String vestorly-auth, String id) throws ApiException {
    Object postBody = null;

    

    // create path and map variables
    String path = "api/advisors/{id}.json".replaceAll("\\{format\\}","json").replaceAll("\\{" + "id" + "\\}", apiInvoker.escapeString(id.toString()));

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
