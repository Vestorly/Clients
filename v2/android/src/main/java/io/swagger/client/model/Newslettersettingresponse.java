package io.swagger.client.model;

import io.swagger.client.model.NewsletterSetting;

import com.wordnik.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class Newslettersettingresponse  {
  
  @SerializedName("newsletter_setting")
  private NewsletterSetting newsletterSetting = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  public NewsletterSetting getNewsletterSetting() {
    return newsletterSetting;
  }
  public void setNewsletterSetting(NewsletterSetting newsletterSetting) {
    this.newsletterSetting = newsletterSetting;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Newslettersettingresponse {\n");
    
    sb.append("  newsletterSetting: ").append(newsletterSetting).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
