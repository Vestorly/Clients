package vestorly.client.model;


import com.wordnik.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
public class OrgSetting  {
  
  private String id = null;
  private Boolean isDefault = null;
  private String name = null;
  private String emailThemeName = null;
  private String companyAddress = null;
  private String companyContactEmail = null;
  private String siteUrl = null;
  private String companyHomepageUrl = null;
  private String privacyPolicyUrl = null;
  private String termsAndConditionsUrl = null;

  
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
  @JsonProperty("is_default")
  public Boolean getIsDefault() {
    return isDefault;
  }
  public void setIsDefault(Boolean isDefault) {
    this.isDefault = isDefault;
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
  @JsonProperty("email_theme_name")
  public String getEmailThemeName() {
    return emailThemeName;
  }
  public void setEmailThemeName(String emailThemeName) {
    this.emailThemeName = emailThemeName;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("company_address")
  public String getCompanyAddress() {
    return companyAddress;
  }
  public void setCompanyAddress(String companyAddress) {
    this.companyAddress = companyAddress;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("company_contact_email")
  public String getCompanyContactEmail() {
    return companyContactEmail;
  }
  public void setCompanyContactEmail(String companyContactEmail) {
    this.companyContactEmail = companyContactEmail;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("site_url")
  public String getSiteUrl() {
    return siteUrl;
  }
  public void setSiteUrl(String siteUrl) {
    this.siteUrl = siteUrl;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("company_homepage_url")
  public String getCompanyHomepageUrl() {
    return companyHomepageUrl;
  }
  public void setCompanyHomepageUrl(String companyHomepageUrl) {
    this.companyHomepageUrl = companyHomepageUrl;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("privacy_policy_url")
  public String getPrivacyPolicyUrl() {
    return privacyPolicyUrl;
  }
  public void setPrivacyPolicyUrl(String privacyPolicyUrl) {
    this.privacyPolicyUrl = privacyPolicyUrl;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("terms_and_conditions_url")
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
