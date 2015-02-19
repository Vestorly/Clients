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

class SourcesApi (implicit val swagger: Swagger) extends ScalatraServlet 
    with FileUploadSupport
    with JacksonJsonSupport
    with SwaggerSupport {
  protected implicit val jsonFormats: Formats = DefaultFormats

  protected val applicationDescription: String = "SourcesApi"
  override protected val applicationName: Option[String] = Some("Sources")

  before() {
    contentType = formats("json")
    response.headers += ("Access-Control-Allow-Origin" -> "*")
  }
  

  val indexOperation = (apiOperation[Void]("index")
      summary "Read a list of sources"
      parameters(
        queryParam[String]("vestorly-auth").description("")
        
        
        
        
        
        ,
        queryParam[String]("ids").description("").optional
        
        
        
        
        
        
        )
  )

  get("api/sources.json",operation(indexOperation)) {
    
    
    
    

    
      
      val vestorly-auth = params.getAs[String]("vestorly-auth")
      
    

    

    

    
    
    println("vestorly-auth: " + vestorly-auth)
  
    
    
    

    
      
      val ids = params.getAs[String]("ids")
      
    

    

    

    
    
    println("ids: " + ids)
  
  }

  

  val showOperation = (apiOperation[Void]("show")
      summary "Read a specific source"
      parameters(
        queryParam[String]("vestorly-auth").description("")
        
        
        
        
        
        ,
        
        pathParam[String]("id").description("")
        
        
        
        
        
        )
  )

  get("api/sources/{id}.json",operation(showOperation)) {
    
    
    
    

    
      
      val vestorly-auth = params.getAs[String]("vestorly-auth")
      
    

    

    

    
    
    println("vestorly-auth: " + vestorly-auth)
  
    
    
    
      val id = params.getOrElse("id", halt(400))
    

    

    

    

    
    
    println("id: " + id)
  
  }

  

  val updateOperation = (apiOperation[Void]("update")
      summary "Create a source"
      parameters(
        
        pathParam[String]("id").description("")
        
        
        
        
        ,
        
        
        
        
        formParam[String]("source").description("")
        
        
        )
  )

  put("api/sources/{id}.json",operation(updateOperation)) {
    
    
    
    
      val id = params.getOrElse("id", halt(400))
    

    

    

    

    
    
    println("id: " + id)
  
    
    
    

    

    

    
      val source = params.getAs[String]("source")
    

    
    
    println("source: " + source)
  
  }

}