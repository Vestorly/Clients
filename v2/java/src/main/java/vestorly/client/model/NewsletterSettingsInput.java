package vestorly.client.model;

import vestorly.client.model.NewsletterSetting;

import com.wordnik.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
public class NewsletterSettingsInput  {
  
  private NewsletterSetting newsletterSetting = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("newsletter_setting")
  public NewsletterSetting getNewsletterSetting() {
    return newsletterSetting;
  }
  public void setNewsletterSetting(NewsletterSetting newsletterSetting) {
    this.newsletterSetting = newsletterSetting;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class NewsletterSettingsInput {\n");
    
    sb.append("  newsletterSetting: ").append(newsletterSetting).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
