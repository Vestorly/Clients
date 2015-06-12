package io.swagger.client.model;

import io.swagger.client.model.User;
import io.swagger.client.model.Settings;

import com.wordnik.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class Session  {
  
  @SerializedName("_id")
  private String id = null;
  @SerializedName("vestorly-auth")
  private String vestorlyAuth = null;
  @SerializedName("new_user")
  private Boolean newUser = null;
  @SerializedName("current_user")
  private User currentUser = null;
  @SerializedName("settings")
  private Settings settings = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getId() {
    return id;
  }
  public void setId(String id) {
    this.id = id;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getVestorlyAuth() {
    return vestorlyAuth;
  }
  public void setVestorlyAuth(String vestorlyAuth) {
    this.vestorlyAuth = vestorlyAuth;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getNewUser() {
    return newUser;
  }
  public void setNewUser(Boolean newUser) {
    this.newUser = newUser;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public User getCurrentUser() {
    return currentUser;
  }
  public void setCurrentUser(User currentUser) {
    this.currentUser = currentUser;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
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
