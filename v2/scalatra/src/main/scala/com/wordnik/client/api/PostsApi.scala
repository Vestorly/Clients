package com.wordnik.client.api

import com.wordnik.client.model.Posts
import com.wordnik.client.model.Post

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
  

  val findPostsOperation = (apiOperation[Posts]("findPosts")
      summary ""
      parameters(
        queryParam[String]("vestorly-auth").description("")
        
        
        
        
        
        ,
        queryParam[String]("filter_by").description("").optional
        
        
        
        
        
        
        )
  )

  get("/posts",operation(findPostsOperation)) {
    
    
    
    

    
      
      val vestorly-auth = params.getAs[String]("vestorly-auth")
      
    

    

    

    
    
    println("vestorly-auth: " + vestorly-auth)
  
    
    
    

    
      
      val filter_by = params.getAs[String]("filter_by")
      
    

    

    

    
    
    println("filter_by: " + filter_by)
  
  }

  

  val createPostOperation = (apiOperation[Post]("createPost")
      summary ""
      parameters(
        queryParam[String]("vestorly-auth").description("")
        
        
        
        
        
        ,
        
        
        
        
        formParam[String]("Post").description("")
        
        
        )
  )

  post("/posts",operation(createPostOperation)) {
    
    
    
    

    
      
      val vestorly-auth = params.getAs[String]("vestorly-auth")
      
    

    

    

    
    
    println("vestorly-auth: " + vestorly-auth)
  
    
    
    

    

    

    
      val Post = params.getAs[String]("Post")
    

    
    
    println("Post: " + Post)
  
  }

  

  val getPostByIDOperation = (apiOperation[Post]("getPostByID")
      summary ""
      parameters(
        queryParam[String]("vestorly-auth").description("")
        
        
        
        
        
        ,
        
        pathParam[String]("id").description("")
        
        
        
        
        ,
        queryParam[String]("filter_by").description("").optional
        
        
        
        
        
        
        )
  )

  get("/posts/{id}",operation(getPostByIDOperation)) {
    
    
    
    

    
      
      val vestorly-auth = params.getAs[String]("vestorly-auth")
      
    

    

    

    
    
    println("vestorly-auth: " + vestorly-auth)
  
    
    
    
      val id = params.getOrElse("id", halt(400))
    

    

    

    

    
    
    println("id: " + id)
  
    
    
    

    
      
      val filter_by = params.getAs[String]("filter_by")
      
    

    

    

    
    
    println("filter_by: " + filter_by)
  
  }

  

  val updatePostByIDOperation = (apiOperation[Post]("updatePostByID")
      summary ""
      parameters(
        queryParam[String]("vestorly-auth").description("")
        
        
        
        
        
        ,
        
        pathParam[String]("id").description("")
        
        
        
        
        ,
        
        
        
        
        formParam[String]("Post").description("")
        
        
        )
  )

  put("/posts/{id}",operation(updatePostByIDOperation)) {
    
    
    
    

    
      
      val vestorly-auth = params.getAs[String]("vestorly-auth")
      
    

    

    

    
    
    println("vestorly-auth: " + vestorly-auth)
  
    
    
    
      val id = params.getOrElse("id", halt(400))
    

    

    

    

    
    
    println("id: " + id)
  
    
    
    

    

    

    
      val Post = params.getAs[String]("Post")
    

    
    
    println("Post: " + Post)
  
  }

}