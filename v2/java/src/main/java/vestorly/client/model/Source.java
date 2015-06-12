package vestorly.client.model;


import com.wordnik.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
public class Source  {
  
  private String id = null;
  private String name = null;
  private String url = null;
  private String logoUrl = null;
  private Boolean enabled = null;
  private Boolean customRssFeed = null;
  private String rssPublisher = null;

  
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
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("name")
  public String getName() {
    return name;
  }
  public void setName(String name) {
    this.name = name;
  }

  
  /**
   **/
  @ApiModelProperty(required = true, value = "")
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
  @JsonProperty("enabled")
  public Boolean getEnabled() {
    return enabled;
  }
  public void setEnabled(Boolean enabled) {
    this.enabled = enabled;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("custom_rss_feed")
  public Boolean getCustomRssFeed() {
    return customRssFeed;
  }
  public void setCustomRssFeed(Boolean customRssFeed) {
    this.customRssFeed = customRssFeed;
  }

  
  /**
   **/
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("rss_publisher")
  public String getRssPublisher() {
    return rssPublisher;
  }
  public void setRssPublisher(String rssPublisher) {
    this.rssPublisher = rssPublisher;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Source {\n");
    
    sb.append("  id: ").append(id).append("\n");
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
