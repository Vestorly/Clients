package com.wordnik.client.api

import com.wordnik.client.model.Void

import java.io.File

import org.scalatra.{ TypedParamSupport, ScalatraServlet }
import org.scalatra.swagger._
import org.json4s._
import org.json4s.JsonDSL._
import org.scalatra.json.{ JValueResult, JacksonJsonSupport }
import org.scalatra.servlet.{FileUploadSupport, MultipartConfig, SizeConstraintExceededException}

import scala.collection.JavaConverters._

class EventsApi (implicit val swagger: Swagger) extends ScalatraServlet 
    with FileUploadSupport
    with JacksonJsonSupport
    with SwaggerSupport {
  protected implicit val jsonFormats: Formats = DefaultFormats

  protected val applicationDescription: String = "EventsApi"
  override protected val applicationName: Option[String] = Some("Events")

  before() {
    contentType = formats("json")
    response.headers += ("Access-Control-Allow-Origin" -> "*")
  }
  

  val indexOperation = (apiOperation[Void]("index")
      summary "Read a list of events"
      parameters(
        queryParam[String]("vestorly-auth").description("")
        
        
        
        
        
        
        )
  )

  get("api/events.json",operation(indexOperation)) {
    
    
    
    

    
      
      val vestorly-auth = params.getAs[String]("vestorly-auth")
      
    

    

    

    
    
    println("vestorly-auth: " + vestorly-auth)
  
  }

  

  val createOperation = (apiOperation[Void]("create")
      summary "Create a event"
      parameters(
        
        
        
        
        formParam[String]("event").description("")
        
        
        )
  )

  post("api/events.json",operation(createOperation)) {
    
    
    
    

    

    

    
      val event = params.getAs[String]("event")
    

    
    
    println("event: " + event)
  
  }

  

  val showOperation = (apiOperation[Void]("show")
      summary "Read a specific event"
      parameters(
        queryParam[String]("vestorly-auth").description("")
        
        
        
        
        
        ,
        
        pathParam[String]("id").description("")
        
        
        
        
        
        )
  )

  get("api/events/{id}.json",operation(showOperation)) {
    
    
    
    

    
      
      val vestorly-auth = params.getAs[String]("vestorly-auth")
      
    

    

    

    
    
    println("vestorly-auth: " + vestorly-auth)
  
    
    
    
      val id = params.getOrElse("id", halt(400))
    

    

    

    

    
    
    println("id: " + id)
  
  }

  

  val updateOperation = (apiOperation[Void]("update")
      summary "Create a event"
      parameters(
        
        pathParam[String]("id").description("")
        
        
        
        
        ,
        
        
        
        
        formParam[String]("event").description("")
        
        
        )
  )

  put("api/events/{id}.json",operation(updateOperation)) {
    
    
    
    
      val id = params.getOrElse("id", halt(400))
    

    

    

    

    
    
    println("id: " + id)
  
    
    
    

    

    

    
      val event = params.getAs[String]("event")
    

    
    
    println("event: " + event)
  
  }

}