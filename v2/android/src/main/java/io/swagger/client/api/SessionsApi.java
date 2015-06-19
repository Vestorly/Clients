package io.swagger.client.api;

import io.swagger.client.ApiException;
import io.swagger.client.ApiInvoker;

import io.swagger.client.model.*;

import java.util.*;

import io.swagger.client.model.Session;
import io.swagger.client.model.SessionLogoutResponse;

import org.apache.http.HttpEntity;
import org.apache.http.entity.mime.MultipartEntityBuilder;

import java.util.Map;
import java.util.HashMap;
import java.io.File;

public class SessionsApi {
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
   * Login To Vestorly Platform
   * @param username Username in the vestorly platform
   * @param password Password in Vestorly Platform
   * @return Session
   */
  public Session  login (String username, String password) throws ApiException {
    Object postBody = null;
    
    // verify the required parameter 'username' is set
    if (username == null) {
       throw new ApiException(400, "Missing the required parameter 'username' when calling login");
    }
    
    // verify the required parameter 'password' is set
    if (password == null) {
       throw new ApiException(400, "Missing the required parameter 'password' when calling login");
    }
    

    // create path and map variables
    String path = "/sessions".replaceAll("\\{format\\}","json");

    // query params
    Map<String, String> queryParams = new HashMap<String, String>();
    // header params
    Map<String, String> headerParams = new HashMap<String, String>();
    // form params
    Map<String, String> formParams = new HashMap<String, String>();

    if (username != null)
      queryParams.put("username", ApiInvoker.parameterToString(username));
    if (password != null)
      queryParams.put("password", ApiInvoker.parameterToString(password));
    

    

    String[] contentTypes = {
      "application/x-www-form-urlencoded"
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
      String response = apiInvoker.invokeAPI(basePath, path, "POST", queryParams, postBody, headerParams, formParams, contentType);
      if(response != null){
        return (Session) ApiInvoker.deserialize(response, "", Session.class);
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
   * Logout of the vestorly platform
   * @param vestorlyAuth Authenication token
   * @param id ID of pet to session
   * @return SessionLogoutResponse
   */
  public SessionLogoutResponse  logout (String vestorlyAuth, String id) throws ApiException {
    Object postBody = null;
    
    // verify the required parameter 'vestorlyAuth' is set
    if (vestorlyAuth == null) {
       throw new ApiException(400, "Missing the required parameter 'vestorlyAuth' when calling logout");
    }
    
    // verify the required parameter 'id' is set
    if (id == null) {
       throw new ApiException(400, "Missing the required parameter 'id' when calling logout");
    }
    

    // create path and map variables
    String path = "/sessions/{id}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "id" + "\\}", apiInvoker.escapeString(id.toString()));

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
      String response = apiInvoker.invokeAPI(basePath, path, "DELETE", queryParams, postBody, headerParams, formParams, contentType);
      if(response != null){
        return (SessionLogoutResponse) ApiInvoker.deserialize(response, "", SessionLogoutResponse.class);
      }
      else {
        return null;
      }
    } catch (ApiException ex) {
      throw ex;
    }
  }
  
}
