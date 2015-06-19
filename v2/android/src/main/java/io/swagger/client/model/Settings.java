package io.swagger.client.model;

import io.swagger.client.model.PersonalSettings;
import io.swagger.client.model.OrgSetting;
import io.swagger.client.model.Features;

import com.wordnik.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class Settings  {
  
  @SerializedName("_id")
  private String id = null;
  @SerializedName("company")
  private String company = null;
  @SerializedName("picture_url")
  private String pictureUrl = null;
  @SerializedName("website")
  private String website = null;
  @SerializedName("disclosure")
  private String disclosure = null;
  @SerializedName("adv_brochure")
  private String advBrochure = null;
  @SerializedName("slug")
  private String slug = null;
  @SerializedName("name")
  private String name = null;
  @SerializedName("orgsetting")
  private OrgSetting orgsetting = null;
  @SerializedName("feature")
  private Features feature = null;
  @SerializedName("personalsetting")
  private PersonalSettings personalsetting = null;

  
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
  public String getDisclosure() {
    return disclosure;
  }
  public void setDisclosure(String disclosure) {
    this.disclosure = disclosure;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getAdvBrochure() {
    return advBrochure;
  }
  public void setAdvBrochure(String advBrochure) {
    this.advBrochure = advBrochure;
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
  public OrgSetting getOrgsetting() {
    return orgsetting;
  }
  public void setOrgsetting(OrgSetting orgsetting) {
    this.orgsetting = orgsetting;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Features getFeature() {
    return feature;
  }
  public void setFeature(Features feature) {
    this.feature = feature;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
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
