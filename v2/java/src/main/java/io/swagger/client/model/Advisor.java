package io.swagger.client.model;


import com.wordnik.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
public class Advisor  {
  
  private Boolean newUser = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("new_user")
  public Boolean getNewUser() {
    return newUser;
  }
  public void setNewUser(Boolean newUser) {
    this.newUser = newUser;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Advisor {\n");
    
    sb.append("  newUser: ").append(newUser).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
