package io.swagger.client.api

import io.swagger.client.model.Articles
import io.swagger.client.model.Articleresponse
import io.swagger.client.ApiInvoker
import io.swagger.client.ApiException

import java.io.File
import java.util.Date

import scala.collection.mutable.HashMap

class ArticlesApi(val defBasePath: String = "https://staging.vestorly.com/api/v2",
                        defApiInvoker: ApiInvoker = ApiInvoker) {
  var basePath = defBasePath
  var apiInvoker = defApiInvoker

  def addHeader(key: String, value: String) = apiInvoker.defaultHeaders += key -> value 

  
  def findArticles (vestorly-auth: String, limit: Integer, text_query: String, sort_direction: String, sort_by: String) : Option[Articles] = {
    // create path and map variables
    val path = "/articles".replaceAll("\\{format\\}","json")

    
    val contentType = {
      
      "application/json"
    }

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]

    

    if(String.valueOf(vestorly-auth) != "null") queryParams += "vestorly-auth" -> vestorly-auth.toString
    if(String.valueOf(limit) != "null") queryParams += "limit" -> limit.toString
    if(String.valueOf(text_query) != "null") queryParams += "text_query" -> text_query.toString
    if(String.valueOf(sort_direction) != "null") queryParams += "sort_direction" -> sort_direction.toString
    if(String.valueOf(sort_by) != "null") queryParams += "sort_by" -> sort_by.toString
    
    
    

    try {
      apiInvoker.invokeApi(basePath, path, "GET", queryParams.toMap, None, headerParams.toMap, contentType) match {
        case s: String =>
           Some(ApiInvoker.deserialize(s, "", classOf[Articles]).asInstanceOf[Articles])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
  def findArticleByID (vestorly-auth: String, id: String) : Option[Articleresponse] = {
    // create path and map variables
    val path = "/articles/{id}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "id" + "\\}",apiInvoker.escape(id))

    

    
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
           Some(ApiInvoker.deserialize(s, "", classOf[Articleresponse]).asInstanceOf[Articleresponse])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
}
