package com.wordnik.client.api

import com.wordnik.client.model.NewsletterSettings
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
  

  val findNewsletterSettingsOperation = (apiOperation[NewsletterSettings]("findNewsletterSettings")
      summary ""
      parameters(
        queryParam[String]("vestorlyAuth").description("")
        
        
        
        
        
        
        )
  )

  get("/newsletter_settings",operation(findNewsletterSettingsOperation)) {
    
    
    
    

    
      
      val vestorlyAuth = params.getAs[String]("vestorlyAuth")
      
    

    

    

    
    
    println("vestorlyAuth: " + vestorlyAuth)
  
  }

  

  val findNewsletterSettingsByIDOperation = (apiOperation[Newslettersettingresponse]("findNewsletterSettingsByID")
      summary ""
      parameters(
        
        pathParam[String]("id").description("")
        
        
        
        
        ,
        queryParam[String]("vestorlyAuth").description("")
        
        
        
        
        
        
        )
  )

  get("/newsletter_settings/{id}",operation(findNewsletterSettingsByIDOperation)) {
    
    
    
    
      val id = params.getOrElse("id", halt(400))
    

    

    

    

    
    
    println("id: " + id)
  
    
    
    

    
      
      val vestorlyAuth = params.getAs[String]("vestorlyAuth")
      
    

    

    

    
    
    println("vestorlyAuth: " + vestorlyAuth)
  
  }

  

  val updateNewsletterSettingsByIDOperation = (apiOperation[Newslettersettingresponse]("updateNewsletterSettingsByID")
      summary ""
      parameters(
        
        pathParam[String]("id").description("")
        
        
        
        
        ,
        queryParam[String]("vestorlyAuth").description("")
        
        
        
        
        
        ,
        
        
        
        bodyParam[NewsletterSettingsInput]("newsletterSetting").description("")
        
        
        
        )
  )

  put("/newsletter_settings/{id}",operation(updateNewsletterSettingsByIDOperation)) {
    
    
    
    
      val id = params.getOrElse("id", halt(400))
    

    

    

    

    
    
    println("id: " + id)
  
    
    
    

    
      
      val vestorlyAuth = params.getAs[String]("vestorlyAuth")
      
    

    

    

    
    
    println("vestorlyAuth: " + vestorlyAuth)
  
    
    
    

    

    

    

    
      val newsletterSetting = parsedBody.extract[NewsletterSettingsInput]
    
    
    println("newsletterSetting: " + newsletterSetting)
  
  }

}