package io.swagger.client.model;

import io.swagger.client.model.NewsletterSetting;
import java.util.*;

import com.wordnik.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
public class Newslettersettings  {
  
  private List<NewsletterSetting> newletterSettings = new ArrayList<NewsletterSetting>() ;

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("newletter_settings")
  public List<NewsletterSetting> getNewletterSettings() {
    return newletterSettings;
  }
  public void setNewletterSettings(List<NewsletterSetting> newletterSettings) {
    this.newletterSettings = newletterSettings;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Newslettersettings {\n");
    
    sb.append("  newletterSettings: ").append(newletterSettings).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
