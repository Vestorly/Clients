package io.swagger.client.model;


import com.wordnik.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class OrgSetting  {
  
  @SerializedName("_id")
  private String id = null;
  @SerializedName("is_default")
  private Boolean isDefault = null;
  @SerializedName("name")
  private String name = null;
  @SerializedName("email_theme_name")
  private String emailThemeName = null;
  @SerializedName("company_address")
  private String companyAddress = null;
  @SerializedName("company_contact_email")
  private String companyContactEmail = null;
  @SerializedName("site_url")
  private String siteUrl = null;
  @SerializedName("company_homepage_url")
  private String companyHomepageUrl = null;
  @SerializedName("privacy_policy_url")
  private String privacyPolicyUrl = null;
  @SerializedName("terms_and_conditions_url")
  private String termsAndConditionsUrl = null;

  
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
  public Boolean getIsDefault() {
    return isDefault;
  }
  public void setIsDefault(Boolean isDefault) {
    this.isDefault = isDefault;
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
  public String getEmailThemeName() {
    return emailThemeName;
  }
  public void setEmailThemeName(String emailThemeName) {
    this.emailThemeName = emailThemeName;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getCompanyAddress() {
    return companyAddress;
  }
  public void setCompanyAddress(String companyAddress) {
    this.companyAddress = companyAddress;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getCompanyContactEmail() {
    return companyContactEmail;
  }
  public void setCompanyContactEmail(String companyContactEmail) {
    this.companyContactEmail = companyContactEmail;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getSiteUrl() {
    return siteUrl;
  }
  public void setSiteUrl(String siteUrl) {
    this.siteUrl = siteUrl;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getCompanyHomepageUrl() {
    return companyHomepageUrl;
  }
  public void setCompanyHomepageUrl(String companyHomepageUrl) {
    this.companyHomepageUrl = companyHomepageUrl;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getPrivacyPolicyUrl() {
    return privacyPolicyUrl;
  }
  public void setPrivacyPolicyUrl(String privacyPolicyUrl) {
    this.privacyPolicyUrl = privacyPolicyUrl;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getTermsAndConditionsUrl() {
    return termsAndConditionsUrl;
  }
  public void setTermsAndConditionsUrl(String termsAndConditionsUrl) {
    this.termsAndConditionsUrl = termsAndConditionsUrl;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class OrgSetting {\n");
    
    sb.append("  id: ").append(id).append("\n");
    sb.append("  isDefault: ").append(isDefault).append("\n");
    sb.append("  name: ").append(name).append("\n");
    sb.append("  emailThemeName: ").append(emailThemeName).append("\n");
    sb.append("  companyAddress: ").append(companyAddress).append("\n");
    sb.append("  companyContactEmail: ").append(companyContactEmail).append("\n");
    sb.append("  siteUrl: ").append(siteUrl).append("\n");
    sb.append("  companyHomepageUrl: ").append(companyHomepageUrl).append("\n");
    sb.append("  privacyPolicyUrl: ").append(privacyPolicyUrl).append("\n");
    sb.append("  termsAndConditionsUrl: ").append(termsAndConditionsUrl).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
