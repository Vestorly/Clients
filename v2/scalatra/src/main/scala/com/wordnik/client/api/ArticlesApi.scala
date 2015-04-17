package com.wordnik.client.api


import java.io.File

import org.scalatra.{ TypedParamSupport, ScalatraServlet }
import org.scalatra.swagger._
import org.json4s._
import org.json4s.JsonDSL._
import org.scalatra.json.{ JValueResult, JacksonJsonSupport }
import org.scalatra.servlet.{FileUploadSupport, MultipartConfig, SizeConstraintExceededException}

import scala.collection.JavaConverters._

class ArticlesApi (implicit val swagger: Swagger) extends ScalatraServlet 
    with FileUploadSupport
    with JacksonJsonSupport
    with SwaggerSupport {
  protected implicit val jsonFormats: Formats = DefaultFormats

  protected val applicationDescription: String = "ArticlesApi"
  override protected val applicationName: Option[String] = Some("Articles")

  before() {
    contentType = formats("json")
    response.headers += ("Access-Control-Allow-Origin" -> "*")
  }
  

  val findArticlesOperation = (apiOperation[Unit]("findArticles")
      summary ""
      parameters(
        queryParam[String]("vestorly-auth").description("")
        
        
        
        
        
        ,
        queryParam[Long]("limit").description("").optional
        
        
        
        
        
        ,
        queryParam[String]("text_query").description("").optional
        
        
        
        
        
        
        )
  )

  get("/articles",operation(findArticlesOperation)) {
    
    
    
    

    
      
      val vestorly-auth = params.getAs[String]("vestorly-auth")
      
    

    

    

    
    
    println("vestorly-auth: " + vestorly-auth)
  
    
    
    

    
      
      val limit = params.getAs[Long]("limit")
      
    

    

    

    
    
    println("limit: " + limit)
  
    
    
    

    
      
      val text_query = params.getAs[String]("text_query")
      
    

    

    

    
    
    println("text_query: " + text_query)
  
  }

}