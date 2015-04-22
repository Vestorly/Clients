package com.wordnik.client.api

import com.wordnik.client.model.Session

import java.io.File

import org.scalatra.{ TypedParamSupport, ScalatraServlet }
import org.scalatra.swagger._
import org.json4s._
import org.json4s.JsonDSL._
import org.scalatra.json.{ JValueResult, JacksonJsonSupport }
import org.scalatra.servlet.{FileUploadSupport, MultipartConfig, SizeConstraintExceededException}

import scala.collection.JavaConverters._

class SessionsApi (implicit val swagger: Swagger) extends ScalatraServlet 
    with FileUploadSupport
    with JacksonJsonSupport
    with SwaggerSupport {
  protected implicit val jsonFormats: Formats = DefaultFormats

  protected val applicationDescription: String = "SessionsApi"
  override protected val applicationName: Option[String] = Some("Sessions")

  before() {
    contentType = formats("json")
    response.headers += ("Access-Control-Allow-Origin" -> "*")
  }
  

  val loginOperation = (apiOperation[Session]("login")
      summary ""
      parameters(
        
        
        
        
        formParam[String]("username").description("")
        
        ,
        
        
        
        
        formParam[String]("password").description("")
        
        
        )
  )

  post("/sessions",operation(loginOperation)) {
    
    
    
    

    

    

    
      val username = params.getAs[String]("username")
    

    
    
    println("username: " + username)
  
    
    
    

    

    

    
      val password = params.getAs[String]("password")
    

    
    
    println("password: " + password)
  
  }

  

  val logoutOperation = (apiOperation[Session]("logout")
      summary ""
      parameters(
        
        
        
        
        formParam[String]("vestorly-auth").description("")
        
        ,
        
        pathParam[String]("id").description("")
        
        
        
        
        
        )
  )

  delete("/sessions/{id}",operation(logoutOperation)) {
    
    
    
    

    

    

    
      val vestorly-auth = params.getAs[String]("vestorly-auth")
    

    
    
    println("vestorly-auth: " + vestorly-auth)
  
    
    
    
      val id = params.getOrElse("id", halt(400))
    

    

    

    

    
    
    println("id: " + id)
  
  }

}