package io.swagger.client.api

import io.swagger.client.ApiInvoker
import io.swagger.client.ApiException

import java.io.File
import java.util.Date

import scala.collection.mutable.HashMap

class MembersApi(val defBasePath: String = "http://developers.vestorly.com/",
                        defApiInvoker: ApiInvoker = ApiInvoker) {
  var basePath = defBasePath
  var apiInvoker = defApiInvoker

  def addHeader(key: String, value: String) = apiInvoker.defaultHeaders += key -> value 

  
  def index (vestorly-auth: String, advisor_id: String, search: String, sorted_by: String, sorted_order: String) : Option[Void] = {
    // create path and map variables
    val path = "api/advisors/{advisor_id}/members.json".replaceAll("\\{format\\}","json").replaceAll("\\{" + "advisor_id" + "\\}",apiInvoker.escape(advisor_id))

    

    
    val contentType = {
      
      "application/json"
    }

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]

    

    if(String.valueOf(vestorly-auth) != "null") queryParams += "vestorly-auth" -> vestorly-auth.toString
    if(String.valueOf(search) != "null") queryParams += "search" -> search.toString
    if(String.valueOf(sorted_by) != "null") queryParams += "sorted_by" -> sorted_by.toString
    if(String.valueOf(sorted_order) != "null") queryParams += "sorted_order" -> sorted_order.toString
    
    
    

    try {
      apiInvoker.invokeApi(basePath, path, "GET", queryParams.toMap, None, headerParams.toMap, contentType) match {
        case s: String =>
           Some(ApiInvoker.deserialize(s, "", classOf[Void]).asInstanceOf[Void])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
  def create (vestorly-auth: String, advisor_id: String, member: String) : Option[Void] = {
    // create path and map variables
    val path = "api/advisors/{advisor_id}/members.json".replaceAll("\\{format\\}","json").replaceAll("\\{" + "advisor_id" + "\\}",apiInvoker.escape(advisor_id))

    

    
    val contentType = {
      
      "application/json"
    }

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]

    

    if(String.valueOf(vestorly-auth) != "null") queryParams += "vestorly-auth" -> vestorly-auth.toString
    
    
    

    try {
      apiInvoker.invokeApi(basePath, path, "POST", queryParams.toMap, None, headerParams.toMap, contentType) match {
        case s: String =>
           Some(ApiInvoker.deserialize(s, "", classOf[Void]).asInstanceOf[Void])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
  def show (vestorly-auth: String, advisor_id: String, id: String) : Option[Void] = {
    // create path and map variables
    val path = "api/advisors/{advisor_id}/members/{id}.json".replaceAll("\\{format\\}","json").replaceAll("\\{" + "advisor_id" + "\\}",apiInvoker.escape(advisor_id))

    .replaceAll("\\{" + "id" + "\\}",apiInvoker.escape(id))

    

    
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
           Some(ApiInvoker.deserialize(s, "", classOf[Void]).asInstanceOf[Void])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
  def update (vestorly-auth: String, advisor_id: String, id: String, member: String) : Option[Void] = {
    // create path and map variables
    val path = "api/advisors/{advisor_id}/members/{id}.json".replaceAll("\\{format\\}","json").replaceAll("\\{" + "advisor_id" + "\\}",apiInvoker.escape(advisor_id))

    .replaceAll("\\{" + "id" + "\\}",apiInvoker.escape(id))

    

    
    val contentType = {
      
      "application/json"
    }

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]

    

    if(String.valueOf(vestorly-auth) != "null") queryParams += "vestorly-auth" -> vestorly-auth.toString
    
    
    

    try {
      apiInvoker.invokeApi(basePath, path, "PUT", queryParams.toMap, None, headerParams.toMap, contentType) match {
        case s: String =>
           Some(ApiInvoker.deserialize(s, "", classOf[Void]).asInstanceOf[Void])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
  def destroy (vestorly-auth: String, advisor_id: String, id: String) : Option[Void] = {
    // create path and map variables
    val path = "api/advisors/{advisor_id}/members/{id}.json".replaceAll("\\{format\\}","json").replaceAll("\\{" + "advisor_id" + "\\}",apiInvoker.escape(advisor_id))

    .replaceAll("\\{" + "id" + "\\}",apiInvoker.escape(id))

    

    
    val contentType = {
      
      "application/json"
    }

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]

    

    if(String.valueOf(vestorly-auth) != "null") queryParams += "vestorly-auth" -> vestorly-auth.toString
    
    
    

    try {
      apiInvoker.invokeApi(basePath, path, "DELETE", queryParams.toMap, None, headerParams.toMap, contentType) match {
        case s: String =>
           Some(ApiInvoker.deserialize(s, "", classOf[Void]).asInstanceOf[Void])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
}
