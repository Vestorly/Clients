package com.wordnik.client.api

import com.wordnik.client.model.Posts
import com.wordnik.client.model.PostInput
import com.wordnik.client.model.Postresponse
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
        queryParam[String]("vestorlyAuth").description("")
        
        
        
        
        
        ,
        queryParam[String]("textQuery").description("").optional
        
        
        
        
        
        ,
        queryParam[String]("externalUrl").description("").optional
        
        
        
        
        
        ,
        queryParam[String]("isPublished").description("").optional
        
        
        
        
        
        
        )
  )

  get("/posts",operation(findPostsOperation)) {
    
    
    
    

    
      
      val vestorlyAuth = params.getAs[String]("vestorlyAuth")
      
    

    

    

    
    
    println("vestorlyAuth: " + vestorlyAuth)
  
    
    
    

    
      
      val textQuery = params.getAs[String]("textQuery")
      
    

    

    

    
    
    println("textQuery: " + textQuery)
  
    
    
    

    
      
      val externalUrl = params.getAs[String]("externalUrl")
      
    

    

    

    
    
    println("externalUrl: " + externalUrl)
  
    
    
    

    
      
      val isPublished = params.getAs[String]("isPublished")
      
    

    

    

    
    
    println("isPublished: " + isPublished)
  
  }

  

  val createPostOperation = (apiOperation[Postresponse]("createPost")
      summary ""
      parameters(
        queryParam[String]("vestorlyAuth").description("")
        
        
        
        
        
        ,
        
        
        
        bodyParam[PostInput]("post").description("")
        
        
        
        )
  )

  post("/posts",operation(createPostOperation)) {
    
    
    
    

    
      
      val vestorlyAuth = params.getAs[String]("vestorlyAuth")
      
    

    

    

    
    
    println("vestorlyAuth: " + vestorlyAuth)
  
    
    
    

    

    

    

    
      val post = parsedBody.extract[PostInput]
    
    
    println("post: " + post)
  
  }

  

  val getPostByIDOperation = (apiOperation[Postresponse]("getPostByID")
      summary ""
      parameters(
        queryParam[String]("vestorlyAuth").description("")
        
        
        
        
        
        ,
        
        pathParam[String]("id").description("")
        
        
        
        
        
        )
  )

  get("/posts/{id}",operation(getPostByIDOperation)) {
    
    
    
    

    
      
      val vestorlyAuth = params.getAs[String]("vestorlyAuth")
      
    

    

    

    
    
    println("vestorlyAuth: " + vestorlyAuth)
  
    
    
    
      val id = params.getOrElse("id", halt(400))
    

    

    

    

    
    
    println("id: " + id)
  
  }

  

  val updatePostByIDOperation = (apiOperation[Postresponse]("updatePostByID")
      summary ""
      parameters(
        queryParam[String]("vestorlyAuth").description("")
        
        
        
        
        
        ,
        
        pathParam[String]("id").description("")
        
        
        
        
        ,
        
        
        
        bodyParam[Post]("post").description("")
        
        
        
        )
  )

  put("/posts/{id}",operation(updatePostByIDOperation)) {
    
    
    
    

    
      
      val vestorlyAuth = params.getAs[String]("vestorlyAuth")
      
    

    

    

    
    
    println("vestorlyAuth: " + vestorlyAuth)
  
    
    
    
      val id = params.getOrElse("id", halt(400))
    

    

    

    

    
    
    println("id: " + id)
  
    
    
    

    

    

    

    
      val post = parsedBody.extract[Post]
    
    
    println("post: " + post)
  
  }

}