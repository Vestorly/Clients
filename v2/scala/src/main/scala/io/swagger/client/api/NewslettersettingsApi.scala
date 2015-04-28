package io.swagger.client.api

import io.swagger.client.model.Newslettersettings
import io.swagger.client.model.Newslettersettingresponse
import io.swagger.client.model.NewsletterSettingsInput
import io.swagger.client.ApiInvoker
import io.swagger.client.ApiException

import java.io.File
import java.util.Date

import scala.collection.mutable.HashMap

class NewslettersettingsApi(val defBasePath: String = "https://staging.vestorly.com/api/v2",
                        defApiInvoker: ApiInvoker = ApiInvoker) {
  var basePath = defBasePath
  var apiInvoker = defApiInvoker

  def addHeader(key: String, value: String) = apiInvoker.defaultHeaders += key -> value 

  
  def findNewsletterSettings (vestorly-auth: String) : Option[Newslettersettings] = {
    // create path and map variables
    val path = "/newsletter_settings".replaceAll("\\{format\\}","json")

    
    val contentType = {
      
      "application/json"
    }

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]

    

    if(String.valueOf(vestorly-auth) != "null") queryParams += "vestorly-auth" -> vestorly-auth.toString
    
    
    

    try {
      apiInvoker.invokeApi(basePath, path, "GET", queryParams.toMap, None, headerParams.toMap, contentType) match {
        case s: String =>
           Some(ApiInvoker.deserialize(s, "", classOf[Newslettersettings]).asInstanceOf[Newslettersettings])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
  def findNewsletterSettingsByID (id: String, vestorly-auth: String) : Option[Newslettersettingresponse] = {
    // create path and map variables
    val path = "/newsletter_settings/{id}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "id" + "\\}",apiInvoker.escape(id))

    

    
    val contentType = {
      
      "application/json"
    }

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]

    

    if(String.valueOf(vestorly-auth) != "null") queryParams += "vestorly-auth" -> vestorly-auth.toString
    
    
    

    try {
      apiInvoker.invokeApi(basePath, path, "GET", queryParams.toMap, None, headerParams.toMap, contentType) match {
        case s: String =>
           Some(ApiInvoker.deserialize(s, "", classOf[Newslettersettingresponse]).asInstanceOf[Newslettersettingresponse])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
  def updateNewsletterSettingsByID (id: String, vestorly-auth: String, newsletter_setting: NewsletterSettingsInput) : Option[Newslettersettingresponse] = {
    // create path and map variables
    val path = "/newsletter_settings/{id}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "id" + "\\}",apiInvoker.escape(id))

    

    
    val contentType = {
      if(newsletter_setting != null && newsletter_setting.isInstanceOf[File] )
        "multipart/form-data"
      else "application/json"
      
      
    }

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]

    

    if(String.valueOf(vestorly-auth) != "null") queryParams += "vestorly-auth" -> vestorly-auth.toString
    
    
    

    try {
      apiInvoker.invokeApi(basePath, path, "PUT", queryParams.toMap, newsletter_setting, headerParams.toMap, contentType) match {
        case s: String =>
           Some(ApiInvoker.deserialize(s, "", classOf[Newslettersettingresponse]).asInstanceOf[Newslettersettingresponse])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
}
