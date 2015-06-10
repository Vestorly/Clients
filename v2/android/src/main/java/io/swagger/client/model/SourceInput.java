package io.swagger.client.model;


import com.wordnik.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class SourceInput  {
  
  @SerializedName("name")
  private String name = null;
  @SerializedName("url")
  private String url = null;
  @SerializedName("logo_url")
  private String logoUrl = null;
  @SerializedName("enabled")
  private Boolean enabled = null;
  @SerializedName("custom_rss_feed")
  private Boolean customRssFeed = null;
  @SerializedName("rss_publisher")
  private String rssPublisher = null;

  
  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public String getName() {
    return name;
  }
  public void setName(String name) {
    this.name = name;
  }

  
  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public String getUrl() {
    return url;
  }
  public void setUrl(String url) {
    this.url = url;
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
  public Boolean getEnabled() {
    return enabled;
  }
  public void setEnabled(Boolean enabled) {
    this.enabled = enabled;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getCustomRssFeed() {
    return customRssFeed;
  }
  public void setCustomRssFeed(Boolean customRssFeed) {
    this.customRssFeed = customRssFeed;
  }

  
  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public String getRssPublisher() {
    return rssPublisher;
  }
  public void setRssPublisher(String rssPublisher) {
    this.rssPublisher = rssPublisher;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class SourceInput {\n");
    
    sb.append("  name: ").append(name).append("\n");
    sb.append("  url: ").append(url).append("\n");
    sb.append("  logoUrl: ").append(logoUrl).append("\n");
    sb.append("  enabled: ").append(enabled).append("\n");
    sb.append("  customRssFeed: ").append(customRssFeed).append("\n");
    sb.append("  rssPublisher: ").append(rssPublisher).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
