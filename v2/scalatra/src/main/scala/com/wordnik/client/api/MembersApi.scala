package com.wordnik.client.api

import com.wordnik.client.model.Members
import com.wordnik.client.model.Member
import com.wordnik.client.model.Memberresponse

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
        queryParam[String]("vestorlyAuth").description("")
        
        
        
        
        
        
        )
  )

  get("/members",operation(findMembersOperation)) {
    
    
    
    

    
      
      val vestorlyAuth = params.getAs[String]("vestorlyAuth")
      
    

    

    

    
    
    println("vestorlyAuth: " + vestorlyAuth)
  
  }

  

  val createMemberOperation = (apiOperation[Memberresponse]("createMember")
      summary ""
      parameters(
        queryParam[String]("vestorlyAuth").description("")
        
        
        
        
        
        ,
        
        
        
        bodyParam[Member]("member").description("")
        
        
        
        )
  )

  post("/members",operation(createMemberOperation)) {
    
    
    
    

    
      
      val vestorlyAuth = params.getAs[String]("vestorlyAuth")
      
    

    

    

    
    
    println("vestorlyAuth: " + vestorlyAuth)
  
    
    
    

    

    

    

    
      val member = parsedBody.extract[Member]
    
    
    println("member: " + member)
  
  }

  

  val findMemberByIDOperation = (apiOperation[Memberresponse]("findMemberByID")
      summary ""
      parameters(
        
        pathParam[String]("id").description("")
        
        
        
        
        ,
        queryParam[String]("vestorlyAuth").description("")
        
        
        
        
        
        
        )
  )

  get("/members/{id}",operation(findMemberByIDOperation)) {
    
    
    
    
      val id = params.getOrElse("id", halt(400))
    

    

    

    

    
    
    println("id: " + id)
  
    
    
    

    
      
      val vestorlyAuth = params.getAs[String]("vestorlyAuth")
      
    

    

    

    
    
    println("vestorlyAuth: " + vestorlyAuth)
  
  }

  

  val updateMemberByIDOperation = (apiOperation[Memberresponse]("updateMemberByID")
      summary ""
      parameters(
        
        pathParam[String]("id").description("")
        
        
        
        
        ,
        queryParam[String]("vestorlyAuth").description("")
        
        
        
        
        
        ,
        
        
        
        bodyParam[Member]("member").description("")
        
        
        
        )
  )

  put("/members/{id}",operation(updateMemberByIDOperation)) {
    
    
    
    
      val id = params.getOrElse("id", halt(400))
    

    

    

    

    
    
    println("id: " + id)
  
    
    
    

    
      
      val vestorlyAuth = params.getAs[String]("vestorlyAuth")
      
    

    

    

    
    
    println("vestorlyAuth: " + vestorlyAuth)
  
    
    
    

    

    

    

    
      val member = parsedBody.extract[Member]
    
    
    println("member: " + member)
  
  }

}