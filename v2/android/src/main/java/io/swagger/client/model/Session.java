package io.swagger.client.model;

import io.swagger.client.model.User;
import io.swagger.client.model.Settings;

import com.wordnik.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
public class Session  {
  
  private String id = null;
  private String vestorlyAuth = null;
  private Boolean newUser = null;
  private User currentUser = null;
  private Settings settings = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("_id")
  public String getId() {
    return id;
  }
  public void setId(String id) {
    this.id = id;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("vestorly-auth")
  public String getVestorlyAuth() {
    return vestorlyAuth;
  }
  public void setVestorlyAuth(String vestorlyAuth) {
    this.vestorlyAuth = vestorlyAuth;
  }

  
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

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("current_user")
  public User getCurrentUser() {
    return currentUser;
  }
  public void setCurrentUser(User currentUser) {
    this.currentUser = currentUser;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("settings")
  public Settings getSettings() {
    return settings;
  }
  public void setSettings(Settings settings) {
    this.settings = settings;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Session {\n");
    
    sb.append("  id: ").append(id).append("\n");
    sb.append("  vestorlyAuth: ").append(vestorlyAuth).append("\n");
    sb.append("  newUser: ").append(newUser).append("\n");
    sb.append("  currentUser: ").append(currentUser).append("\n");
    sb.append("  settings: ").append(settings).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
