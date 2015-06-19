package vestorly.client.model;

import vestorly.client.model.NewsletterSetting;
import java.util.*;

import com.wordnik.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
public class NewsletterSettings  {
  
  private List<NewsletterSetting> newsletterSettings = new ArrayList<NewsletterSetting>() ;

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("newsletter_settings")
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
