package com.wordnik.client.api

import com.wordnik.client.model.Newslettersettings
import com.wordnik.client.model.Newslettersettingresponse
import com.wordnik.client.model.NewsletterSettingsInput

import java.io.File

import org.scalatra.{ TypedParamSupport, ScalatraServlet }
import org.scalatra.swagger._
import org.json4s._
import org.json4s.JsonDSL._
import org.scalatra.json.{ JValueResult, JacksonJsonSupport }
import org.scalatra.servlet.{FileUploadSupport, MultipartConfig, SizeConstraintExceededException}

import scala.collection.JavaConverters._

class NewslettersettingsApi (implicit val swagger: Swagger) extends ScalatraServlet 
    with FileUploadSupport
    with JacksonJsonSupport
    with SwaggerSupport {
  protected implicit val jsonFormats: Formats = DefaultFormats

  protected val applicationDescription: String = "NewslettersettingsApi"
  override protected val applicationName: Option[String] = Some("Newslettersettings")

  before() {
    contentType = formats("json")
    response.headers += ("Access-Control-Allow-Origin" -> "*")
  }
  

  val findNewsletterSettingsOperation = (apiOperation[Newslettersettings]("findNewsletterSettings")
      summary ""
      parameters(
        queryParam[String]("vestorly-auth").description("")
        
        
        
        
        
        
        )
  )

  get("/newsletter_settings",operation(findNewsletterSettingsOperation)) {
    
    
    
    

    
      
      val vestorly-auth = params.getAs[String]("vestorly-auth")
      
    

    

    

    
    
    println("vestorly-auth: " + vestorly-auth)
  
  }

  

  val findNewsletterSettingsByIDOperation = (apiOperation[Newslettersettingresponse]("findNewsletterSettingsByID")
      summary ""
      parameters(
        
        pathParam[String]("id").description("")
        
        
        
        
        ,
        queryParam[String]("vestorly-auth").description("")
        
        
        
        
        
        
        )
  )

  get("/newsletter_settings/{id}",operation(findNewsletterSettingsByIDOperation)) {
    
    
    
    
      val id = params.getOrElse("id", halt(400))
    

    

    

    

    
    
    println("id: " + id)
  
    
    
    

    
      
      val vestorly-auth = params.getAs[String]("vestorly-auth")
      
    

    

    

    
    
    println("vestorly-auth: " + vestorly-auth)
  
  }

  

  val updateNewsletterSettingsByIDOperation = (apiOperation[Newslettersettingresponse]("updateNewsletterSettingsByID")
      summary ""
      parameters(
        
        pathParam[String]("id").description("")
        
        
        
        
        ,
        queryParam[String]("vestorly-auth").description("")
        
        
        
        
        
        ,
        
        
        
        bodyParam[NewsletterSettingsInput]("newsletter_setting").description("")
        
        
        
        )
  )

  put("/newsletter_settings/{id}",operation(updateNewsletterSettingsByIDOperation)) {
    
    
    
    
      val id = params.getOrElse("id", halt(400))
    

    

    

    

    
    
    println("id: " + id)
  
    
    
    

    
      
      val vestorly-auth = params.getAs[String]("vestorly-auth")
      
    

    

    

    
    
    println("vestorly-auth: " + vestorly-auth)
  
    
    
    

    

    

    

    
      val newsletter_setting = parsedBody.extract[NewsletterSettingsInput]
    
    
    println("newsletter_setting: " + newsletter_setting)
  
  }

}