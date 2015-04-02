package io.swagger.model;


import com.wordnik.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


/**
 * An Advisor object.
 **/
@ApiModel(description = "An Advisor object.")
public class Advisor  {
  
  private String _id = null;
  private String company = null;
  private String address = null;
  private String city = null;
  private String state = null;
  private String zip = null;
  private String first_name = null;
  private String last_name = null;
  private String reg_number = null;
  private String account_type = null;
  private String advisor_employees = null;
  private String assets = null;
  private Integer num_clients = null;

  
  /**
   * Id of object
   **/
  @ApiModelProperty(required = true, value = "Id of object")
  @JsonProperty("_id")
  public String get_id() {
    return _id;
  }
  public void set_id(String _id) {
    this._id = _id;
  }

  
  /**
   * Company of advisor
   **/
  @ApiModelProperty(required = true, value = "Company of advisor")
  @JsonProperty("company")
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
  @JsonProperty("address")
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
  @JsonProperty("city")
  public String getCity() {
    return city;
  }
  public void setCity(String city) {
    this.city = city;
  }

  
  /**
   * State of advisor
   **/
  @ApiModelProperty(required = true, value = "State of advisor")
  @JsonProperty("state")
  public String getState() {
    return state;
  }
  public void setState(String state) {
    this.state = state;
  }

  
  /**
   * Zip of advisor
   **/
  @ApiModelProperty(required = true, value = "Zip of advisor")
  @JsonProperty("zip")
  public String getZip() {
    return zip;
  }
  public void setZip(String zip) {
    this.zip = zip;
  }

  
  /**
   * First name of advisor
   **/
  @ApiModelProperty(required = true, value = "First name of advisor")
  @JsonProperty("first_name")
  public String getFirst_name() {
    return first_name;
  }
  public void setFirst_name(String first_name) {
    this.first_name = first_name;
  }

  
  /**
   * Last name of advisor
   **/
  @ApiModelProperty(required = true, value = "Last name of advisor")
  @JsonProperty("last_name")
  public String getLast_name() {
    return last_name;
  }
  public void setLast_name(String last_name) {
    this.last_name = last_name;
  }

  
  /**
   * Registration number of advisor
   **/
  @ApiModelProperty(required = true, value = "Registration number of advisor")
  @JsonProperty("reg_number")
  public String getReg_number() {
    return reg_number;
  }
  public void setReg_number(String reg_number) {
    this.reg_number = reg_number;
  }

  
  /**
   * Account type of advisor
   **/
  @ApiModelProperty(required = true, value = "Account type of advisor")
  @JsonProperty("account_type")
  public String getAccount_type() {
    return account_type;
  }
  public void setAccount_type(String account_type) {
    this.account_type = account_type;
  }

  
  /**
   * Employees of advisor
   **/
  @ApiModelProperty(required = true, value = "Employees of advisor")
  @JsonProperty("advisor_employees")
  public String getAdvisor_employees() {
    return advisor_employees;
  }
  public void setAdvisor_employees(String advisor_employees) {
    this.advisor_employees = advisor_employees;
  }

  
  /**
   * Assets of advisor
   **/
  @ApiModelProperty(required = true, value = "Assets of advisor")
  @JsonProperty("assets")
  public String getAssets() {
    return assets;
  }
  public void setAssets(String assets) {
    this.assets = assets;
  }

  
  /**
   * Number of clients the advisor has
   **/
  @ApiModelProperty(required = true, value = "Number of clients the advisor has")
  @JsonProperty("num_clients")
  public Integer getNum_clients() {
    return num_clients;
  }
  public void setNum_clients(Integer num_clients) {
    this.num_clients = num_clients;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Advisor {\n");
    
    sb.append("  _id: ").append(_id).append("\n");
    sb.append("  company: ").append(company).append("\n");
    sb.append("  address: ").append(address).append("\n");
    sb.append("  city: ").append(city).append("\n");
    sb.append("  state: ").append(state).append("\n");
    sb.append("  zip: ").append(zip).append("\n");
    sb.append("  first_name: ").append(first_name).append("\n");
    sb.append("  last_name: ").append(last_name).append("\n");
    sb.append("  reg_number: ").append(reg_number).append("\n");
    sb.append("  account_type: ").append(account_type).append("\n");
    sb.append("  advisor_employees: ").append(advisor_employees).append("\n");
    sb.append("  assets: ").append(assets).append("\n");
    sb.append("  num_clients: ").append(num_clients).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
