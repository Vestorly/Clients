package com.wordnik.client.api

import com.wordnik.client.model.Groups
import com.wordnik.client.model.Group
import com.wordnik.client.model.GroupInput
import com.wordnik.client.model.ErrorModel

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
        queryParam[String]("vestorly_auth").description("")
        
        
        
        
        
        
        )
  )

  get("/groups",operation(findGroupsOperation)) {
    
    
    
    

    
      
      val vestorly_auth = params.getAs[String]("vestorly_auth")
      
    

    

    

    
    
    println("vestorly_auth: " + vestorly_auth)
  
  }

  

  val findGroupByIDOperation = (apiOperation[Group]("findGroupByID")
      summary ""
      parameters(
        queryParam[String]("vestorly_auth").description("")
        
        
        
        
        
        ,
        
        pathParam[String]("id").description("")
        
        
        
        
        
        )
  )

  get("/groups/{id}",operation(findGroupByIDOperation)) {
    
    
    
    

    
      
      val vestorly_auth = params.getAs[String]("vestorly_auth")
      
    

    

    

    
    
    println("vestorly_auth: " + vestorly_auth)
  
    
    
    
      val id = params.getOrElse("id", halt(400))
    

    

    

    

    
    
    println("id: " + id)
  
  }

  

  val addGroupOperation = (apiOperation[GroupInput]("addGroup")
      summary ""
      parameters(
        
        
        
        bodyParam[Group]("group").description("")
        
        
        
        )
  )

  put("/groups/{id}",operation(addGroupOperation)) {
    
    
    
    

    

    

    

    
      val group = parsedBody.extract[Group]
    
    
    println("group: " + group)
  
  }

  

  val addGroup_1Operation = (apiOperation[GroupInput]("addGroup_1")
      summary ""
      parameters(
        
        
        
        bodyParam[Group]("group").description("")
        
        
        
        )
  )

  post("/groups/{id}",operation(addGroup_1Operation)) {
    
    
    
    

    

    

    

    
      val group = parsedBody.extract[Group]
    
    
    println("group: " + group)
  
  }

  

  val deleteGroupOperation = (apiOperation[GroupInput]("deleteGroup")
      summary ""
      parameters(
        
        
        
        bodyParam[Group]("group").description("")
        
        
        
        )
  )

  delete("/groups/{id}",operation(deleteGroupOperation)) {
    
    
    
    

    

    

    

    
      val group = parsedBody.extract[Group]
    
    
    println("group: " + group)
  
  }

}