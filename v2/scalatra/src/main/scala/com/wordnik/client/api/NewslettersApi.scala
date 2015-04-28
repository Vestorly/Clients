package com.wordnik.client.api

import com.wordnik.client.model.Newsletter
import com.wordnik.client.model.NewsletterInput
import com.wordnik.client.model.Newsletterresponse

import java.io.File

import org.scalatra.{ TypedParamSupport, ScalatraServlet }
import org.scalatra.swagger._
import org.json4s._
import org.json4s.JsonDSL._
import org.scalatra.json.{ JValueResult, JacksonJsonSupport }
import org.scalatra.servlet.{FileUploadSupport, MultipartConfig, SizeConstraintExceededException}

import scala.collection.JavaConverters._

class NewslettersApi (implicit val swagger: Swagger) extends ScalatraServlet 
    with FileUploadSupport
    with JacksonJsonSupport
    with SwaggerSupport {
  protected implicit val jsonFormats: Formats = DefaultFormats

  protected val applicationDescription: String = "NewslettersApi"
  override protected val applicationName: Option[String] = Some("Newsletters")

  before() {
    contentType = formats("json")
    response.headers += ("Access-Control-Allow-Origin" -> "*")
  }
  

  val findNewslettersOperation = (apiOperation[Newsletter]("findNewsletters")
      summary ""
      parameters(
        queryParam[String]("vestorly-auth").description("")
        
        
        
        
        
        
        )
  )

  get("/newsletters",operation(findNewslettersOperation)) {
    
    
    
    

    
      
      val vestorly-auth = params.getAs[String]("vestorly-auth")
      
    

    

    

    
    
    println("vestorly-auth: " + vestorly-auth)
  
  }

  

  val createNewsletterOperation = (apiOperation[Newsletterresponse]("createNewsletter")
      summary ""
      parameters(
        queryParam[String]("vestorly-auth").description("")
        
        
        
        
        
        ,
        
        
        
        bodyParam[NewsletterInput]("newsletter").description("")
        
        
        
        )
  )

  post("/newsletters",operation(createNewsletterOperation)) {
    
    
    
    

    
      
      val vestorly-auth = params.getAs[String]("vestorly-auth")
      
    

    

    

    
    
    println("vestorly-auth: " + vestorly-auth)
  
    
    
    

    

    

    

    
      val newsletter = parsedBody.extract[NewsletterInput]
    
    
    println("newsletter: " + newsletter)
  
  }

  

  val getNewsletterByIDOperation = (apiOperation[Newsletterresponse]("getNewsletterByID")
      summary ""
      parameters(
        queryParam[String]("vestorly-auth").description("")
        
        
        
        
        
        ,
        
        pathParam[String]("id").description("")
        
        
        
        
        
        )
  )

  get("/newsletters/{id}",operation(getNewsletterByIDOperation)) {
    
    
    
    

    
      
      val vestorly-auth = params.getAs[String]("vestorly-auth")
      
    

    

    

    
    
    println("vestorly-auth: " + vestorly-auth)
  
    
    
    
      val id = params.getOrElse("id", halt(400))
    

    

    

    

    
    
    println("id: " + id)
  
  }

  

  val updateNewsletterByIDOperation = (apiOperation[Newsletterresponse]("updateNewsletterByID")
      summary ""
      parameters(
        queryParam[String]("vestorly-auth").description("")
        
        
        
        
        
        ,
        
        pathParam[String]("id").description("")
        
        
        
        
        ,
        
        
        
        bodyParam[NewsletterInput]("newsletter").description("")
        
        
        
        )
  )

  put("/newsletters/{id}",operation(updateNewsletterByIDOperation)) {
    
    
    
    

    
      
      val vestorly-auth = params.getAs[String]("vestorly-auth")
      
    

    

    

    
    
    println("vestorly-auth: " + vestorly-auth)
  
    
    
    
      val id = params.getOrElse("id", halt(400))
    

    

    

    

    
    
    println("id: " + id)
  
    
    
    

    

    

    

    
      val newsletter = parsedBody.extract[NewsletterInput]
    
    
    println("newsletter: " + newsletter)
  
  }

}