package io.swagger.model;

import io.swagger.model.NewsletterSetting;

import com.wordnik.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
public class Newslettersettingresponse  {
  
  private NewsletterSetting newsletterSetting = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("newsletterSetting")
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
