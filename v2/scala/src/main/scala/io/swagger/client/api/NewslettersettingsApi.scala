package io.swagger.client.api

import io.swagger.client.model.NewsletterSettings
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

  
  def findNewsletterSettings (vestorly_auth: String) : Option[NewsletterSettings] = {
    // create path and map variables
    val path = "/newsletter_settings".replaceAll("\\{format\\}","json")

    
    val contentType = {
      
      "application/json"
    }

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]

    

    if(String.valueOf(vestorly_auth) != "null") queryParams += "vestorly_auth" -> vestorly_auth.toString
    
    
    

    try {
      apiInvoker.invokeApi(basePath, path, "GET", queryParams.toMap, None, headerParams.toMap, contentType) match {
        case s: String =>
           Some(ApiInvoker.deserialize(s, "", classOf[NewsletterSettings]).asInstanceOf[NewsletterSettings])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
  def updateNewsletterSettingsByID (vestorly_auth: String, newsletter_settings: String) : Option[NewsletterSettings] = {
    // create path and map variables
    val path = "/newsletter_settings".replaceAll("\\{format\\}","json")

    
    val contentType = {
      
      "application/json"
    }

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]

    

    if(String.valueOf(vestorly_auth) != "null") queryParams += "vestorly_auth" -> vestorly_auth.toString
    
    
    

    try {
      apiInvoker.invokeApi(basePath, path, "PUT", queryParams.toMap, None, headerParams.toMap, contentType) match {
        case s: String =>
           Some(ApiInvoker.deserialize(s, "", classOf[NewsletterSettings]).asInstanceOf[NewsletterSettings])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
  def findNewsletterSettingsByID (id: String, vestorly_auth: String) : Option[NewsletterSettings] = {
    // create path and map variables
    val path = "/newsletter_settings/{id}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "id" + "\\}",apiInvoker.escape(id))

    

    
    val contentType = {
      
      "application/json"
    }

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]

    

    if(String.valueOf(vestorly_auth) != "null") queryParams += "vestorly_auth" -> vestorly_auth.toString
    
    
    

    try {
      apiInvoker.invokeApi(basePath, path, "GET", queryParams.toMap, None, headerParams.toMap, contentType) match {
        case s: String =>
           Some(ApiInvoker.deserialize(s, "", classOf[NewsletterSettings]).asInstanceOf[NewsletterSettings])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
}
