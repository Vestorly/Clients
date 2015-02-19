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

class PostsApi (implicit val swagger: Swagger) extends ScalatraServlet 
    with FileUploadSupport
    with JacksonJsonSupport
    with SwaggerSupport {
  protected implicit val jsonFormats: Formats = DefaultFormats

  protected val applicationDescription: String = "PostsApi"
  override protected val applicationName: Option[String] = Some("Posts")

  before() {
    contentType = formats("json")
    response.headers += ("Access-Control-Allow-Origin" -> "*")
  }
  

  val indexOperation = (apiOperation[Void]("index")
      summary "Read a list of posts"
      parameters(
        queryParam[String]("vestorly-auth").description("")
        
        
        
        
        
        ,
        queryParam[String]("is_published").description("").optional
        
        
        
        
        
        ,
        queryParam[String]("external_url_source").description("").optional
        
        
        
        
        
        ,
        queryParam[String]("ids").description("").optional
        
        
        
        
        
        
        )
  )

  get("api/posts.json",operation(indexOperation)) {
    
    
    
    

    
      
      val vestorly-auth = params.getAs[String]("vestorly-auth")
      
    

    

    

    
    
    println("vestorly-auth: " + vestorly-auth)
  
    
    
    

    
      
      val is_published = params.getAs[String]("is_published")
      
    

    

    

    
    
    println("is_published: " + is_published)
  
    
    
    

    
      
      val external_url_source = params.getAs[String]("external_url_source")
      
    

    

    

    
    
    println("external_url_source: " + external_url_source)
  
    
    
    

    
      
      val ids = params.getAs[String]("ids")
      
    

    

    

    
    
    println("ids: " + ids)
  
  }

  

  val createOperation = (apiOperation[Void]("create")
      summary "Create an post"
      parameters(
        
        
        
        
        formParam[String]("post").description("")
        
        
        )
  )

  post("api/posts.json",operation(createOperation)) {
    
    
    
    

    

    

    
      val post = params.getAs[String]("post")
    

    
    
    println("post: " + post)
  
  }

  

  val showOperation = (apiOperation[Void]("show")
      summary "Retreive a single post"
      parameters(
        queryParam[String]("vestorly-auth").description("")
        
        
        
        
        
        ,
        
        pathParam[String]("id").description("")
        
        
        
        
        
        )
  )

  get("api/posts/{id}.json",operation(showOperation)) {
    
    
    
    

    
      
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
        
        
        
        
        formParam[String]("post").description("")
        
        
        )
  )

  put("api/posts/{id}.json",operation(updateOperation)) {
    
    
    
    
      val id = params.getOrElse("id", halt(400))
    

    

    

    

    
    
    println("id: " + id)
  
    
    
    

    

    

    
      val post = params.getAs[String]("post")
    

    
    
    println("post: " + post)
  
  }

  

  val destroyOperation = (apiOperation[Void]("destroy")
      summary "Destroy a post"
      parameters(
        
        pathParam[String]("id").description("")
        
        
        
        
        
        )
  )

  delete("api/posts/{id}.json",operation(destroyOperation)) {
    
    
    
    
      val id = params.getOrElse("id", halt(400))
    

    

    

    

    
    
    println("id: " + id)
  
  }

}