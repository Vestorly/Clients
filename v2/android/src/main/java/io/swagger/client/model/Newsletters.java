package io.swagger.client.model;

import io.swagger.client.model.Newsletter;
import java.util.*;

import com.wordnik.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class Newsletters  {
  
  @SerializedName("newsletters")
  private List<Newsletter> newsletters = new ArrayList<Newsletter>() ;

  
  /**
   **/
  @ApiModelProperty(value = "")
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
