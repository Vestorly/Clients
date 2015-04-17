package com.wordnik.client.api

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
  

  val createPostOperation = (apiOperation[Post]("createPost")
      summary ""
      parameters(
        
        
        
        
        formParam[String]("Post").description("")
        
        
        )
  )

  post("/posts",operation(createPostOperation)) {
    
    
    
    

    

    

    
      val Post = params.getAs[String]("Post")
    

    
    
    println("Post: " + Post)
  
  }

}