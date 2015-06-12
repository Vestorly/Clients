package io.swagger.client.model;

import io.swagger.client.model.NewsletterSetting;
import java.util.*;

import com.wordnik.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class NewsletterSettings  {
  
  @SerializedName("newsletter_settings")
  private List<NewsletterSetting> newsletterSettings = new ArrayList<NewsletterSetting>() ;

  
  /**
   **/
  @ApiModelProperty(value = "")
  public List<NewsletterSetting> getNewsletterSettings() {
    return newsletterSettings;
  }
  public void setNewsletterSettings(List<NewsletterSetting> newsletterSettings) {
    this.newsletterSettings = newsletterSettings;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class NewsletterSettings {\n");
    
    sb.append("  newsletterSettings: ").append(newsletterSettings).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
