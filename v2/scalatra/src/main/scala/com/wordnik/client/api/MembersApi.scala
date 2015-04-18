package com.wordnik.client.api

import com.wordnik.client.model.Members
import com.wordnik.client.model.Member

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
  

  val findMembersOperation = (apiOperation[Members]("findMembers")
      summary ""
      parameters(
        queryParam[String]("vestorly_auth").description("")
        
        
        
        
        
        
        )
  )

  get("/members",operation(findMembersOperation)) {
    
    
    
    

    
      
      val vestorly_auth = params.getAs[String]("vestorly_auth")
      
    

    

    

    
    
    println("vestorly_auth: " + vestorly_auth)
  
  }

  

  val findMemberByIDOperation = (apiOperation[Member]("findMemberByID")
      summary ""
      parameters(
        
        pathParam[String]("id").description("")
        
        
        
        
        ,
        queryParam[String]("vestorly_auth").description("")
        
        
        
        
        
        
        )
  )

  get("/members/{id}",operation(findMemberByIDOperation)) {
    
    
    
    
      val id = params.getOrElse("id", halt(400))
    

    

    

    

    
    
    println("id: " + id)
  
    
    
    

    
      
      val vestorly_auth = params.getAs[String]("vestorly_auth")
      
    

    

    

    
    
    println("vestorly_auth: " + vestorly_auth)
  
  }

  

  val findMemberByID_1Operation = (apiOperation[Member]("findMemberByID_1")
      summary ""
      parameters(
        
        pathParam[String]("id").description("")
        
        
        
        
        ,
        queryParam[String]("vestorly_auth").description("")
        
        
        
        
        
        
        )
  )

  put("/members/{id}",operation(findMemberByID_1Operation)) {
    
    
    
    
      val id = params.getOrElse("id", halt(400))
    

    

    

    

    
    
    println("id: " + id)
  
    
    
    

    
      
      val vestorly_auth = params.getAs[String]("vestorly_auth")
      
    

    

    

    
    
    println("vestorly_auth: " + vestorly_auth)
  
  }

}