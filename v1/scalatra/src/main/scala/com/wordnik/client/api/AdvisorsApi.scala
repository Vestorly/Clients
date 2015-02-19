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
  

  val createOperation = (apiOperation[Void]("create")
      summary "Create an advisor"
      parameters(
        queryParam[String]("vestorly-auth").description("")
        
        
        
        
        
        ,
        
        
        
        
        formParam[String]("advisor").description("")
        
        
        )
  )

  post("api/advisors.json",operation(createOperation)) {
    
    
    
    

    
      
      val vestorly-auth = params.getAs[String]("vestorly-auth")
      
    

    

    

    
    
    println("vestorly-auth: " + vestorly-auth)
  
    
    
    

    

    

    
      val advisor = params.getAs[String]("advisor")
    

    
    
    println("advisor: " + advisor)
  
  }

  

  val showOperation = (apiOperation[Void]("show")
      summary "Read a specific advisor"
      parameters(
        queryParam[String]("vestorly-auth").description("")
        
        
        
        
        
        ,
        
        pathParam[String]("id").description("")
        
        
        
        
        ,
        queryParam[String]("filter_by").description("").optional
        
        
        
        
        
        
        )
  )

  get("api/advisors/{id}.json",operation(showOperation)) {
    
    
    
    

    
      
      val vestorly-auth = params.getAs[String]("vestorly-auth")
      
    

    

    

    
    
    println("vestorly-auth: " + vestorly-auth)
  
    
    
    
      val id = params.getOrElse("id", halt(400))
    

    

    

    

    
    
    println("id: " + id)
  
    
    
    

    
      
      val filter_by = params.getAs[String]("filter_by")
      
    

    

    

    
    
    println("filter_by: " + filter_by)
  
  }

  

  val updateOperation = (apiOperation[Void]("update")
      summary "Update a advisor"
      parameters(
        queryParam[String]("vestorly-auth").description("")
        
        
        
        
        
        ,
        
        pathParam[String]("id").description("")
        
        
        
        
        
        )
  )

  put("api/advisors/{id}.json",operation(updateOperation)) {
    
    
    
    

    
      
      val vestorly-auth = params.getAs[String]("vestorly-auth")
      
    

    

    

    
    
    println("vestorly-auth: " + vestorly-auth)
  
    
    
    
      val id = params.getOrElse("id", halt(400))
    

    

    

    

    
    
    println("id: " + id)
  
  }

}