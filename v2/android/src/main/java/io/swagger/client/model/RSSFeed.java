package io.swagger.client.model;

import io.swagger.client.model.Url;

import com.wordnik.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


/**
 * An RSSFeed document.
 **/
@ApiModel(description = "An RSSFeed document.")
public class RSSFeed  {
  
  private String _id = null;
  private String name = null;
  private String category = null;
  private Url url = null;
  private Url logo_url = null;
  private String needs_sanitize = null;

  
  /**
   * Id of object
   **/
  @ApiModelProperty(required = true, value = "Id of object")
  @JsonProperty("_id")
  public String get_id() {
    return _id;
  }
  public void set_id(String _id) {
    this._id = _id;
  }

  
  /**
   * Name of rss feed
   **/
  @ApiModelProperty(required = true, value = "Name of rss feed")
  @JsonProperty("name")
  public String getName() {
    return name;
  }
  public void setName(String name) {
    this.name = name;
  }

  
  /**
   * Category of rss feed
   **/
  @ApiModelProperty(required = true, value = "Category of rss feed")
  @JsonProperty("category")
  public String getCategory() {
    return category;
  }
  public void setCategory(String category) {
    this.category = category;
  }

  
  /**
   * URL of rss feed
   **/
  @ApiModelProperty(required = true, value = "URL of rss feed")
  @JsonProperty("url")
  public Url getUrl() {
    return url;
  }
  public void setUrl(Url url) {
    this.url = url;
  }

  
  /**
   * Logo URL of rss feed
   **/
  @ApiModelProperty(required = true, value = "Logo URL of rss feed")
  @JsonProperty("logo_url")
  public Url getLogo_url() {
    return logo_url;
  }
  public void setLogo_url(Url logo_url) {
    this.logo_url = logo_url;
  }

  
  /**
   * Does the feed need to be sanatized.
   **/
  @ApiModelProperty(required = true, value = "Does the feed need to be sanatized.")
  @JsonProperty("needs_sanitize")
  public String getNeeds_sanitize() {
    return needs_sanitize;
  }
  public void setNeeds_sanitize(String needs_sanitize) {
    this.needs_sanitize = needs_sanitize;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class RSSFeed {\n");
    
    sb.append("  _id: ").append(_id).append("\n");
    sb.append("  name: ").append(name).append("\n");
    sb.append("  category: ").append(category).append("\n");
    sb.append("  url: ").append(url).append("\n");
    sb.append("  logo_url: ").append(logo_url).append("\n");
    sb.append("  needs_sanitize: ").append(needs_sanitize).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
