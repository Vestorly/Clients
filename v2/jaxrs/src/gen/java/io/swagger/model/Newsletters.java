package io.swagger.model;

import io.swagger.model.Newsletter;
import java.util.*;

import com.wordnik.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
public class Newsletters  {
  
  private List<Newsletter> newsletters = new ArrayList<Newsletter>() ;

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("newsletters")
  public List<Newsletter> getNewsletters() {
    return newsletters;
  }
  public void setNewsletters(List<Newsletter> newsletters) {
    this.newsletters = newsletters;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Newsletters {\n");
    
    sb.append("  newsletters: ").append(newsletters).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
