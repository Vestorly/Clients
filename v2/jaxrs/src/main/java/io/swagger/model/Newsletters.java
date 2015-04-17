package io.swagger.model;

import io.swagger.model.Newsletter;
import java.util.*;

import com.wordnik.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
public class Newsletters  {
  
  private List<Newsletter> newletters = new ArrayList<Newsletter>() ;

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("newletters")
  public List<Newsletter> getNewletters() {
    return newletters;
  }
  public void setNewletters(List<Newsletter> newletters) {
    this.newletters = newletters;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Newsletters {\n");
    
    sb.append("  newletters: ").append(newletters).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
