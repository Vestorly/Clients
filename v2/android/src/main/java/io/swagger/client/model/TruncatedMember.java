package io.swagger.client.model;


import com.wordnik.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class TruncatedMember  {
  
  @SerializedName("_id")
  private String id = null;
  @SerializedName("first_name")
  private String firstName = null;
  @SerializedName("last_name")
  private String lastName = null;
  @SerializedName("email")
  private String email = null;
  @SerializedName("picture_url")
  private String pictureUrl = null;
  @SerializedName("added_on")
  private String addedOn = null;

  
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
  public String getFirstName() {
    return firstName;
  }
  public void setFirstName(String firstName) {
    this.firstName = firstName;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getLastName() {
    return lastName;
  }
  public void setLastName(String lastName) {
    this.lastName = lastName;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getEmail() {
    return email;
  }
  public void setEmail(String email) {
    this.email = email;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getPictureUrl() {
    return pictureUrl;
  }
  public void setPictureUrl(String pictureUrl) {
    this.pictureUrl = pictureUrl;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getAddedOn() {
    return addedOn;
  }
  public void setAddedOn(String addedOn) {
    this.addedOn = addedOn;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class TruncatedMember {\n");
    
    sb.append("  id: ").append(id).append("\n");
    sb.append("  firstName: ").append(firstName).append("\n");
    sb.append("  lastName: ").append(lastName).append("\n");
    sb.append("  email: ").append(email).append("\n");
    sb.append("  pictureUrl: ").append(pictureUrl).append("\n");
    sb.append("  addedOn: ").append(addedOn).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
