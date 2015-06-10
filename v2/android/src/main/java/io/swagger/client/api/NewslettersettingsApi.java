package io.swagger.client.api;

import io.swagger.client.ApiException;
import io.swagger.client.ApiInvoker;

import io.swagger.client.model.*;

import java.util.*;

import io.swagger.client.model.NewsletterSettings;
import io.swagger.client.model.Newslettersettingresponse;
import io.swagger.client.model.NewsletterSettingsInput;

import org.apache.http.HttpEntity;
import org.apache.http.entity.mime.MultipartEntityBuilder;

import java.util.Map;
import java.util.HashMap;
import java.io.File;

public class NewslettersettingsApi {
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
   * Returns all newsletter settings
   * @param vestorlyAuth Vestorly Auth Token
   * @return NewsletterSettings
   */
  public NewsletterSettings  findNewsletterSettings (String vestorlyAuth) throws ApiException {
    Object postBody = null;
    
    // verify the required parameter 'vestorlyAuth' is set
    if (vestorlyAuth == null) {
       throw new ApiException(400, "Missing the required parameter 'vestorlyAuth' when calling findNewsletterSettings");
    }
    

    // create path and map variables
    String path = "/newsletter_settings".replaceAll("\\{format\\}","json");

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
        return (NewsletterSettings) ApiInvoker.deserialize(response, "", NewsletterSettings.class);
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
   * Returns a single newsletter settings if the user has access
   * @param id Mongo ID of newsletter settings to fetch
   * @param vestorlyAuth Vestorly Auth Token
   * @return Newslettersettingresponse
   */
  public Newslettersettingresponse  findNewsletterSettingsByID (String id, String vestorlyAuth) throws ApiException {
    Object postBody = null;
    
    // verify the required parameter 'id' is set
    if (id == null) {
       throw new ApiException(400, "Missing the required parameter 'id' when calling findNewsletterSettingsByID");
    }
    
    // verify the required parameter 'vestorlyAuth' is set
    if (vestorlyAuth == null) {
       throw new ApiException(400, "Missing the required parameter 'vestorlyAuth' when calling findNewsletterSettingsByID");
    }
    

    // create path and map variables
    String path = "/newsletter_settings/{id}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "id" + "\\}", apiInvoker.escapeString(id.toString()));

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
        return (Newslettersettingresponse) ApiInvoker.deserialize(response, "", Newslettersettingresponse.class);
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
   * Update a single newsletter setting by ID
   * @param id Mongo ID of newsletter settings to update
   * @param vestorlyAuth Vestorly Auth Token
   * @param newsletterSetting newsletter settings
   * @return Newslettersettingresponse
   */
  public Newslettersettingresponse  updateNewsletterSettingsByID (String id, String vestorlyAuth, NewsletterSettingsInput newsletterSetting) throws ApiException {
    Object postBody = newsletterSetting;
    
    // verify the required parameter 'id' is set
    if (id == null) {
       throw new ApiException(400, "Missing the required parameter 'id' when calling updateNewsletterSettingsByID");
    }
    
    // verify the required parameter 'vestorlyAuth' is set
    if (vestorlyAuth == null) {
       throw new ApiException(400, "Missing the required parameter 'vestorlyAuth' when calling updateNewsletterSettingsByID");
    }
    
    // verify the required parameter 'newsletterSetting' is set
    if (newsletterSetting == null) {
       throw new ApiException(400, "Missing the required parameter 'newsletterSetting' when calling updateNewsletterSettingsByID");
    }
    

    // create path and map variables
    String path = "/newsletter_settings/{id}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "id" + "\\}", apiInvoker.escapeString(id.toString()));

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
      String response = apiInvoker.invokeAPI(basePath, path, "PUT", queryParams, postBody, headerParams, formParams, contentType);
      if(response != null){
        return (Newslettersettingresponse) ApiInvoker.deserialize(response, "", Newslettersettingresponse.class);
      }
      else {
        return null;
      }
    } catch (ApiException ex) {
      throw ex;
    }
  }
  
}
