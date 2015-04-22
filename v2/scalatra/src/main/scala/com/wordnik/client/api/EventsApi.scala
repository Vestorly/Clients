package com.wordnik.client.api

import com.wordnik.client.model.Events
import com.wordnik.client.model.Event
import com.wordnik.client.model.EventInput

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
  

  val findEventsOperation = (apiOperation[Events]("findEvents")
      summary ""
      parameters(
        queryParam[String]("vestorly-auth").description("")
        
        
        
        
        
        
        )
  )

  get("/events",operation(findEventsOperation)) {
    
    
    
    

    
      
      val vestorly-auth = params.getAs[String]("vestorly-auth")
      
    

    

    

    
    
    println("vestorly-auth: " + vestorly-auth)
  
  }

  

  val findEventByIDOperation = (apiOperation[Event]("findEventByID")
      summary ""
      parameters(
        
        pathParam[String]("id").description("")
        
        
        
        
        ,
        queryParam[String]("vestorly-auth").description("")
        
        
        
        
        
        
        )
  )

  get("/events/{id}",operation(findEventByIDOperation)) {
    
    
    
    
      val id = params.getOrElse("id", halt(400))
    

    

    

    

    
    
    println("id: " + id)
  
    
    
    

    
      
      val vestorly-auth = params.getAs[String]("vestorly-auth")
      
    

    

    

    
    
    println("vestorly-auth: " + vestorly-auth)
  
  }

  

  val updateEventByIDOperation = (apiOperation[Event]("updateEventByID")
      summary ""
      parameters(
        
        pathParam[String]("id").description("")
        
        
        
        
        ,
        queryParam[String]("vestorly-auth").description("")
        
        
        
        
        
        ,
        
        
        
        bodyParam[EventInput]("Event").description("")
        
        
        
        )
  )

  put("/events/{id}",operation(updateEventByIDOperation)) {
    
    
    
    
      val id = params.getOrElse("id", halt(400))
    

    

    

    

    
    
    println("id: " + id)
  
    
    
    

    
      
      val vestorly-auth = params.getAs[String]("vestorly-auth")
      
    

    

    

    
    
    println("vestorly-auth: " + vestorly-auth)
  
    
    
    

    

    

    

    
      val Event = parsedBody.extract[EventInput]
    
    
    println("Event: " + Event)
  
  }

}