package io.swagger.client.api

import io.swagger.client.model.Posts
import io.swagger.client.model.Post
import io.swagger.client.model.PostInput
import io.swagger.client.ApiInvoker
import io.swagger.client.ApiException

import java.io.File
import java.util.Date

import scala.collection.mutable.HashMap

class PostsApi(val defBasePath: String = "https://staging.vestorly.com/api/v2",
                        defApiInvoker: ApiInvoker = ApiInvoker) {
  var basePath = defBasePath
  var apiInvoker = defApiInvoker

  def addHeader(key: String, value: String) = apiInvoker.defaultHeaders += key -> value 

  
  def findPosts (vestorly-auth: String, filter_by: String) : Option[Posts] = {
    // create path and map variables
    val path = "/posts".replaceAll("\\{format\\}","json")

    
    val contentType = {
      
      "application/json"
    }

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]

    

    if(String.valueOf(vestorly-auth) != "null") queryParams += "vestorly-auth" -> vestorly-auth.toString
    if(String.valueOf(filter_by) != "null") queryParams += "filter_by" -> filter_by.toString
    
    
    

    try {
      apiInvoker.invokeApi(basePath, path, "GET", queryParams.toMap, None, headerParams.toMap, contentType) match {
        case s: String =>
           Some(ApiInvoker.deserialize(s, "", classOf[Posts]).asInstanceOf[Posts])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
  def createPost (vestorly-auth: String, post: PostInput) : Option[Post] = {
    // create path and map variables
    val path = "/posts".replaceAll("\\{format\\}","json")

    
    val contentType = {
      if(post != null && post.isInstanceOf[File] )
        "multipart/form-data"
      else "application/json"
      
      
    }

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]

    

    if(String.valueOf(vestorly-auth) != "null") queryParams += "vestorly-auth" -> vestorly-auth.toString
    
    
    

    try {
      apiInvoker.invokeApi(basePath, path, "POST", queryParams.toMap, post, headerParams.toMap, contentType) match {
        case s: String =>
           Some(ApiInvoker.deserialize(s, "", classOf[Post]).asInstanceOf[Post])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
  def getPostByID (vestorly-auth: String, id: String) : Option[Post] = {
    // create path and map variables
    val path = "/posts/{id}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "id" + "\\}",apiInvoker.escape(id))

    

    
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
           Some(ApiInvoker.deserialize(s, "", classOf[Post]).asInstanceOf[Post])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
  def updatePostByID (vestorly-auth: String, id: String, post: PostInput) : Option[Post] = {
    // create path and map variables
    val path = "/posts/{id}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "id" + "\\}",apiInvoker.escape(id))

    

    
    val contentType = {
      if(post != null && post.isInstanceOf[File] )
        "multipart/form-data"
      else "application/json"
      
      
    }

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]

    

    if(String.valueOf(vestorly-auth) != "null") queryParams += "vestorly-auth" -> vestorly-auth.toString
    
    
    

    try {
      apiInvoker.invokeApi(basePath, path, "PUT", queryParams.toMap, post, headerParams.toMap, contentType) match {
        case s: String =>
           Some(ApiInvoker.deserialize(s, "", classOf[Post]).asInstanceOf[Post])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
}
