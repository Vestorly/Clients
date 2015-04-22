package io.swagger.model;


import com.wordnik.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
public class Advsior  {
  
  private String id = null;
  private String vestorlyAuth = null;
  private Boolean newUser = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("id")
  public String getId() {
    return id;
  }
  public void setId(String id) {
    this.id = id;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("vestorlyAuth")
  public String getVestorlyAuth() {
    return vestorlyAuth;
  }
  public void setVestorlyAuth(String vestorlyAuth) {
    this.vestorlyAuth = vestorlyAuth;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("newUser")
  public Boolean getNewUser() {
    return newUser;
  }
  public void setNewUser(Boolean newUser) {
    this.newUser = newUser;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Advsior {\n");
    
    sb.append("  id: ").append(id).append("\n");
    sb.append("  vestorlyAuth: ").append(vestorlyAuth).append("\n");
    sb.append("  newUser: ").append(newUser).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
