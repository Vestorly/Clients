package io.swagger.client.model;


import com.wordnik.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class User  {
  
  @SerializedName("_id")
  private String id = null;
  @SerializedName("company")
  private String company = null;
  @SerializedName("picture_url")
  private String pictureUrl = null;
  @SerializedName("website")
  private String website = null;
  @SerializedName("user_type")
  private String userType = null;
  @SerializedName("slug")
  private String slug = null;
  @SerializedName("name")
  private String name = null;
  @SerializedName("username")
  private String username = null;
  @SerializedName("first_name")
  private String firstName = null;
  @SerializedName("last_name")
  private String lastName = null;
  @SerializedName("new_user")
  private Boolean newUser = null;
  @SerializedName("show_tour")
  private Boolean showTour = null;
  @SerializedName("plan_setup")
  private Boolean planSetup = null;
  @SerializedName("plan_expired")
  private Boolean planExpired = null;
  @SerializedName("plan_status")
  private String planStatus = null;
  @SerializedName("plan_id")
  private String planId = null;
  @SerializedName("plan_stripe")
  private Boolean planStripe = null;

  
  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public String getId() {
    return id;
  }
  public void setId(String id) {
    this.id = id;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getCompany() {
    return company;
  }
  public void setCompany(String company) {
    this.company = company;
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
  public String getWebsite() {
    return website;
  }
  public void setWebsite(String website) {
    this.website = website;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getUserType() {
    return userType;
  }
  public void setUserType(String userType) {
    this.userType = userType;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getSlug() {
    return slug;
  }
  public void setSlug(String slug) {
    this.slug = slug;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getName() {
    return name;
  }
  public void setName(String name) {
    this.name = name;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getUsername() {
    return username;
  }
  public void setUsername(String username) {
    this.username = username;
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
  public Boolean getNewUser() {
    return newUser;
  }
  public void setNewUser(Boolean newUser) {
    this.newUser = newUser;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getShowTour() {
    return showTour;
  }
  public void setShowTour(Boolean showTour) {
    this.showTour = showTour;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getPlanSetup() {
    return planSetup;
  }
  public void setPlanSetup(Boolean planSetup) {
    this.planSetup = planSetup;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getPlanExpired() {
    return planExpired;
  }
  public void setPlanExpired(Boolean planExpired) {
    this.planExpired = planExpired;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getPlanStatus() {
    return planStatus;
  }
  public void setPlanStatus(String planStatus) {
    this.planStatus = planStatus;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getPlanId() {
    return planId;
  }
  public void setPlanId(String planId) {
    this.planId = planId;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getPlanStripe() {
    return planStripe;
  }
  public void setPlanStripe(Boolean planStripe) {
    this.planStripe = planStripe;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class User {\n");
    
    sb.append("  id: ").append(id).append("\n");
    sb.append("  company: ").append(company).append("\n");
    sb.append("  pictureUrl: ").append(pictureUrl).append("\n");
    sb.append("  website: ").append(website).append("\n");
    sb.append("  userType: ").append(userType).append("\n");
    sb.append("  slug: ").append(slug).append("\n");
    sb.append("  name: ").append(name).append("\n");
    sb.append("  username: ").append(username).append("\n");
    sb.append("  firstName: ").append(firstName).append("\n");
    sb.append("  lastName: ").append(lastName).append("\n");
    sb.append("  newUser: ").append(newUser).append("\n");
    sb.append("  showTour: ").append(showTour).append("\n");
    sb.append("  planSetup: ").append(planSetup).append("\n");
    sb.append("  planExpired: ").append(planExpired).append("\n");
    sb.append("  planStatus: ").append(planStatus).append("\n");
    sb.append("  planId: ").append(planId).append("\n");
    sb.append("  planStripe: ").append(planStripe).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
