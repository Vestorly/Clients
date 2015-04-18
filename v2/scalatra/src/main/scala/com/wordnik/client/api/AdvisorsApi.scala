package com.wordnik.client.api

import com.wordnik.client.model.Advisor

import java.io.File

import org.scalatra.{ TypedParamSupport, ScalatraServlet }
import org.scalatra.swagger._
import org.json4s._
import org.json4s.JsonDSL._
import org.scalatra.json.{ JValueResult, JacksonJsonSupport }
import org.scalatra.servlet.{FileUploadSupport, MultipartConfig, SizeConstraintExceededException}

import scala.collection.JavaConverters._

class AdvisorsApi (implicit val swagger: Swagger) extends ScalatraServlet 
    with FileUploadSupport
    with JacksonJsonSupport
    with SwaggerSupport {
  protected implicit val jsonFormats: Formats = DefaultFormats

  protected val applicationDescription: String = "AdvisorsApi"
  override protected val applicationName: Option[String] = Some("Advisors")

  before() {
    contentType = formats("json")
    response.headers += ("Access-Control-Allow-Origin" -> "*")
  }
  

  val findAdvisorsOperation = (apiOperation[Unit]("findAdvisors")
      summary ""
      parameters(
        queryParam[String]("vestorly_auth").description("")
        
        
        
        
        
        
        )
  )

  get("/advisors",operation(findAdvisorsOperation)) {
    
    
    
    

    
      
      val vestorly_auth = params.getAs[String]("vestorly_auth")
      
    

    

    

    
    
    println("vestorly_auth: " + vestorly_auth)
  
  }

  

  val findAdvisorByIDOperation = (apiOperation[Advisor]("findAdvisorByID")
      summary ""
      parameters(
        
        pathParam[String]("id").description("")
        
        
        
        
        ,
        queryParam[String]("vestorly_auth").description("")
        
        
        
        
        
        
        )
  )

  get("/advisors/{id}",operation(findAdvisorByIDOperation)) {
    
    
    
    
      val id = params.getOrElse("id", halt(400))
    

    

    

    

    
    
    println("id: " + id)
  
    
    
    

    
      
      val vestorly_auth = params.getAs[String]("vestorly_auth")
      
    

    

    

    
    
    println("vestorly_auth: " + vestorly_auth)
  
  }

}