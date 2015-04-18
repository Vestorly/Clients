package com.wordnik.client.api

import com.wordnik.client.model.MemberEvents

import java.io.File

import org.scalatra.{ TypedParamSupport, ScalatraServlet }
import org.scalatra.swagger._
import org.json4s._
import org.json4s.JsonDSL._
import org.scalatra.json.{ JValueResult, JacksonJsonSupport }
import org.scalatra.servlet.{FileUploadSupport, MultipartConfig, SizeConstraintExceededException}

import scala.collection.JavaConverters._

class MembereventsApi (implicit val swagger: Swagger) extends ScalatraServlet 
    with FileUploadSupport
    with JacksonJsonSupport
    with SwaggerSupport {
  protected implicit val jsonFormats: Formats = DefaultFormats

  protected val applicationDescription: String = "MembereventsApi"
  override protected val applicationName: Option[String] = Some("Memberevents")

  before() {
    contentType = formats("json")
    response.headers += ("Access-Control-Allow-Origin" -> "*")
  }
  

  val findMemberEventsOperation = (apiOperation[MemberEvents]("findMemberEvents")
      summary ""
      parameters(
        queryParam[String]("vestorly_auth").description("")
        
        
        
        
        
        
        )
  )

  get("/member_events",operation(findMemberEventsOperation)) {
    
    
    
    

    
      
      val vestorly_auth = params.getAs[String]("vestorly_auth")
      
    

    

    

    
    
    println("vestorly_auth: " + vestorly_auth)
  
  }

}