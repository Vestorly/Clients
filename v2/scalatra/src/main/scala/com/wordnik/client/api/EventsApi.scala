package com.wordnik.client.api

import com.wordnik.client.model.Events
import com.wordnik.client.model.Eventcreateresponse
import com.wordnik.client.model.EventInput
import com.wordnik.client.model.Eventresponse

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
        queryParam[String]("vestorlyAuth").description("")
        
        
        
        
        
        
        )
  )

  get("/events",operation(findEventsOperation)) {
    
    
    
    

    
      
      val vestorlyAuth = params.getAs[String]("vestorlyAuth")
      
    

    

    

    
    
    println("vestorlyAuth: " + vestorlyAuth)
  
  }

  

  val createEventOperation = (apiOperation[Eventcreateresponse]("createEvent")
      summary ""
      parameters(
        queryParam[String]("vestorlyAuth").description("")
        
        
        
        
        
        ,
        
        
        
        bodyParam[EventInput]("event").description("")
        
        
        
        )
  )

  post("/events",operation(createEventOperation)) {
    
    
    
    

    
      
      val vestorlyAuth = params.getAs[String]("vestorlyAuth")
      
    

    

    

    
    
    println("vestorlyAuth: " + vestorlyAuth)
  
    
    
    

    

    

    

    
      val event = parsedBody.extract[EventInput]
    
    
    println("event: " + event)
  
  }

  

  val findEventByIDOperation = (apiOperation[Eventresponse]("findEventByID")
      summary ""
      parameters(
        
        pathParam[String]("id").description("")
        
        
        
        
        ,
        queryParam[String]("vestorlyAuth").description("")
        
        
        
        
        
        
        )
  )

  get("/events/{id}",operation(findEventByIDOperation)) {
    
    
    
    
      val id = params.getOrElse("id", halt(400))
    

    

    

    

    
    
    println("id: " + id)
  
    
    
    

    
      
      val vestorlyAuth = params.getAs[String]("vestorlyAuth")
      
    

    

    

    
    
    println("vestorlyAuth: " + vestorlyAuth)
  
  }

}