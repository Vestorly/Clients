package io.swagger.client.model;


import com.wordnik.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class Article  {
  
  @SerializedName("_id")
  private String id = null;
  @SerializedName("created_at")
  private String createdAt = null;
  @SerializedName("title")
  private String title = null;
  @SerializedName("body")
  private String body = null;
  @SerializedName("is_responsive")
  private Boolean isResponsive = null;
  @SerializedName("is_proxy_needed")
  private Boolean isProxyNeeded = null;
  @SerializedName("is_mobile_proxy_needed")
  private Boolean isMobileProxyNeeded = null;
  @SerializedName("needs_sanitize")
  private Boolean needsSanitize = null;
  @SerializedName("proxy_url")
  private String proxyUrl = null;
  @SerializedName("topic")
  private String topic = null;
  @SerializedName("suitability_score")
  private String suitabilityScore = null;
  @SerializedName("summary")
  private String summary = null;
  @SerializedName("image_path")
  private String imagePath = null;
  @SerializedName("image_url")
  private String imageUrl = null;
  @SerializedName("image_height")
  private Integer imageHeight = null;
  @SerializedName("image_width")
  private Integer imageWidth = null;
  @SerializedName("logo_url")
  private String logoUrl = null;
  @SerializedName("square_logo_url")
  private String squareLogoUrl = null;
  @SerializedName("url")
  private String url = null;
  @SerializedName("external_url")
  private String externalUrl = null;
  @SerializedName("external_url_source")
  private String externalUrlSource = null;
  @SerializedName("external_url_type")
  private String externalUrlType = null;

  
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
  public String getCreatedAt() {
    return createdAt;
  }
  public void setCreatedAt(String createdAt) {
    this.createdAt = createdAt;
  }

  
  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public String getTitle() {
    return title;
  }
  public void setTitle(String title) {
    this.title = title;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getBody() {
    return body;
  }
  public void setBody(String body) {
    this.body = body;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getIsResponsive() {
    return isResponsive;
  }
  public void setIsResponsive(Boolean isResponsive) {
    this.isResponsive = isResponsive;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getIsProxyNeeded() {
    return isProxyNeeded;
  }
  public void setIsProxyNeeded(Boolean isProxyNeeded) {
    this.isProxyNeeded = isProxyNeeded;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getIsMobileProxyNeeded() {
    return isMobileProxyNeeded;
  }
  public void setIsMobileProxyNeeded(Boolean isMobileProxyNeeded) {
    this.isMobileProxyNeeded = isMobileProxyNeeded;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getNeedsSanitize() {
    return needsSanitize;
  }
  public void setNeedsSanitize(Boolean needsSanitize) {
    this.needsSanitize = needsSanitize;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getProxyUrl() {
    return proxyUrl;
  }
  public void setProxyUrl(String proxyUrl) {
    this.proxyUrl = proxyUrl;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getTopic() {
    return topic;
  }
  public void setTopic(String topic) {
    this.topic = topic;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getSuitabilityScore() {
    return suitabilityScore;
  }
  public void setSuitabilityScore(String suitabilityScore) {
    this.suitabilityScore = suitabilityScore;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getSummary() {
    return summary;
  }
  public void setSummary(String summary) {
    this.summary = summary;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getImagePath() {
    return imagePath;
  }
  public void setImagePath(String imagePath) {
    this.imagePath = imagePath;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getImageUrl() {
    return imageUrl;
  }
  public void setImageUrl(String imageUrl) {
    this.imageUrl = imageUrl;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getImageHeight() {
    return imageHeight;
  }
  public void setImageHeight(Integer imageHeight) {
    this.imageHeight = imageHeight;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getImageWidth() {
    return imageWidth;
  }
  public void setImageWidth(Integer imageWidth) {
    this.imageWidth = imageWidth;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getLogoUrl() {
    return logoUrl;
  }
  public void setLogoUrl(String logoUrl) {
    this.logoUrl = logoUrl;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getSquareLogoUrl() {
    return squareLogoUrl;
  }
  public void setSquareLogoUrl(String squareLogoUrl) {
    this.squareLogoUrl = squareLogoUrl;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getUrl() {
    return url;
  }
  public void setUrl(String url) {
    this.url = url;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getExternalUrl() {
    return externalUrl;
  }
  public void setExternalUrl(String externalUrl) {
    this.externalUrl = externalUrl;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getExternalUrlSource() {
    return externalUrlSource;
  }
  public void setExternalUrlSource(String externalUrlSource) {
    this.externalUrlSource = externalUrlSource;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
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
