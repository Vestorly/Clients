package io.swagger.client.model;


import com.wordnik.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
public class Member  {
  
  private String id = null;
  private String email = null;
  private String firstName = null;
  private String lastName = null;
  private String phone = null;
  private String address = null;
  private String city = null;
  private String state = null;
  private String zip = null;
  private String gender = null;
  private String age = null;
  private String education = null;
  private Boolean highNetWorth = null;
  private String homeMarketValue = null;
  private String homeOwnerStatus = null;
  private String householdIncome = null;
  private String maritalStatus = null;
  private String occupation = null;
  private String hometown = null;
  private String family = null;
  private String tags = null;
  private String message = null;
  private String location = null;
  private String pictureUrl = null;
  private String profileUrl = null;
  private String estimatedLocation = null;
  private String estimatedZip = null;
  private String registerIpAddr = null;
  private Boolean dataEstimated = null;
  private Boolean genuineEmail = null;

  
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
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("email")
  public String getEmail() {
    return email;
  }
  public void setEmail(String email) {
    this.email = email;
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
  @JsonProperty("phone")
  public String getPhone() {
    return phone;
  }
  public void setPhone(String phone) {
    this.phone = phone;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("address")
  public String getAddress() {
    return address;
  }
  public void setAddress(String address) {
    this.address = address;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("city")
  public String getCity() {
    return city;
  }
  public void setCity(String city) {
    this.city = city;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("state")
  public String getState() {
    return state;
  }
  public void setState(String state) {
    this.state = state;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("zip")
  public String getZip() {
    return zip;
  }
  public void setZip(String zip) {
    this.zip = zip;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("gender")
  public String getGender() {
    return gender;
  }
  public void setGender(String gender) {
    this.gender = gender;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("age")
  public String getAge() {
    return age;
  }
  public void setAge(String age) {
    this.age = age;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("education")
  public String getEducation() {
    return education;
  }
  public void setEducation(String education) {
    this.education = education;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("high_net_worth")
  public Boolean getHighNetWorth() {
    return highNetWorth;
  }
  public void setHighNetWorth(Boolean highNetWorth) {
    this.highNetWorth = highNetWorth;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("home_market_value")
  public String getHomeMarketValue() {
    return homeMarketValue;
  }
  public void setHomeMarketValue(String homeMarketValue) {
    this.homeMarketValue = homeMarketValue;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("home_owner_status")
  public String getHomeOwnerStatus() {
    return homeOwnerStatus;
  }
  public void setHomeOwnerStatus(String homeOwnerStatus) {
    this.homeOwnerStatus = homeOwnerStatus;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("household_income")
  public String getHouseholdIncome() {
    return householdIncome;
  }
  public void setHouseholdIncome(String householdIncome) {
    this.householdIncome = householdIncome;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("marital_status")
  public String getMaritalStatus() {
    return maritalStatus;
  }
  public void setMaritalStatus(String maritalStatus) {
    this.maritalStatus = maritalStatus;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("occupation")
  public String getOccupation() {
    return occupation;
  }
  public void setOccupation(String occupation) {
    this.occupation = occupation;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("hometown")
  public String getHometown() {
    return hometown;
  }
  public void setHometown(String hometown) {
    this.hometown = hometown;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("family")
  public String getFamily() {
    return family;
  }
  public void setFamily(String family) {
    this.family = family;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("tags")
  public String getTags() {
    return tags;
  }
  public void setTags(String tags) {
    this.tags = tags;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("message")
  public String getMessage() {
    return message;
  }
  public void setMessage(String message) {
    this.message = message;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("location")
  public String getLocation() {
    return location;
  }
  public void setLocation(String location) {
    this.location = location;
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
  @JsonProperty("profile_url")
  public String getProfileUrl() {
    return profileUrl;
  }
  public void setProfileUrl(String profileUrl) {
    this.profileUrl = profileUrl;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("estimated_location")
  public String getEstimatedLocation() {
    return estimatedLocation;
  }
  public void setEstimatedLocation(String estimatedLocation) {
    this.estimatedLocation = estimatedLocation;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("estimated_zip")
  public String getEstimatedZip() {
    return estimatedZip;
  }
  public void setEstimatedZip(String estimatedZip) {
    this.estimatedZip = estimatedZip;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("register_ip_addr")
  public String getRegisterIpAddr() {
    return registerIpAddr;
  }
  public void setRegisterIpAddr(String registerIpAddr) {
    this.registerIpAddr = registerIpAddr;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("data_estimated")
  public Boolean getDataEstimated() {
    return dataEstimated;
  }
  public void setDataEstimated(Boolean dataEstimated) {
    this.dataEstimated = dataEstimated;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("genuine_email")
  public Boolean getGenuineEmail() {
    return genuineEmail;
  }
  public void setGenuineEmail(Boolean genuineEmail) {
    this.genuineEmail = genuineEmail;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Member {\n");
    
    sb.append("  id: ").append(id).append("\n");
    sb.append("  email: ").append(email).append("\n");
    sb.append("  firstName: ").append(firstName).append("\n");
    sb.append("  lastName: ").append(lastName).append("\n");
    sb.append("  phone: ").append(phone).append("\n");
    sb.append("  address: ").append(address).append("\n");
    sb.append("  city: ").append(city).append("\n");
    sb.append("  state: ").append(state).append("\n");
    sb.append("  zip: ").append(zip).append("\n");
    sb.append("  gender: ").append(gender).append("\n");
    sb.append("  age: ").append(age).append("\n");
    sb.append("  education: ").append(education).append("\n");
    sb.append("  highNetWorth: ").append(highNetWorth).append("\n");
    sb.append("  homeMarketValue: ").append(homeMarketValue).append("\n");
    sb.append("  homeOwnerStatus: ").append(homeOwnerStatus).append("\n");
    sb.append("  householdIncome: ").append(householdIncome).append("\n");
    sb.append("  maritalStatus: ").append(maritalStatus).append("\n");
    sb.append("  occupation: ").append(occupation).append("\n");
    sb.append("  hometown: ").append(hometown).append("\n");
    sb.append("  family: ").append(family).append("\n");
    sb.append("  tags: ").append(tags).append("\n");
    sb.append("  message: ").append(message).append("\n");
    sb.append("  location: ").append(location).append("\n");
    sb.append("  pictureUrl: ").append(pictureUrl).append("\n");
    sb.append("  profileUrl: ").append(profileUrl).append("\n");
    sb.append("  estimatedLocation: ").append(estimatedLocation).append("\n");
    sb.append("  estimatedZip: ").append(estimatedZip).append("\n");
    sb.append("  registerIpAddr: ").append(registerIpAddr).append("\n");
    sb.append("  dataEstimated: ").append(dataEstimated).append("\n");
    sb.append("  genuineEmail: ").append(genuineEmail).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
