package io.swagger.model;

import io.swagger.model.PersonalSettings;
import io.swagger.model.OrgSetting;
import io.swagger.model.Features;

import com.wordnik.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
public class Settings  {
  
  private String id = null;
  private String company = null;
  private String pictureUrl = null;
  private String website = null;
  private String disclosure = null;
  private String advBrochure = null;
  private String slug = null;
  private String name = null;
  private OrgSetting orgsetting = null;
  private Features feature = null;
  private PersonalSettings personalsetting = null;

  
  /**
   **/
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("id")
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
  @JsonProperty("pictureUrl")
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
  @JsonProperty("disclosure")
  public String getDisclosure() {
    return disclosure;
  }
  public void setDisclosure(String disclosure) {
    this.disclosure = disclosure;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("advBrochure")
  public String getAdvBrochure() {
    return advBrochure;
  }
  public void setAdvBrochure(String advBrochure) {
    this.advBrochure = advBrochure;
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
  @JsonProperty("orgsetting")
  public OrgSetting getOrgsetting() {
    return orgsetting;
  }
  public void setOrgsetting(OrgSetting orgsetting) {
    this.orgsetting = orgsetting;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("feature")
  public Features getFeature() {
    return feature;
  }
  public void setFeature(Features feature) {
    this.feature = feature;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("personalsetting")
  public PersonalSettings getPersonalsetting() {
    return personalsetting;
  }
  public void setPersonalsetting(PersonalSettings personalsetting) {
    this.personalsetting = personalsetting;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Settings {\n");
    
    sb.append("  id: ").append(id).append("\n");
    sb.append("  company: ").append(company).append("\n");
    sb.append("  pictureUrl: ").append(pictureUrl).append("\n");
    sb.append("  website: ").append(website).append("\n");
    sb.append("  disclosure: ").append(disclosure).append("\n");
    sb.append("  advBrochure: ").append(advBrochure).append("\n");
    sb.append("  slug: ").append(slug).append("\n");
    sb.append("  name: ").append(name).append("\n");
    sb.append("  orgsetting: ").append(orgsetting).append("\n");
    sb.append("  feature: ").append(feature).append("\n");
    sb.append("  personalsetting: ").append(personalsetting).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
