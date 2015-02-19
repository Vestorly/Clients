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

class RssfeedsApi (implicit val swagger: Swagger) extends ScalatraServlet 
    with FileUploadSupport
    with JacksonJsonSupport
    with SwaggerSupport {
  protected implicit val jsonFormats: Formats = DefaultFormats

  protected val applicationDescription: String = "RssfeedsApi"
  override protected val applicationName: Option[String] = Some("Rssfeeds")

  before() {
    contentType = formats("json")
    response.headers += ("Access-Control-Allow-Origin" -> "*")
  }
  

  val indexOperation = (apiOperation[Void]("index")
      summary "Read a list of rss feed"
      parameters(
        queryParam[String]("vestorly-auth").description("")
        
        
        
        
        
        ,
        queryParam[String]("ids").description("").optional
        
        
        
        
        
        
        )
  )

  get("api/rss_feeds.json",operation(indexOperation)) {
    
    
    
    

    
      
      val vestorly-auth = params.getAs[String]("vestorly-auth")
      
    

    

    

    
    
    println("vestorly-auth: " + vestorly-auth)
  
    
    
    

    
      
      val ids = params.getAs[String]("ids")
      
    

    

    

    
    
    println("ids: " + ids)
  
  }

  

  val createOperation = (apiOperation[Void]("create")
      summary "Create an post"
      parameters(
        
        
        
        
        formParam[String]("rss_feed").description("")
        
        
        )
  )

  post("api/rss_feeds.json",operation(createOperation)) {
    
    
    
    

    

    

    
      val rss_feed = params.getAs[String]("rss_feed")
    

    
    
    println("rss_feed: " + rss_feed)
  
  }

  

  val showOperation = (apiOperation[Void]("show")
      summary "Retreive a single rss feed"
      parameters(
        queryParam[String]("vestorly-auth").description("")
        
        
        
        
        
        ,
        
        pathParam[String]("id").description("")
        
        
        
        
        
        )
  )

  get("api/rss_feeds/{id}.json",operation(showOperation)) {
    
    
    
    

    
      
      val vestorly-auth = params.getAs[String]("vestorly-auth")
      
    

    

    

    
    
    println("vestorly-auth: " + vestorly-auth)
  
    
    
    
      val id = params.getOrElse("id", halt(400))
    

    

    

    

    
    
    println("id: " + id)
  
  }

  

  val updateOperation = (apiOperation[Void]("update")
      summary "Create an advisor"
      parameters(
        
        pathParam[String]("id").description("")
        
        
        
        
        ,
        
        
        
        
        formParam[String]("rss_feed").description("")
        
        
        )
  )

  put("api/rss_feeds/{id}.json",operation(updateOperation)) {
    
    
    
    
      val id = params.getOrElse("id", halt(400))
    

    

    

    

    
    
    println("id: " + id)
  
    
    
    

    

    

    
      val rss_feed = params.getAs[String]("rss_feed")
    

    
    
    println("rss_feed: " + rss_feed)
  
  }

  

  val destroyOperation = (apiOperation[Void]("destroy")
      summary "Destroy a post"
      parameters(
        
        pathParam[String]("id").description("")
        
        
        
        
        
        )
  )

  delete("api/rss_feeds/{id}.json",operation(destroyOperation)) {
    
    
    
    
      val id = params.getOrElse("id", halt(400))
    

    

    

    

    
    
    println("id: " + id)
  
  }

}