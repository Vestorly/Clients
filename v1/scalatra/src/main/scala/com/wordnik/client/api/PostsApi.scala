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
        queryParam[String]("filter_by").description("").optional
        
        
        
        
        
        ,
        queryParam[String]("filter_by_group_id").description("").optional
        
        
        
        
        
        ,
        queryParam[String]("filter_by_newsletter_id").description("").optional
        
        
        
        
        
        
        )
  )

  get("api/advisors/{advisor_id}/posts.json",operation(indexOperation)) {
    
    
    
    

    
      
      val vestorly-auth = params.getAs[String]("vestorly-auth")
      
    

    

    

    
    
    println("vestorly-auth: " + vestorly-auth)
  
    
    
    

    
      
      val filter_by = params.getAs[String]("filter_by")
      
    

    

    

    
    
    println("filter_by: " + filter_by)
  
    
    
    

    
      
      val filter_by_group_id = params.getAs[String]("filter_by_group_id")
      
    

    

    

    
    
    println("filter_by_group_id: " + filter_by_group_id)
  
    
    
    

    
      
      val filter_by_newsletter_id = params.getAs[String]("filter_by_newsletter_id")
      
    

    

    

    
    
    println("filter_by_newsletter_id: " + filter_by_newsletter_id)
  
  }

  

  val createOperation = (apiOperation[Void]("create")
      summary "Create an post"
      parameters(
        queryParam[String]("vestorly-auth").description("")
        
        
        
        
        
        ,
        
        pathParam[String]("advisor_id").description("")
        
        
        
        
        ,
        
        
        
        
        formParam[String]("post").description("")
        
        
        )
  )

  post("api/advisors/{advisor_id}/posts.json",operation(createOperation)) {
    
    
    
    

    
      
      val vestorly-auth = params.getAs[String]("vestorly-auth")
      
    

    

    

    
    
    println("vestorly-auth: " + vestorly-auth)
  
    
    
    
      val advisor_id = params.getOrElse("advisor_id", halt(400))
    

    

    

    

    
    
    println("advisor_id: " + advisor_id)
  
    
    
    

    

    

    
      val post = params.getAs[String]("post")
    

    
    
    println("post: " + post)
  
  }

  

  val showOperation = (apiOperation[Void]("show")
      summary "Read a specific post"
      parameters(
        queryParam[String]("vestorly-auth").description("")
        
        
        
        
        
        ,
        
        pathParam[String]("id").description("")
        
        
        
        
        ,
        
        pathParam[String]("advisor_id").description("")
        
        
        
        
        
        )
  )

  get("api/advisors/{advisor_id}/posts/{id}.json",operation(showOperation)) {
    
    
    
    

    
      
      val vestorly-auth = params.getAs[String]("vestorly-auth")
      
    

    

    

    
    
    println("vestorly-auth: " + vestorly-auth)
  
    
    
    
      val id = params.getOrElse("id", halt(400))
    

    

    

    

    
    
    println("id: " + id)
  
    
    
    
      val advisor_id = params.getOrElse("advisor_id", halt(400))
    

    

    

    

    
    
    println("advisor_id: " + advisor_id)
  
  }

  

  val updateOperation = (apiOperation[Void]("update")
      summary "Update a post"
      parameters(
        queryParam[String]("vestorly-auth").description("")
        
        
        
        
        
        ,
        
        pathParam[String]("id").description("")
        
        
        
        
        ,
        
        pathParam[String]("advisor_id").description("")
        
        
        
        
        ,
        
        
        
        
        formParam[String]("post").description("")
        
        
        )
  )

  put("api/advisors/{advisor_id}/posts/{id}.json",operation(updateOperation)) {
    
    
    
    

    
      
      val vestorly-auth = params.getAs[String]("vestorly-auth")
      
    

    

    

    
    
    println("vestorly-auth: " + vestorly-auth)
  
    
    
    
      val id = params.getOrElse("id", halt(400))
    

    

    

    

    
    
    println("id: " + id)
  
    
    
    
      val advisor_id = params.getOrElse("advisor_id", halt(400))
    

    

    

    

    
    
    println("advisor_id: " + advisor_id)
  
    
    
    

    

    

    
      val post = params.getAs[String]("post")
    

    
    
    println("post: " + post)
  
  }

  

  val destroyOperation = (apiOperation[Void]("destroy")
      summary "Deletes a post"
      parameters(
        queryParam[String]("vestorly-auth").description("")
        
        
        
        
        
        ,
        
        pathParam[String]("id").description("")
        
        
        
        
        
        )
  )

  delete("api/advisors/{advisor_id}/posts/{id}.json",operation(destroyOperation)) {
    
    
    
    

    
      
      val vestorly-auth = params.getAs[String]("vestorly-auth")
      
    

    

    

    
    
    println("vestorly-auth: " + vestorly-auth)
  
    
    
    
      val id = params.getOrElse("id", halt(400))
    

    

    

    

    
    
    println("id: " + id)
  
  }

}