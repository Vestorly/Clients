package io.swagger.client.model;

import io.swagger.client.model.Advisor;

import com.wordnik.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
public class Advisorresponse  {
  
  private Advisor advisor = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("advisor")
  public Advisor getAdvisor() {
    return advisor;
  }
  public void setAdvisor(Advisor advisor) {
    this.advisor = advisor;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Advisorresponse {\n");
    
    sb.append("  advisor: ").append(advisor).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
