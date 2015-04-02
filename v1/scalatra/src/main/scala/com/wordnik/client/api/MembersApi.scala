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

class MembersApi (implicit val swagger: Swagger) extends ScalatraServlet 
    with FileUploadSupport
    with JacksonJsonSupport
    with SwaggerSupport {
  protected implicit val jsonFormats: Formats = DefaultFormats

  protected val applicationDescription: String = "MembersApi"
  override protected val applicationName: Option[String] = Some("Members")

  before() {
    contentType = formats("json")
    response.headers += ("Access-Control-Allow-Origin" -> "*")
  }
  

  val indexOperation = (apiOperation[Void]("index")
      summary "Read member lead data"
      parameters(
        queryParam[String]("vestorly-auth").description("")
        
        
        
        
        
        ,
        
        pathParam[String]("advisor_id").description("")
        
        
        
        
        ,
        queryParam[String]("search").description("").optional
        
        
        
        
        
        ,
        queryParam[String]("sorted_by").description("").optional
        
        
        
        
        
        ,
        queryParam[String]("sorted_order").description("").optional
        
        
        
        
        
        
        )
  )

  get("api/advisors/{advisor_id}/members.json",operation(indexOperation)) {
    
    
    
    

    
      
      val vestorly-auth = params.getAs[String]("vestorly-auth")
      
    

    

    

    
    
    println("vestorly-auth: " + vestorly-auth)
  
    
    
    
      val advisor_id = params.getOrElse("advisor_id", halt(400))
    

    

    

    

    
    
    println("advisor_id: " + advisor_id)
  
    
    
    

    
      
      val search = params.getAs[String]("search")
      
    

    

    

    
    
    println("search: " + search)
  
    
    
    

    
      
      val sorted_by = params.getAs[String]("sorted_by")
      
    

    

    

    
    
    println("sorted_by: " + sorted_by)
  
    
    
    

    
      
      val sorted_order = params.getAs[String]("sorted_order")
      
    

    

    

    
    
    println("sorted_order: " + sorted_order)
  
  }

  

  val createOperation = (apiOperation[Void]("create")
      summary "Create a member"
      parameters(
        queryParam[String]("vestorly-auth").description("")
        
        
        
        
        
        ,
        
        pathParam[String]("advisor_id").description("")
        
        
        
        
        ,
        
        
        
        
        formParam[String]("member").description("")
        
        
        )
  )

  post("api/advisors/{advisor_id}/members.json",operation(createOperation)) {
    
    
    
    

    
      
      val vestorly-auth = params.getAs[String]("vestorly-auth")
      
    

    

    

    
    
    println("vestorly-auth: " + vestorly-auth)
  
    
    
    
      val advisor_id = params.getOrElse("advisor_id", halt(400))
    

    

    

    

    
    
    println("advisor_id: " + advisor_id)
  
    
    
    

    

    

    
      val member = params.getAs[String]("member")
    

    
    
    println("member: " + member)
  
  }

  

  val showOperation = (apiOperation[Void]("show")
      summary "Read a specific member"
      parameters(
        queryParam[String]("vestorly-auth").description("")
        
        
        
        
        
        ,
        
        pathParam[String]("advisor_id").description("")
        
        
        
        
        ,
        
        pathParam[String]("id").description("")
        
        
        
        
        
        )
  )

  get("api/advisors/{advisor_id}/members/{id}.json",operation(showOperation)) {
    
    
    
    

    
      
      val vestorly-auth = params.getAs[String]("vestorly-auth")
      
    

    

    

    
    
    println("vestorly-auth: " + vestorly-auth)
  
    
    
    
      val advisor_id = params.getOrElse("advisor_id", halt(400))
    

    

    

    

    
    
    println("advisor_id: " + advisor_id)
  
    
    
    
      val id = params.getOrElse("id", halt(400))
    

    

    

    

    
    
    println("id: " + id)
  
  }

  

  val updateOperation = (apiOperation[Void]("update")
      summary "Update a member"
      parameters(
        queryParam[String]("vestorly-auth").description("")
        
        
        
        
        
        ,
        
        pathParam[String]("advisor_id").description("")
        
        
        
        
        ,
        
        pathParam[String]("id").description("")
        
        
        
        
        ,
        
        
        
        
        formParam[String]("member").description("")
        
        
        )
  )

  put("api/advisors/{advisor_id}/members/{id}.json",operation(updateOperation)) {
    
    
    
    

    
      
      val vestorly-auth = params.getAs[String]("vestorly-auth")
      
    

    

    

    
    
    println("vestorly-auth: " + vestorly-auth)
  
    
    
    
      val advisor_id = params.getOrElse("advisor_id", halt(400))
    

    

    

    

    
    
    println("advisor_id: " + advisor_id)
  
    
    
    
      val id = params.getOrElse("id", halt(400))
    

    

    

    

    
    
    println("id: " + id)
  
    
    
    

    

    

    
      val member = params.getAs[String]("member")
    

    
    
    println("member: " + member)
  
  }

  

  val destroyOperation = (apiOperation[Void]("destroy")
      summary "Deletes a member"
      parameters(
        queryParam[String]("vestorly-auth").description("")
        
        
        
        
        
        ,
        
        pathParam[String]("advisor_id").description("")
        
        
        
        
        ,
        
        pathParam[String]("id").description("")
        
        
        
        
        
        )
  )

  delete("api/advisors/{advisor_id}/members/{id}.json",operation(destroyOperation)) {
    
    
    
    

    
      
      val vestorly-auth = params.getAs[String]("vestorly-auth")
      
    

    

    

    
    
    println("vestorly-auth: " + vestorly-auth)
  
    
    
    
      val advisor_id = params.getOrElse("advisor_id", halt(400))
    

    

    

    

    
    
    println("advisor_id: " + advisor_id)
  
    
    
    
      val id = params.getOrElse("id", halt(400))
    

    

    

    

    
    
    println("id: " + id)
  
  }

}