package com.wordnik.client.api

import com.wordnik.client.model.Articles
import com.wordnik.client.model.Articleresponse

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
  

  val findArticlesOperation = (apiOperation[Articles]("findArticles")
      summary ""
      parameters(
        queryParam[String]("vestorlyAuth").description("")
        
        
        
        
        
        ,
        queryParam[Int]("limit").description("").optional
        
        
        
        
        
        ,
        queryParam[String]("textQuery").description("").optional
        
        
        
        
        
        ,
        queryParam[String]("sortDirection").description("").optional
        
        
        
        
        
        ,
        queryParam[String]("sortBy").description("").optional
        
        
        
        
        
        
        )
  )

  get("/articles",operation(findArticlesOperation)) {
    
    
    
    

    
      
      val vestorlyAuth = params.getAs[String]("vestorlyAuth")
      
    

    

    

    
    
    println("vestorlyAuth: " + vestorlyAuth)
  
    
    
    

    
      
      val limit = params.getAs[Int]("limit")
      
    

    

    

    
    
    println("limit: " + limit)
  
    
    
    

    
      
      val textQuery = params.getAs[String]("textQuery")
      
    

    

    

    
    
    println("textQuery: " + textQuery)
  
    
    
    

    
      
      val sortDirection = params.getAs[String]("sortDirection")
      
    

    

    

    
    
    println("sortDirection: " + sortDirection)
  
    
    
    

    
      
      val sortBy = params.getAs[String]("sortBy")
      
    

    

    

    
    
    println("sortBy: " + sortBy)
  
  }

  

  val findArticleByIDOperation = (apiOperation[Articleresponse]("findArticleByID")
      summary ""
      parameters(
        queryParam[String]("vestorlyAuth").description("")
        
        
        
        
        
        ,
        
        pathParam[String]("id").description("")
        
        
        
        
        
        )
  )

  get("/articles/{id}",operation(findArticleByIDOperation)) {
    
    
    
    

    
      
      val vestorlyAuth = params.getAs[String]("vestorlyAuth")
      
    

    

    

    
    
    println("vestorlyAuth: " + vestorlyAuth)
  
    
    
    
      val id = params.getOrElse("id", halt(400))
    

    

    

    

    
    
    println("id: " + id)
  
  }

}