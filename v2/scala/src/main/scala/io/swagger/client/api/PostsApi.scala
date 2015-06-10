package io.swagger.client.api

import io.swagger.client.model.Posts
import io.swagger.client.model.PostInput
import io.swagger.client.model.Postresponse
import io.swagger.client.model.Post
import io.swagger.client.ApiInvoker
import io.swagger.client.ApiException

import com.sun.jersey.multipart.FormDataMultiPart
import com.sun.jersey.multipart.file.FileDataBodyPart

import javax.ws.rs.core.MediaType

import java.io.File
import java.util.Date

import scala.collection.mutable.HashMap

class PostsApi(val defBasePath: String = "https://staging.vestorly.com/api/v2",
                        defApiInvoker: ApiInvoker = ApiInvoker) {
  var basePath = defBasePath
  var apiInvoker = defApiInvoker

  def addHeader(key: String, value: String) = apiInvoker.defaultHeaders += key -> value 

  
  /**
   * 
   * Query all posts
   * @param vestorlyAuth Vestorly Auth Token
   * @param textQuery Filter post by parameters
   * @param externalUrl Filter by External URL
   * @param isPublished Filter by is_published boolean
   * @return Posts
   */
  def findPosts (vestorlyAuth: String, textQuery: String, externalUrl: String, isPublished: String) : Option[Posts] = {
    // create path and map variables
    val path = "/posts".replaceAll("\\{format\\}","json")

    val contentTypes = List("application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

    

    if(String.valueOf(vestorlyAuth) != "null") queryParams += "vestorly_auth" -> vestorlyAuth.toString
    if(String.valueOf(textQuery) != "null") queryParams += "text_query" -> textQuery.toString
    if(String.valueOf(externalUrl) != "null") queryParams += "external_url" -> externalUrl.toString
    if(String.valueOf(isPublished) != "null") queryParams += "is_published" -> isPublished.toString
    
    
    

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
           Some(ApiInvoker.deserialize(s, "", classOf[Posts]).asInstanceOf[Posts])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
  /**
   * 
   * Create a new post in the Vestorly Platform
   * @param vestorlyAuth Vestorly Auth Token
   * @param post Post you want to create
   * @return Postresponse
   */
  def createPost (vestorlyAuth: String, post: PostInput) : Option[Postresponse] = {
    // create path and map variables
    val path = "/posts".replaceAll("\\{format\\}","json")

    val contentTypes = List("application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

    

    if(String.valueOf(vestorlyAuth) != "null") queryParams += "vestorly_auth" -> vestorlyAuth.toString
    
    
    

    var postBody: AnyRef = post

    if(contentType.startsWith("multipart/form-data")) {
      val mp = new FormDataMultiPart()
      
      postBody = mp
    }
    else {
      
    }

    try {
      apiInvoker.invokeApi(basePath, path, "POST", queryParams.toMap, formParams.toMap, postBody, headerParams.toMap, contentType) match {
        case s: String =>
           Some(ApiInvoker.deserialize(s, "", classOf[Postresponse]).asInstanceOf[Postresponse])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
  /**
   * 
   * Query all posts
   * @param vestorlyAuth Vestorly Auth Token
   * @param id ID of post to fetch
   * @return Postresponse
   */
  def getPostByID (vestorlyAuth: String, id: String) : Option[Postresponse] = {
    // create path and map variables
    val path = "/posts/{id}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "id" + "\\}",apiInvoker.escape(id))

    

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
           Some(ApiInvoker.deserialize(s, "", classOf[Postresponse]).asInstanceOf[Postresponse])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
  /**
   * 
   * Update A Post
   * @param vestorlyAuth Vestorly Auth Token
   * @param id id of post to update
   * @param post Post you want to update
   * @return Postresponse
   */
  def updatePostByID (vestorlyAuth: String, id: String, post: Post) : Option[Postresponse] = {
    // create path and map variables
    val path = "/posts/{id}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "id" + "\\}",apiInvoker.escape(id))

    

    val contentTypes = List("application/json")
    val contentType = contentTypes(0)

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]
    val formParams = new HashMap[String, String]

    

    if(String.valueOf(vestorlyAuth) != "null") queryParams += "vestorly_auth" -> vestorlyAuth.toString
    
    
    

    var postBody: AnyRef = post

    if(contentType.startsWith("multipart/form-data")) {
      val mp = new FormDataMultiPart()
      
      postBody = mp
    }
    else {
      
    }

    try {
      apiInvoker.invokeApi(basePath, path, "PUT", queryParams.toMap, formParams.toMap, postBody, headerParams.toMap, contentType) match {
        case s: String =>
           Some(ApiInvoker.deserialize(s, "", classOf[Postresponse]).asInstanceOf[Postresponse])
         
        case _ => None
      }
    } catch {
      case ex: ApiException if ex.code == 404 => None
      case ex: ApiException => throw ex
    }
  }
  
}
