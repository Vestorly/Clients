package io.swagger.client.model;


import com.wordnik.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
public class Article  {
  
  private String id = null;
  private String createdAt = null;
  private String title = null;
  private String openCalaisTopics = null;
  private String openCalaisKeywords = null;
  private String vestorlyTopics = null;
  private String categories = null;
  private String summary = null;
  private String unparsedHtml = null;
  private String logoUrl = null;
  private String imageUrl = null;
  private String url = null;
  private String externalUrl = null;
  private String tags = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
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
  @JsonProperty("created_at")
  public String getCreatedAt() {
    return createdAt;
  }
  public void setCreatedAt(String createdAt) {
    this.createdAt = createdAt;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("title")
  public String getTitle() {
    return title;
  }
  public void setTitle(String title) {
    this.title = title;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("open_calais_topics")
  public String getOpenCalaisTopics() {
    return openCalaisTopics;
  }
  public void setOpenCalaisTopics(String openCalaisTopics) {
    this.openCalaisTopics = openCalaisTopics;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("open_calais_keywords")
  public String getOpenCalaisKeywords() {
    return openCalaisKeywords;
  }
  public void setOpenCalaisKeywords(String openCalaisKeywords) {
    this.openCalaisKeywords = openCalaisKeywords;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("vestorly_topics")
  public String getVestorlyTopics() {
    return vestorlyTopics;
  }
  public void setVestorlyTopics(String vestorlyTopics) {
    this.vestorlyTopics = vestorlyTopics;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("categories")
  public String getCategories() {
    return categories;
  }
  public void setCategories(String categories) {
    this.categories = categories;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("summary")
  public String getSummary() {
    return summary;
  }
  public void setSummary(String summary) {
    this.summary = summary;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("unparsed_html")
  public String getUnparsedHtml() {
    return unparsedHtml;
  }
  public void setUnparsedHtml(String unparsedHtml) {
    this.unparsedHtml = unparsedHtml;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("logo_url")
  public String getLogoUrl() {
    return logoUrl;
  }
  public void setLogoUrl(String logoUrl) {
    this.logoUrl = logoUrl;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("image_url")
  public String getImageUrl() {
    return imageUrl;
  }
  public void setImageUrl(String imageUrl) {
    this.imageUrl = imageUrl;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("url")
  public String getUrl() {
    return url;
  }
  public void setUrl(String url) {
    this.url = url;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("external_url")
  public String getExternalUrl() {
    return externalUrl;
  }
  public void setExternalUrl(String externalUrl) {
    this.externalUrl = externalUrl;
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

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Article {\n");
    
    sb.append("  id: ").append(id).append("\n");
    sb.append("  createdAt: ").append(createdAt).append("\n");
    sb.append("  title: ").append(title).append("\n");
    sb.append("  openCalaisTopics: ").append(openCalaisTopics).append("\n");
    sb.append("  openCalaisKeywords: ").append(openCalaisKeywords).append("\n");
    sb.append("  vestorlyTopics: ").append(vestorlyTopics).append("\n");
    sb.append("  categories: ").append(categories).append("\n");
    sb.append("  summary: ").append(summary).append("\n");
    sb.append("  unparsedHtml: ").append(unparsedHtml).append("\n");
    sb.append("  logoUrl: ").append(logoUrl).append("\n");
    sb.append("  imageUrl: ").append(imageUrl).append("\n");
    sb.append("  url: ").append(url).append("\n");
    sb.append("  externalUrl: ").append(externalUrl).append("\n");
    sb.append("  tags: ").append(tags).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
