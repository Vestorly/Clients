package io.swagger.client.model;

import java.util.*;

import com.wordnik.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class Member  {
  
  @SerializedName("_id")
  private String id = null;
  @SerializedName("email")
  private String email = null;
  @SerializedName("first_name")
  private String firstName = null;
  @SerializedName("last_name")
  private String lastName = null;
  @SerializedName("phone")
  private String phone = null;
  @SerializedName("address")
  private String address = null;
  @SerializedName("city")
  private String city = null;
  @SerializedName("state")
  private String state = null;
  @SerializedName("zip")
  private String zip = null;
  @SerializedName("gender")
  private String gender = null;
  @SerializedName("interest_consultation")
  private String interestConsultation = null;
  @SerializedName("interest_in_new_advisor")
  private String interestInNewAdvisor = null;
  @SerializedName("assets")
  private String assets = null;
  @SerializedName("age")
  private String age = null;
  @SerializedName("data_estimated")
  private Boolean dataEstimated = null;
  @SerializedName("education")
  private String education = null;
  @SerializedName("high_net_worth")
  private Boolean highNetWorth = null;
  @SerializedName("home_market_value")
  private String homeMarketValue = null;
  @SerializedName("home_owner_status")
  private String homeOwnerStatus = null;
  @SerializedName("household_income")
  private String householdIncome = null;
  @SerializedName("marital_status")
  private String maritalStatus = null;
  @SerializedName("occupation")
  private String occupation = null;
  @SerializedName("hometown")
  private String hometown = null;
  @SerializedName("family")
  private String family = null;
  @SerializedName("tags")
  private List<String> tags = new ArrayList<String>() ;
  @SerializedName("subscribed_group_ids")
  private List<String> subscribedGroupIds = new ArrayList<String>() ;
  @SerializedName("unsubscribed")
  private Boolean unsubscribed = null;
  @SerializedName("unsubscribed_date")
  private Boolean unsubscribedDate = null;
  @SerializedName("user_type")
  private String userType = null;
  @SerializedName("signed_up_with")
  private String signedUpWith = null;
  @SerializedName("message")
  private String message = null;
  @SerializedName("location")
  private String location = null;
  @SerializedName("picture_url")
  private String pictureUrl = null;
  @SerializedName("profile_url")
  private String profileUrl = null;
  @SerializedName("estimated_location")
  private String estimatedLocation = null;
  @SerializedName("estimated_zip")
  private String estimatedZip = null;
  @SerializedName("register_ip_addr")
  private String registerIpAddr = null;
  @SerializedName("genuine_email")
  private Boolean genuineEmail = null;
  @SerializedName("last_active_date")
  private String lastActiveDate = null;
  @SerializedName("is_client")
  private Boolean isClient = null;
  @SerializedName("is_hidden")
  private Boolean isHidden = null;
  @SerializedName("invited_on")
  private String invitedOn = null;
  @SerializedName("invited_by")
  private String invitedBy = null;
  @SerializedName("portfolio_size")
  private String portfolioSize = null;

  
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
  @ApiModelProperty(required = true, value = "")
  public String getEmail() {
    return email;
  }
  public void setEmail(String email) {
    this.email = email;
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
  public String getPhone() {
    return phone;
  }
  public void setPhone(String phone) {
    this.phone = phone;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getAddress() {
    return address;
  }
  public void setAddress(String address) {
    this.address = address;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getCity() {
    return city;
  }
  public void setCity(String city) {
    this.city = city;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getState() {
    return state;
  }
  public void setState(String state) {
    this.state = state;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getZip() {
    return zip;
  }
  public void setZip(String zip) {
    this.zip = zip;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getGender() {
    return gender;
  }
  public void setGender(String gender) {
    this.gender = gender;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getInterestConsultation() {
    return interestConsultation;
  }
  public void setInterestConsultation(String interestConsultation) {
    this.interestConsultation = interestConsultation;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getInterestInNewAdvisor() {
    return interestInNewAdvisor;
  }
  public void setInterestInNewAdvisor(String interestInNewAdvisor) {
    this.interestInNewAdvisor = interestInNewAdvisor;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getAssets() {
    return assets;
  }
  public void setAssets(String assets) {
    this.assets = assets;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getAge() {
    return age;
  }
  public void setAge(String age) {
    this.age = age;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getDataEstimated() {
    return dataEstimated;
  }
  public void setDataEstimated(Boolean dataEstimated) {
    this.dataEstimated = dataEstimated;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getEducation() {
    return education;
  }
  public void setEducation(String education) {
    this.education = education;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getHighNetWorth() {
    return highNetWorth;
  }
  public void setHighNetWorth(Boolean highNetWorth) {
    this.highNetWorth = highNetWorth;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getHomeMarketValue() {
    return homeMarketValue;
  }
  public void setHomeMarketValue(String homeMarketValue) {
    this.homeMarketValue = homeMarketValue;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getHomeOwnerStatus() {
    return homeOwnerStatus;
  }
  public void setHomeOwnerStatus(String homeOwnerStatus) {
    this.homeOwnerStatus = homeOwnerStatus;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getHouseholdIncome() {
    return householdIncome;
  }
  public void setHouseholdIncome(String householdIncome) {
    this.householdIncome = householdIncome;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getMaritalStatus() {
    return maritalStatus;
  }
  public void setMaritalStatus(String maritalStatus) {
    this.maritalStatus = maritalStatus;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getOccupation() {
    return occupation;
  }
  public void setOccupation(String occupation) {
    this.occupation = occupation;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getHometown() {
    return hometown;
  }
  public void setHometown(String hometown) {
    this.hometown = hometown;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getFamily() {
    return family;
  }
  public void setFamily(String family) {
    this.family = family;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public List<String> getTags() {
    return tags;
  }
  public void setTags(List<String> tags) {
    this.tags = tags;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public List<String> getSubscribedGroupIds() {
    return subscribedGroupIds;
  }
  public void setSubscribedGroupIds(List<String> subscribedGroupIds) {
    this.subscribedGroupIds = subscribedGroupIds;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getUnsubscribed() {
    return unsubscribed;
  }
  public void setUnsubscribed(Boolean unsubscribed) {
    this.unsubscribed = unsubscribed;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getUnsubscribedDate() {
    return unsubscribedDate;
  }
  public void setUnsubscribedDate(Boolean unsubscribedDate) {
    this.unsubscribedDate = unsubscribedDate;
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
  public String getSignedUpWith() {
    return signedUpWith;
  }
  public void setSignedUpWith(String signedUpWith) {
    this.signedUpWith = signedUpWith;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getMessage() {
    return message;
  }
  public void setMessage(String message) {
    this.message = message;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getLocation() {
    return location;
  }
  public void setLocation(String location) {
    this.location = location;
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
  public String getProfileUrl() {
    return profileUrl;
  }
  public void setProfileUrl(String profileUrl) {
    this.profileUrl = profileUrl;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getEstimatedLocation() {
    return estimatedLocation;
  }
  public void setEstimatedLocation(String estimatedLocation) {
    this.estimatedLocation = estimatedLocation;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getEstimatedZip() {
    return estimatedZip;
  }
  public void setEstimatedZip(String estimatedZip) {
    this.estimatedZip = estimatedZip;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getRegisterIpAddr() {
    return registerIpAddr;
  }
  public void setRegisterIpAddr(String registerIpAddr) {
    this.registerIpAddr = registerIpAddr;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getGenuineEmail() {
    return genuineEmail;
  }
  public void setGenuineEmail(Boolean genuineEmail) {
    this.genuineEmail = genuineEmail;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getLastActiveDate() {
    return lastActiveDate;
  }
  public void setLastActiveDate(String lastActiveDate) {
    this.lastActiveDate = lastActiveDate;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getIsClient() {
    return isClient;
  }
  public void setIsClient(Boolean isClient) {
    this.isClient = isClient;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getIsHidden() {
    return isHidden;
  }
  public void setIsHidden(Boolean isHidden) {
    this.isHidden = isHidden;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getInvitedOn() {
    return invitedOn;
  }
  public void setInvitedOn(String invitedOn) {
    this.invitedOn = invitedOn;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getInvitedBy() {
    return invitedBy;
  }
  public void setInvitedBy(String invitedBy) {
    this.invitedBy = invitedBy;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getPortfolioSize() {
    return portfolioSize;
  }
  public void setPortfolioSize(String portfolioSize) {
    this.portfolioSize = portfolioSize;
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
    sb.append("  interestConsultation: ").append(interestConsultation).append("\n");
    sb.append("  interestInNewAdvisor: ").append(interestInNewAdvisor).append("\n");
    sb.append("  assets: ").append(assets).append("\n");
    sb.append("  age: ").append(age).append("\n");
    sb.append("  dataEstimated: ").append(dataEstimated).append("\n");
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
    sb.append("  subscribedGroupIds: ").append(subscribedGroupIds).append("\n");
    sb.append("  unsubscribed: ").append(unsubscribed).append("\n");
    sb.append("  unsubscribedDate: ").append(unsubscribedDate).append("\n");
    sb.append("  userType: ").append(userType).append("\n");
    sb.append("  signedUpWith: ").append(signedUpWith).append("\n");
    sb.append("  message: ").append(message).append("\n");
    sb.append("  location: ").append(location).append("\n");
    sb.append("  pictureUrl: ").append(pictureUrl).append("\n");
    sb.append("  profileUrl: ").append(profileUrl).append("\n");
    sb.append("  estimatedLocation: ").append(estimatedLocation).append("\n");
    sb.append("  estimatedZip: ").append(estimatedZip).append("\n");
    sb.append("  registerIpAddr: ").append(registerIpAddr).append("\n");
    sb.append("  genuineEmail: ").append(genuineEmail).append("\n");
    sb.append("  lastActiveDate: ").append(lastActiveDate).append("\n");
    sb.append("  isClient: ").append(isClient).append("\n");
    sb.append("  isHidden: ").append(isHidden).append("\n");
    sb.append("  invitedOn: ").append(invitedOn).append("\n");
    sb.append("  invitedBy: ").append(invitedBy).append("\n");
    sb.append("  portfolioSize: ").append(portfolioSize).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
