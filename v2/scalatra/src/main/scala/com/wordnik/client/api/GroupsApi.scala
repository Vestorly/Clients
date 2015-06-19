package com.wordnik.client.api

import com.wordnik.client.model.Groups
import com.wordnik.client.model.GroupInput
import com.wordnik.client.model.Groupresponse

import java.io.File

import org.scalatra.{ TypedParamSupport, ScalatraServlet }
import org.scalatra.swagger._
import org.json4s._
import org.json4s.JsonDSL._
import org.scalatra.json.{ JValueResult, JacksonJsonSupport }
import org.scalatra.servlet.{FileUploadSupport, MultipartConfig, SizeConstraintExceededException}

import scala.collection.JavaConverters._

class GroupsApi (implicit val swagger: Swagger) extends ScalatraServlet 
    with FileUploadSupport
    with JacksonJsonSupport
    with SwaggerSupport {
  protected implicit val jsonFormats: Formats = DefaultFormats

  protected val applicationDescription: String = "GroupsApi"
  override protected val applicationName: Option[String] = Some("Groups")

  before() {
    contentType = formats("json")
    response.headers += ("Access-Control-Allow-Origin" -> "*")
  }
  

  val findGroupsOperation = (apiOperation[Groups]("findGroups")
      summary ""
      parameters(
        queryParam[String]("vestorlyAuth").description("")
        
        
        
        
        
        
        )
  )

  get("/groups",operation(findGroupsOperation)) {
    
    
    
    

    
      
      val vestorlyAuth = params.getAs[String]("vestorlyAuth")
      
    

    

    

    
    
    println("vestorlyAuth: " + vestorlyAuth)
  
  }

  

  val createGroupOperation = (apiOperation[Groupresponse]("createGroup")
      summary ""
      parameters(
        queryParam[String]("vestorlyAuth").description("")
        
        
        
        
        
        ,
        
        
        
        bodyParam[GroupInput]("group").description("")
        
        
        
        )
  )

  post("/groups",operation(createGroupOperation)) {
    
    
    
    

    
      
      val vestorlyAuth = params.getAs[String]("vestorlyAuth")
      
    

    

    

    
    
    println("vestorlyAuth: " + vestorlyAuth)
  
    
    
    

    

    

    

    
      val group = parsedBody.extract[GroupInput]
    
    
    println("group: " + group)
  
  }

  

  val findGroupByIDOperation = (apiOperation[Groupresponse]("findGroupByID")
      summary ""
      parameters(
        queryParam[String]("vestorlyAuth").description("")
        
        
        
        
        
        ,
        
        pathParam[String]("id").description("")
        
        
        
        
        
        )
  )

  get("/groups/{id}",operation(findGroupByIDOperation)) {
    
    
    
    

    
      
      val vestorlyAuth = params.getAs[String]("vestorlyAuth")
      
    

    

    

    
    
    println("vestorlyAuth: " + vestorlyAuth)
  
    
    
    
      val id = params.getOrElse("id", halt(400))
    

    

    

    

    
    
    println("id: " + id)
  
  }

  

  val updateGroupByIdOperation = (apiOperation[Groupresponse]("updateGroupById")
      summary ""
      parameters(
        queryParam[String]("vestorlyAuth").description("")
        
        
        
        
        
        ,
        
        pathParam[String]("id").description("")
        
        
        
        
        ,
        
        
        
        bodyParam[GroupInput]("group").description("")
        
        
        
        )
  )

  put("/groups/{id}",operation(updateGroupByIdOperation)) {
    
    
    
    

    
      
      val vestorlyAuth = params.getAs[String]("vestorlyAuth")
      
    

    

    

    
    
    println("vestorlyAuth: " + vestorlyAuth)
  
    
    
    
      val id = params.getOrElse("id", halt(400))
    

    

    

    

    
    
    println("id: " + id)
  
    
    
    

    

    

    

    
      val group = parsedBody.extract[GroupInput]
    
    
    println("group: " + group)
  
  }

  

  val deleteGroupOperation = (apiOperation[Groupresponse]("deleteGroup")
      summary ""
      parameters(
        queryParam[String]("vestorlyAuth").description("")
        
        
        
        
        
        ,
        
        pathParam[String]("id").description("")
        
        
        
        
        
        )
  )

  delete("/groups/{id}",operation(deleteGroupOperation)) {
    
    
    
    

    
      
      val vestorlyAuth = params.getAs[String]("vestorlyAuth")
      
    

    

    

    
    
    println("vestorlyAuth: " + vestorlyAuth)
  
    
    
    
      val id = params.getOrElse("id", halt(400))
    

    

    

    

    
    
    println("id: " + id)
  
  }

}