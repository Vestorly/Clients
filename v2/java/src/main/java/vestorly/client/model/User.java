package vestorly.client.model;


import com.wordnik.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
public class User  {
  
  private String id = null;
  private String company = null;
  private String pictureUrl = null;
  private String website = null;
  private String userType = null;
  private String slug = null;
  private String name = null;
  private String username = null;
  private String firstName = null;
  private String lastName = null;
  private Boolean newUser = null;
  private Boolean showTour = null;
  private Boolean planSetup = null;
  private Boolean planExpired = null;
  private String planStatus = null;
  private String planId = null;
  private Boolean planStripe = null;

  
  /**
   **/
  @ApiModelProperty(required = true, value = "")
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
  @JsonProperty("company")
  public String getCompany() {
    return company;
  }
  public void setCompany(String company) {
    this.company = company;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("picture_url")
  public String getPictureUrl() {
    return pictureUrl;
  }
  public void setPictureUrl(String pictureUrl) {
    this.pictureUrl = pictureUrl;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("website")
  public String getWebsite() {
    return website;
  }
  public void setWebsite(String website) {
    this.website = website;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("user_type")
  public String getUserType() {
    return userType;
  }
  public void setUserType(String userType) {
    this.userType = userType;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("slug")
  public String getSlug() {
    return slug;
  }
  public void setSlug(String slug) {
    this.slug = slug;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("name")
  public String getName() {
    return name;
  }
  public void setName(String name) {
    this.name = name;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("username")
  public String getUsername() {
    return username;
  }
  public void setUsername(String username) {
    this.username = username;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("first_name")
  public String getFirstName() {
    return firstName;
  }
  public void setFirstName(String firstName) {
    this.firstName = firstName;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("last_name")
  public String getLastName() {
    return lastName;
  }
  public void setLastName(String lastName) {
    this.lastName = lastName;
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
  @JsonProperty("show_tour")
  public Boolean getShowTour() {
    return showTour;
  }
  public void setShowTour(Boolean showTour) {
    this.showTour = showTour;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("plan_setup")
  public Boolean getPlanSetup() {
    return planSetup;
  }
  public void setPlanSetup(Boolean planSetup) {
    this.planSetup = planSetup;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("plan_expired")
  public Boolean getPlanExpired() {
    return planExpired;
  }
  public void setPlanExpired(Boolean planExpired) {
    this.planExpired = planExpired;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("plan_status")
  public String getPlanStatus() {
    return planStatus;
  }
  public void setPlanStatus(String planStatus) {
    this.planStatus = planStatus;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("plan_id")
  public String getPlanId() {
    return planId;
  }
  public void setPlanId(String planId) {
    this.planId = planId;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("plan_stripe")
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
