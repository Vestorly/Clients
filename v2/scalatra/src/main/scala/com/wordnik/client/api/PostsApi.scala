package com.wordnik.client.api

import com.wordnik.client.model.Posts
import com.wordnik.client.model.Post
import com.wordnik.client.model.PostInput
import com.wordnik.client.model.Postresponse

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
        queryParam[String]("text_query").description("").optional
        
        
        
        
        
        ,
        queryParam[String]("external_url").description("").optional
        
        
        
        
        
        ,
        queryParam[String]("is_published").description("").optional
        
        
        
        
        
        
        )
  )

  get("/posts",operation(findPostsOperation)) {
    
    
    
    

    
      
      val vestorly-auth = params.getAs[String]("vestorly-auth")
      
    

    

    

    
    
    println("vestorly-auth: " + vestorly-auth)
  
    
    
    

    
      
      val text_query = params.getAs[String]("text_query")
      
    

    

    

    
    
    println("text_query: " + text_query)
  
    
    
    

    
      
      val external_url = params.getAs[String]("external_url")
      
    

    

    

    
    
    println("external_url: " + external_url)
  
    
    
    

    
      
      val is_published = params.getAs[String]("is_published")
      
    

    

    

    
    
    println("is_published: " + is_published)
  
  }

  

  val createPostOperation = (apiOperation[Post]("createPost")
      summary ""
      parameters(
        queryParam[String]("vestorly-auth").description("")
        
        
        
        
        
        ,
        
        
        
        bodyParam[PostInput]("post").description("")
        
        
        
        )
  )

  post("/posts",operation(createPostOperation)) {
    
    
    
    

    
      
      val vestorly-auth = params.getAs[String]("vestorly-auth")
      
    

    

    

    
    
    println("vestorly-auth: " + vestorly-auth)
  
    
    
    

    

    

    

    
      val post = parsedBody.extract[PostInput]
    
    
    println("post: " + post)
  
  }

  

  val getPostByIDOperation = (apiOperation[Postresponse]("getPostByID")
      summary ""
      parameters(
        queryParam[String]("vestorly-auth").description("")
        
        
        
        
        
        ,
        
        pathParam[String]("id").description("")
        
        
        
        
        
        )
  )

  get("/posts/{id}",operation(getPostByIDOperation)) {
    
    
    
    

    
      
      val vestorly-auth = params.getAs[String]("vestorly-auth")
      
    

    

    

    
    
    println("vestorly-auth: " + vestorly-auth)
  
    
    
    
      val id = params.getOrElse("id", halt(400))
    

    

    

    

    
    
    println("id: " + id)
  
  }

  

  val updatePostByIDOperation = (apiOperation[Postresponse]("updatePostByID")
      summary ""
      parameters(
        queryParam[String]("vestorly-auth").description("")
        
        
        
        
        
        ,
        
        pathParam[String]("id").description("")
        
        
        
        
        ,
        
        
        
        bodyParam[PostInput]("post").description("")
        
        
        
        )
  )

  put("/posts/{id}",operation(updatePostByIDOperation)) {
    
    
    
    

    
      
      val vestorly-auth = params.getAs[String]("vestorly-auth")
      
    

    

    

    
    
    println("vestorly-auth: " + vestorly-auth)
  
    
    
    
      val id = params.getOrElse("id", halt(400))
    

    

    

    

    
    
    println("id: " + id)
  
    
    
    

    

    

    

    
      val post = parsedBody.extract[PostInput]
    
    
    println("post: " + post)
  
  }

}