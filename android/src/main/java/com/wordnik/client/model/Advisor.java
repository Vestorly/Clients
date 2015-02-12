package com.wordnik.client.model;


import com.wordnik.swagger.annotations.*;


/**
 * An Advisor object.
 **/
@ApiModel(description = "An Advisor object.")
public class Advisor  { 
  private String _id = null;
  private String email = null;
  private String phone = null;
  private String company = null;
  private String address = null;
  private String city = null;
  
  
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
   * Email address of advisor
   **/
  @ApiModelProperty(required = true, value = "Email address of advisor")
  public String getEmail() {
    return email;
  }
  public void setEmail(String email) {
    this.email = email;
  }

  
  /**
   * Phone number of advisor
   **/
  @ApiModelProperty(required = true, value = "Phone number of advisor")
  public String getPhone() {
    return phone;
  }
  public void setPhone(String phone) {
    this.phone = phone;
  }

  
  /**
   * Company of advisor
   **/
  @ApiModelProperty(required = true, value = "Company of advisor")
  public String getCompany() {
    return company;
  }
  public void setCompany(String company) {
    this.company = company;
  }

  
  /**
   * Address of advisor
   **/
  @ApiModelProperty(required = true, value = "Address of advisor")
  public String getAddress() {
    return address;
  }
  public void setAddress(String address) {
    this.address = address;
  }

  
  /**
   * City of advisor
   **/
  @ApiModelProperty(required = true, value = "City of advisor")
  public String getCity() {
    return city;
  }
  public void setCity(String city) {
    this.city = city;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Advisor {\n");
    
    sb.append("  _id: ").append(_id).append("\n");
    sb.append("  email: ").append(email).append("\n");
    sb.append("  phone: ").append(phone).append("\n");
    sb.append("  company: ").append(company).append("\n");
    sb.append("  address: ").append(address).append("\n");
    sb.append("  city: ").append(city).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
