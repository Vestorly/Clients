package io.swagger.client.api;

import io.swagger.client.ApiException;
import io.swagger.client.ApiInvoker;

import io.swagger.client.model.*;

import java.util.*;


import java.util.Map;
import java.util.HashMap;
import java.io.File;

public class MembersApi {
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

  
  
  public Void  index (String vestorly-auth, String advisor_id, String search, String sorted_by, String sorted_order) throws ApiException {
    Object postBody = null;

    

    // create path and map variables
    String path = "api/advisors/{advisor_id}/members.json".replaceAll("\\{format\\}","json").replaceAll("\\{" + "advisor_id" + "\\}", apiInvoker.escapeString(advisor_id.toString()));

    // query params
    Map<String, String> queryParams = new HashMap<String, String>();
    Map<String, String> headerParams = new HashMap<String, String>();

    if(!"null".equals(String.valueOf(vestorly-auth)))
      queryParams.put("vestorly-auth", String.valueOf(vestorly-auth));
    if(!"null".equals(String.valueOf(search)))
      queryParams.put("search", String.valueOf(search));
    if(!"null".equals(String.valueOf(sorted_by)))
      queryParams.put("sorted_by", String.valueOf(sorted_by));
    if(!"null".equals(String.valueOf(sorted_order)))
      queryParams.put("sorted_order", String.valueOf(sorted_order));
    

    

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
  
  
  public Void  create (String vestorly-auth, String advisor_id, String member) throws ApiException {
    Object postBody = null;

    

    // create path and map variables
    String path = "api/advisors/{advisor_id}/members.json".replaceAll("\\{format\\}","json").replaceAll("\\{" + "advisor_id" + "\\}", apiInvoker.escapeString(advisor_id.toString()));

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
  
  
  public Void  show (String vestorly-auth, String advisor_id, String id) throws ApiException {
    Object postBody = null;

    

    // create path and map variables
    String path = "api/advisors/{advisor_id}/members/{id}.json".replaceAll("\\{format\\}","json").replaceAll("\\{" + "advisor_id" + "\\}", apiInvoker.escapeString(advisor_id.toString())).replaceAll("\\{" + "id" + "\\}", apiInvoker.escapeString(id.toString()));

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
  
  
  public Void  update (String vestorly-auth, String advisor_id, String id, String member) throws ApiException {
    Object postBody = null;

    

    // create path and map variables
    String path = "api/advisors/{advisor_id}/members/{id}.json".replaceAll("\\{format\\}","json").replaceAll("\\{" + "advisor_id" + "\\}", apiInvoker.escapeString(advisor_id.toString())).replaceAll("\\{" + "id" + "\\}", apiInvoker.escapeString(id.toString()));

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
  
  
  public Void  destroy (String vestorly-auth, String advisor_id, String id) throws ApiException {
    Object postBody = null;

    

    // create path and map variables
    String path = "api/advisors/{advisor_id}/members/{id}.json".replaceAll("\\{format\\}","json").replaceAll("\\{" + "advisor_id" + "\\}", apiInvoker.escapeString(advisor_id.toString())).replaceAll("\\{" + "id" + "\\}", apiInvoker.escapeString(id.toString()));

    // query params
    Map<String, String> queryParams = new HashMap<String, String>();
    Map<String, String> headerParams = new HashMap<String, String>();

    if(!"null".equals(String.valueOf(vestorly-auth)))
      queryParams.put("vestorly-auth", String.valueOf(vestorly-auth));
    

    

    String contentType = "application/json";

    try {
      String response = apiInvoker.invokeAPI(basePath, path, "DELETE", queryParams, postBody, headerParams, contentType);
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
