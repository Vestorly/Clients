package io.swagger.client.model;

import io.swagger.client.model.Advisor;
import java.util.*;

import com.wordnik.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class Advisors  {
  
  @SerializedName("advisors")
  private List<Advisor> advisors = new ArrayList<Advisor>() ;

  
  /**
   **/
  @ApiModelProperty(value = "")
  public List<Advisor> getAdvisors() {
    return advisors;
  }
  public void setAdvisors(List<Advisor> advisors) {
    this.advisors = advisors;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Advisors {\n");
    
    sb.append("  advisors: ").append(advisors).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
