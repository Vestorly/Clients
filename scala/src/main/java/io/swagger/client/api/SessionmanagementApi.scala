package io.swagger.client.api

import io.swagger.client.model.Void
import io.swagger.client.ApiInvoker
import io.swagger.client.ApiException

import java.io.File
import java.util.Date

import scala.collection.mutable.HashMap

class SessionmanagementApi {
  var basePath: String = "http://developers.vestorly.com/"
  var apiInvoker = ApiInvoker
  
  def addHeader(key: String, value: String) = apiInvoker.defaultHeaders += key -> value 

  
  def sign_in (login_with_email_only: Boolean, create_account: Boolean) : Option[Void] = {
    // create path and map variables
    val path = "api/session_management/sign_in.json".replaceAll("\\{format\\}","json")

    
    val contentType = {
      
      "application/json"
    }

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]

    

    if(String.valueOf(login_with_email_only) != "null") queryParams += "login_with_email_only" -> login_with_email_only.toString
    if(String.valueOf(create_account) != "null") queryParams += "create_account" -> create_account.toString
    
    
    

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
  
  def sign_out () : Option[Void] = {
    // create path and map variables
    val path = "api/session_management/{id}/sign_out.json".replaceAll("\\{format\\}","json")

    
    val contentType = {
      
      "application/json"
    }

    // query params
    val queryParams = new HashMap[String, String]
    val headerParams = new HashMap[String, String]

    

    
    
    

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
