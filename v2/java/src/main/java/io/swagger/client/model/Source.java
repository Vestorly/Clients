package io.swagger.client.model;


import com.wordnik.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


/**
 * A source object.
 **/
@ApiModel(description = "A source object.")
public class Source  {
  
  private String _id = null;
  private String name = null;
  private String url = null;
  private String logo_url = null;
  private Boolean enabled = null;
  private Boolean custom_rss_feed = null;
  private String rss_publisher = null;

  
  /**
   * Id of source
   **/
  @ApiModelProperty(required = true, value = "Id of source")
  @JsonProperty("_id")
  public String get_id() {
    return _id;
  }
  public void set_id(String _id) {
    this._id = _id;
  }

  
  /**
   * Name of source
   **/
  @ApiModelProperty(required = true, value = "Name of source")
  @JsonProperty("name")
  public String getName() {
    return name;
  }
  public void setName(String name) {
    this.name = name;
  }

  
  /**
   * Url of source
   **/
  @ApiModelProperty(required = true, value = "Url of source")
  @JsonProperty("url")
  public String getUrl() {
    return url;
  }
  public void setUrl(String url) {
    this.url = url;
  }

  
  /**
   * Logo url of source
   **/
  @ApiModelProperty(required = true, value = "Logo url of source")
  @JsonProperty("logo_url")
  public String getLogo_url() {
    return logo_url;
  }
  public void setLogo_url(String logo_url) {
    this.logo_url = logo_url;
  }

  
  /**
   * Is the source enabled
   **/
  @ApiModelProperty(required = true, value = "Is the source enabled")
  @JsonProperty("enabled")
  public Boolean getEnabled() {
    return enabled;
  }
  public void setEnabled(Boolean enabled) {
    this.enabled = enabled;
  }

  
  /**
   * Is the source using custom RSS feed
   **/
  @ApiModelProperty(required = true, value = "Is the source using custom RSS feed")
  @JsonProperty("custom_rss_feed")
  public Boolean getCustom_rss_feed() {
    return custom_rss_feed;
  }
  public void setCustom_rss_feed(Boolean custom_rss_feed) {
    this.custom_rss_feed = custom_rss_feed;
  }

  
  /**
   * RSS publisher of the source
   **/
  @ApiModelProperty(required = true, value = "RSS publisher of the source")
  @JsonProperty("rss_publisher")
  public String getRss_publisher() {
    return rss_publisher;
  }
  public void setRss_publisher(String rss_publisher) {
    this.rss_publisher = rss_publisher;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Source {\n");
    
    sb.append("  _id: ").append(_id).append("\n");
    sb.append("  name: ").append(name).append("\n");
    sb.append("  url: ").append(url).append("\n");
    sb.append("  logo_url: ").append(logo_url).append("\n");
    sb.append("  enabled: ").append(enabled).append("\n");
    sb.append("  custom_rss_feed: ").append(custom_rss_feed).append("\n");
    sb.append("  rss_publisher: ").append(rss_publisher).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
