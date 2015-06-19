package io.swagger.client.api

import io.swagger.client.model.Articles
import io.swagger.client.model.Articleresponse
import io.swagger.client.ApiInvoker
import io.swagger.client.ApiException

import com.sun.jersey.multipart.FormDataMultiPart
import com.sun.jersey.multipart.file.FileDataBodyPart

import javax.ws.rs.core.MediaType

import java.io.File
import java.util.Date

import scala.collection.mutable.HashMap

class ArticlesApi(val defBasePath: String = "https://staging.vestorly.com/api/v2",
                        defApiInvoker: ApiInvoker = ApiInvoker) {
  var basePath = defBasePath
  var apiInvoker = defApiInvoker

  def addHeader(key: String, value: String) = apiInvoker.defaultHeaders += key -> value 

  
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
  def findArticles (vestorlyAuth: String, limit: Integer, textQuery: String, sortDirection: String, sortBy: String) : Option[Articles] = {
    // create path and map variables
    val path = "/articles".replaceAll("\\{format\\}","json")

    val contentTypes = List("application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

    

    if(String.valueOf(vestorlyAuth) != "null") queryParams += "vestorly_auth" -> vestorlyAuth.toString
    if(String.valueOf(limit) != "null") queryParams += "limit" -> limit.toString
    if(String.valueOf(textQuery) != "null") queryParams += "text_query" -> textQuery.toString
    if(String.valueOf(sortDirection) != "null") queryParams += "sort_direction" -> sortDirection.toString
    if(String.valueOf(sortBy) != "null") queryParams += "sort_by" -> sortBy.toString
    
    
    

    var postBody: AnyRef = null

    if(contentType.startsWith("multipart/form-data")) {
      val mp = new FormDataMultiPart()
      
      postBody = mp
    }
    else {
      
    }

    try {
      apiInvoker.invokeApi(basePath, path, "GET", queryParams.toMap, formParams.toMap, postBody, headerParams.toMap, contentType) match {
        case s: String =>
           Some(ApiInvoker.deserialize(s, "", classOf[Articles]).asInstanceOf[Articles])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
  /**
   * 
   * Returns a single article
   * @param vestorlyAuth Vestorly Auth Token
   * @param id Article Id to fetch
   * @return Articleresponse
   */
  def findArticleByID (vestorlyAuth: String, id: String) : Option[Articleresponse] = {
    // create path and map variables
    val path = "/articles/{id}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "id" + "\\}",apiInvoker.escape(id))

    

    val contentTypes = List("application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

    

    if(String.valueOf(vestorlyAuth) != "null") queryParams += "vestorly_auth" -> vestorlyAuth.toString
    
    
    

    var postBody: AnyRef = null

    if(contentType.startsWith("multipart/form-data")) {
      val mp = new FormDataMultiPart()
      
      postBody = mp
    }
    else {
      
    }

    try {
      apiInvoker.invokeApi(basePath, path, "GET", queryParams.toMap, formParams.toMap, postBody, headerParams.toMap, contentType) match {
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
