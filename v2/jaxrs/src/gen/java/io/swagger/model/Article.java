package io.swagger.model;


import com.wordnik.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
public class Article  {
  
  private String id = null;
  private String createdAt = null;
  private String title = null;
  private String body = null;
  private Boolean isResponsive = null;
  private Boolean isProxyNeeded = null;
  private Boolean isMobileProxyNeeded = null;
  private Boolean needsSanitize = null;
  private String proxyUrl = null;
  private String topic = null;
  private String suitabilityScore = null;
  private String summary = null;
  private String imagePath = null;
  private String imageUrl = null;
  private Integer imageHeight = null;
  private Integer imageWidth = null;
  private String logoUrl = null;
  private String squareLogoUrl = null;
  private String url = null;
  private String externalUrl = null;
  private String externalUrlSource = null;
  private String externalUrlType = null;

  
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
  @JsonProperty("createdAt")
  public String getCreatedAt() {
    return createdAt;
  }
  public void setCreatedAt(String createdAt) {
    this.createdAt = createdAt;
  }

  
  /**
   **/
  @ApiModelProperty(required = true, value = "")
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
  @JsonProperty("body")
  public String getBody() {
    return body;
  }
  public void setBody(String body) {
    this.body = body;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("isResponsive")
  public Boolean getIsResponsive() {
    return isResponsive;
  }
  public void setIsResponsive(Boolean isResponsive) {
    this.isResponsive = isResponsive;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("isProxyNeeded")
  public Boolean getIsProxyNeeded() {
    return isProxyNeeded;
  }
  public void setIsProxyNeeded(Boolean isProxyNeeded) {
    this.isProxyNeeded = isProxyNeeded;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("isMobileProxyNeeded")
  public Boolean getIsMobileProxyNeeded() {
    return isMobileProxyNeeded;
  }
  public void setIsMobileProxyNeeded(Boolean isMobileProxyNeeded) {
    this.isMobileProxyNeeded = isMobileProxyNeeded;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("needsSanitize")
  public Boolean getNeedsSanitize() {
    return needsSanitize;
  }
  public void setNeedsSanitize(Boolean needsSanitize) {
    this.needsSanitize = needsSanitize;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("proxyUrl")
  public String getProxyUrl() {
    return proxyUrl;
  }
  public void setProxyUrl(String proxyUrl) {
    this.proxyUrl = proxyUrl;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("topic")
  public String getTopic() {
    return topic;
  }
  public void setTopic(String topic) {
    this.topic = topic;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("suitabilityScore")
  public String getSuitabilityScore() {
    return suitabilityScore;
  }
  public void setSuitabilityScore(String suitabilityScore) {
    this.suitabilityScore = suitabilityScore;
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
  @JsonProperty("imagePath")
  public String getImagePath() {
    return imagePath;
  }
  public void setImagePath(String imagePath) {
    this.imagePath = imagePath;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("imageUrl")
  public String getImageUrl() {
    return imageUrl;
  }
  public void setImageUrl(String imageUrl) {
    this.imageUrl = imageUrl;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("imageHeight")
  public Integer getImageHeight() {
    return imageHeight;
  }
  public void setImageHeight(Integer imageHeight) {
    this.imageHeight = imageHeight;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("imageWidth")
  public Integer getImageWidth() {
    return imageWidth;
  }
  public void setImageWidth(Integer imageWidth) {
    this.imageWidth = imageWidth;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("logoUrl")
  public String getLogoUrl() {
    return logoUrl;
  }
  public void setLogoUrl(String logoUrl) {
    this.logoUrl = logoUrl;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("squareLogoUrl")
  public String getSquareLogoUrl() {
    return squareLogoUrl;
  }
  public void setSquareLogoUrl(String squareLogoUrl) {
    this.squareLogoUrl = squareLogoUrl;
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
  @JsonProperty("externalUrl")
  public String getExternalUrl() {
    return externalUrl;
  }
  public void setExternalUrl(String externalUrl) {
    this.externalUrl = externalUrl;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("externalUrlSource")
  public String getExternalUrlSource() {
    return externalUrlSource;
  }
  public void setExternalUrlSource(String externalUrlSource) {
    this.externalUrlSource = externalUrlSource;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("externalUrlType")
  public String getExternalUrlType() {
    return externalUrlType;
  }
  public void setExternalUrlType(String externalUrlType) {
    this.externalUrlType = externalUrlType;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Article {\n");
    
    sb.append("  id: ").append(id).append("\n");
    sb.append("  createdAt: ").append(createdAt).append("\n");
    sb.append("  title: ").append(title).append("\n");
    sb.append("  body: ").append(body).append("\n");
    sb.append("  isResponsive: ").append(isResponsive).append("\n");
    sb.append("  isProxyNeeded: ").append(isProxyNeeded).append("\n");
    sb.append("  isMobileProxyNeeded: ").append(isMobileProxyNeeded).append("\n");
    sb.append("  needsSanitize: ").append(needsSanitize).append("\n");
    sb.append("  proxyUrl: ").append(proxyUrl).append("\n");
    sb.append("  topic: ").append(topic).append("\n");
    sb.append("  suitabilityScore: ").append(suitabilityScore).append("\n");
    sb.append("  summary: ").append(summary).append("\n");
    sb.append("  imagePath: ").append(imagePath).append("\n");
    sb.append("  imageUrl: ").append(imageUrl).append("\n");
    sb.append("  imageHeight: ").append(imageHeight).append("\n");
    sb.append("  imageWidth: ").append(imageWidth).append("\n");
    sb.append("  logoUrl: ").append(logoUrl).append("\n");
    sb.append("  squareLogoUrl: ").append(squareLogoUrl).append("\n");
    sb.append("  url: ").append(url).append("\n");
    sb.append("  externalUrl: ").append(externalUrl).append("\n");
    sb.append("  externalUrlSource: ").append(externalUrlSource).append("\n");
    sb.append("  externalUrlType: ").append(externalUrlType).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
