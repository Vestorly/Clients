package com.wordnik.client.model;


import com.wordnik.swagger.annotations.*;


/**
 * A Member object.
 **/
@ApiModel(description = "A Member object.")
public class Member  { 
  private String _id = null;
  private String email = null;
  private String first_name = null;
  private String last_name = null;
  private String phone = null;
  private String address = null;
  private String city = null;
  private String state = null;
  private String zip = null;
  private String gender = null;
  private String age = null;
  private String education = null;
  private Boolean high_net_worth = null;
  private String home_market_value = null;
  private String home_owner_status = null;
  private String household_income = null;
  private String marital_status = null;
  private String occupation = null;
  private String hometown = null;
  private String family = null;
  private String tags = null;
  private String message = null;
  private String location = null;
  private String picture_url = null;
  private String profile_url = null;
  private String estimated_location = null;
  private String estimated_zip = null;
  private String register_ip_addr = null;
  private Boolean data_estimated = null;
  private Boolean genuine_email = null;
  
  
  /**
   * Id of object
   **/
  @ApiModelProperty(required = true, value = "Id of object")
  public String get_id() {
    return _id;
  }
  public void set_id(String _id) {
    this._id = _id;
  }

  
  /**
   * Email Address
   **/
  @ApiModelProperty(required = true, value = "Email Address")
  public String getEmail() {
    return email;
  }
  public void setEmail(String email) {
    this.email = email;
  }

  
  /**
   * First Name
   **/
  @ApiModelProperty(required = false, value = "First Name")
  public String getFirst_name() {
    return first_name;
  }
  public void setFirst_name(String first_name) {
    this.first_name = first_name;
  }

  
  /**
   * Last Name
   **/
  @ApiModelProperty(required = false, value = "Last Name")
  public String getLast_name() {
    return last_name;
  }
  public void setLast_name(String last_name) {
    this.last_name = last_name;
  }

  
  /**
   * Phone Number
   **/
  @ApiModelProperty(required = false, value = "Phone Number")
  public String getPhone() {
    return phone;
  }
  public void setPhone(String phone) {
    this.phone = phone;
  }

  
  /**
   * Postal Address
   **/
  @ApiModelProperty(required = false, value = "Postal Address")
  public String getAddress() {
    return address;
  }
  public void setAddress(String address) {
    this.address = address;
  }

  
  /**
   * Postal City
   **/
  @ApiModelProperty(required = false, value = "Postal City")
  public String getCity() {
    return city;
  }
  public void setCity(String city) {
    this.city = city;
  }

  
  /**
   * Postal State
   **/
  @ApiModelProperty(required = false, value = "Postal State")
  public String getState() {
    return state;
  }
  public void setState(String state) {
    this.state = state;
  }

  
  /**
   * Postal Zipcode
   **/
  @ApiModelProperty(required = false, value = "Postal Zipcode")
  public String getZip() {
    return zip;
  }
  public void setZip(String zip) {
    this.zip = zip;
  }

  
  /**
   * Gender
   **/
  @ApiModelProperty(required = false, value = "Gender")
  public String getGender() {
    return gender;
  }
  public void setGender(String gender) {
    this.gender = gender;
  }

  
  /**
   * Age Range
   **/
  @ApiModelProperty(required = false, value = "Age Range")
  public String getAge() {
    return age;
  }
  public void setAge(String age) {
    this.age = age;
  }

  
  /**
   * Education
   **/
  @ApiModelProperty(required = false, value = "Education")
  public String getEducation() {
    return education;
  }
  public void setEducation(String education) {
    this.education = education;
  }

  
  /**
   * High Net Worth
   **/
  @ApiModelProperty(required = false, value = "High Net Worth")
  public Boolean getHigh_net_worth() {
    return high_net_worth;
  }
  public void setHigh_net_worth(Boolean high_net_worth) {
    this.high_net_worth = high_net_worth;
  }

  
  /**
   * Home Market Value
   **/
  @ApiModelProperty(required = false, value = "Home Market Value")
  public String getHome_market_value() {
    return home_market_value;
  }
  public void setHome_market_value(String home_market_value) {
    this.home_market_value = home_market_value;
  }

  
  /**
   * Home Owner Status
   **/
  @ApiModelProperty(required = false, value = "Home Owner Status")
  public String getHome_owner_status() {
    return home_owner_status;
  }
  public void setHome_owner_status(String home_owner_status) {
    this.home_owner_status = home_owner_status;
  }

  
  /**
   * Household Income
   **/
  @ApiModelProperty(required = false, value = "Household Income")
  public String getHousehold_income() {
    return household_income;
  }
  public void setHousehold_income(String household_income) {
    this.household_income = household_income;
  }

  
  /**
   * Marital Status
   **/
  @ApiModelProperty(required = false, value = "Marital Status")
  public String getMarital_status() {
    return marital_status;
  }
  public void setMarital_status(String marital_status) {
    this.marital_status = marital_status;
  }

  
  /**
   * Occupation
   **/
  @ApiModelProperty(required = false, value = "Occupation")
  public String getOccupation() {
    return occupation;
  }
  public void setOccupation(String occupation) {
    this.occupation = occupation;
  }

  
  /**
   * Hometown
   **/
  @ApiModelProperty(required = false, value = "Hometown")
  public String getHometown() {
    return hometown;
  }
  public void setHometown(String hometown) {
    this.hometown = hometown;
  }

  
  /**
   * Family Members
   **/
  @ApiModelProperty(required = false, value = "Family Members")
  public String getFamily() {
    return family;
  }
  public void setFamily(String family) {
    this.family = family;
  }

  
  /**
   * Tags
   **/
  @ApiModelProperty(required = false, value = "Tags")
  public String getTags() {
    return tags;
  }
  public void setTags(String tags) {
    this.tags = tags;
  }

  
  /**
   * Message and notes
   **/
  @ApiModelProperty(required = false, value = "Message and notes")
  public String getMessage() {
    return message;
  }
  public void setMessage(String message) {
    this.message = message;
  }

  
  /**
   * Location
   **/
  @ApiModelProperty(required = false, value = "Location")
  public String getLocation() {
    return location;
  }
  public void setLocation(String location) {
    this.location = location;
  }

  
  /**
   * Picture URL
   **/
  @ApiModelProperty(required = false, value = "Picture URL")
  public String getPicture_url() {
    return picture_url;
  }
  public void setPicture_url(String picture_url) {
    this.picture_url = picture_url;
  }

  
  /**
   * Social Profile URL
   **/
  @ApiModelProperty(required = false, value = "Social Profile URL")
  public String getProfile_url() {
    return profile_url;
  }
  public void setProfile_url(String profile_url) {
    this.profile_url = profile_url;
  }

  
  /**
   * Estimated Location
   **/
  @ApiModelProperty(required = false, value = "Estimated Location")
  public String getEstimated_location() {
    return estimated_location;
  }
  public void setEstimated_location(String estimated_location) {
    this.estimated_location = estimated_location;
  }

  
  /**
   * Estimated Zipcode
   **/
  @ApiModelProperty(required = false, value = "Estimated Zipcode")
  public String getEstimated_zip() {
    return estimated_zip;
  }
  public void setEstimated_zip(String estimated_zip) {
    this.estimated_zip = estimated_zip;
  }

  
  /**
   * First recorded IP Address
   **/
  @ApiModelProperty(required = false, value = "First recorded IP Address")
  public String getRegister_ip_addr() {
    return register_ip_addr;
  }
  public void setRegister_ip_addr(String register_ip_addr) {
    this.register_ip_addr = register_ip_addr;
  }

  
  /**
   * Data Estimated
   **/
  @ApiModelProperty(required = false, value = "Data Estimated")
  public Boolean getData_estimated() {
    return data_estimated;
  }
  public void setData_estimated(Boolean data_estimated) {
    this.data_estimated = data_estimated;
  }

  
  /**
   * Genuine Email address
   **/
  @ApiModelProperty(required = false, value = "Genuine Email address")
  public Boolean getGenuine_email() {
    return genuine_email;
  }
  public void setGenuine_email(Boolean genuine_email) {
    this.genuine_email = genuine_email;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Member {\n");
    
    sb.append("  _id: ").append(_id).append("\n");
    sb.append("  email: ").append(email).append("\n");
    sb.append("  first_name: ").append(first_name).append("\n");
    sb.append("  last_name: ").append(last_name).append("\n");
    sb.append("  phone: ").append(phone).append("\n");
    sb.append("  address: ").append(address).append("\n");
    sb.append("  city: ").append(city).append("\n");
    sb.append("  state: ").append(state).append("\n");
    sb.append("  zip: ").append(zip).append("\n");
    sb.append("  gender: ").append(gender).append("\n");
    sb.append("  age: ").append(age).append("\n");
    sb.append("  education: ").append(education).append("\n");
    sb.append("  high_net_worth: ").append(high_net_worth).append("\n");
    sb.append("  home_market_value: ").append(home_market_value).append("\n");
    sb.append("  home_owner_status: ").append(home_owner_status).append("\n");
    sb.append("  household_income: ").append(household_income).append("\n");
    sb.append("  marital_status: ").append(marital_status).append("\n");
    sb.append("  occupation: ").append(occupation).append("\n");
    sb.append("  hometown: ").append(hometown).append("\n");
    sb.append("  family: ").append(family).append("\n");
    sb.append("  tags: ").append(tags).append("\n");
    sb.append("  message: ").append(message).append("\n");
    sb.append("  location: ").append(location).append("\n");
    sb.append("  picture_url: ").append(picture_url).append("\n");
    sb.append("  profile_url: ").append(profile_url).append("\n");
    sb.append("  estimated_location: ").append(estimated_location).append("\n");
    sb.append("  estimated_zip: ").append(estimated_zip).append("\n");
    sb.append("  register_ip_addr: ").append(register_ip_addr).append("\n");
    sb.append("  data_estimated: ").append(data_estimated).append("\n");
    sb.append("  genuine_email: ").append(genuine_email).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
