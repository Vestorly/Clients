package io.swagger.client.model;

import io.swagger.client.model.Datetime;

import com.wordnik.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


/**
 * An Article document.
 **/
@ApiModel(description = "An Article document.")
public class Article  {
  
  private String _id = null;
  private String url = null;
  private String title = null;
  private String open_calais_topics = null;
  private String open_calais_keywords = null;
  private String categories = null;
  private String summary = null;
  private String unparsed_html = null;
  private String parsed_html = null;
  private String content = null;
  private String vestorly_topics = null;
  private String override_topic = null;
  private Datetime published_at = null;
  private String original_image_url = null;
  private String small_image_url = null;
  private String large_image_url = null;
  private String img = null;
  private String webpage_mobile_image_url = null;
  private String webpage_tablet_image_url = null;
  private String rss_feed_url = null;
  private String rss_feed_category = null;
  private String rss_feed_logo_url = null;
  private Boolean needs_sanitize = null;
  private Boolean is_responsive = null;
  private Boolean is_proxy_needed = null;
  private Boolean is_mobile_proxy_needed = null;
  private Boolean is_working_url = null;

  
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
   * URL of the article
   **/
  @ApiModelProperty(required = true, value = "URL of the article")
  @JsonProperty("url")
  public String getUrl() {
    return url;
  }
  public void setUrl(String url) {
    this.url = url;
  }

  
  /**
   * Title of the article
   **/
  @ApiModelProperty(required = true, value = "Title of the article")
  @JsonProperty("title")
  public String getTitle() {
    return title;
  }
  public void setTitle(String title) {
    this.title = title;
  }

  
  /**
   * Open calcais optics
   **/
  @ApiModelProperty(required = true, value = "Open calcais optics")
  @JsonProperty("open_calais_topics")
  public String getOpen_calais_topics() {
    return open_calais_topics;
  }
  public void setOpen_calais_topics(String open_calais_topics) {
    this.open_calais_topics = open_calais_topics;
  }

  
  /**
   * Open calais keywords
   **/
  @ApiModelProperty(required = true, value = "Open calais keywords")
  @JsonProperty("open_calais_keywords")
  public String getOpen_calais_keywords() {
    return open_calais_keywords;
  }
  public void setOpen_calais_keywords(String open_calais_keywords) {
    this.open_calais_keywords = open_calais_keywords;
  }

  
  /**
   * Categories of article
   **/
  @ApiModelProperty(required = true, value = "Categories of article")
  @JsonProperty("categories")
  public String getCategories() {
    return categories;
  }
  public void setCategories(String categories) {
    this.categories = categories;
  }

  
  /**
   * Summary of article
   **/
  @ApiModelProperty(required = true, value = "Summary of article")
  @JsonProperty("summary")
  public String getSummary() {
    return summary;
  }
  public void setSummary(String summary) {
    this.summary = summary;
  }

  
  /**
   * Unparsed HTML
   **/
  @ApiModelProperty(required = true, value = "Unparsed HTML")
  @JsonProperty("unparsed_html")
  public String getUnparsed_html() {
    return unparsed_html;
  }
  public void setUnparsed_html(String unparsed_html) {
    this.unparsed_html = unparsed_html;
  }

  
  /**
   * Parsed HTML
   **/
  @ApiModelProperty(required = true, value = "Parsed HTML")
  @JsonProperty("parsed_html")
  public String getParsed_html() {
    return parsed_html;
  }
  public void setParsed_html(String parsed_html) {
    this.parsed_html = parsed_html;
  }

  
  /**
   * Content of article
   **/
  @ApiModelProperty(required = true, value = "Content of article")
  @JsonProperty("content")
  public String getContent() {
    return content;
  }
  public void setContent(String content) {
    this.content = content;
  }

  
  /**
   * Vestorly topics
   **/
  @ApiModelProperty(required = true, value = "Vestorly topics")
  @JsonProperty("vestorly_topics")
  public String getVestorly_topics() {
    return vestorly_topics;
  }
  public void setVestorly_topics(String vestorly_topics) {
    this.vestorly_topics = vestorly_topics;
  }

  
  /**
   * Override topics
   **/
  @ApiModelProperty(required = true, value = "Override topics")
  @JsonProperty("override_topic")
  public String getOverride_topic() {
    return override_topic;
  }
  public void setOverride_topic(String override_topic) {
    this.override_topic = override_topic;
  }

  
  /**
   * Article published at time
   **/
  @ApiModelProperty(required = true, value = "Article published at time")
  @JsonProperty("published_at")
  public Datetime getPublished_at() {
    return published_at;
  }
  public void setPublished_at(Datetime published_at) {
    this.published_at = published_at;
  }

  
  /**
   * Original image url
   **/
  @ApiModelProperty(required = true, value = "Original image url")
  @JsonProperty("original_image_url")
  public String getOriginal_image_url() {
    return original_image_url;
  }
  public void setOriginal_image_url(String original_image_url) {
    this.original_image_url = original_image_url;
  }

  
  /**
   * Small image url
   **/
  @ApiModelProperty(required = true, value = "Small image url")
  @JsonProperty("small_image_url")
  public String getSmall_image_url() {
    return small_image_url;
  }
  public void setSmall_image_url(String small_image_url) {
    this.small_image_url = small_image_url;
  }

  
  /**
   * Large image url
   **/
  @ApiModelProperty(required = true, value = "Large image url")
  @JsonProperty("large_image_url")
  public String getLarge_image_url() {
    return large_image_url;
  }
  public void setLarge_image_url(String large_image_url) {
    this.large_image_url = large_image_url;
  }

  
  /**
   * Image
   **/
  @ApiModelProperty(required = true, value = "Image")
  @JsonProperty("img")
  public String getImg() {
    return img;
  }
  public void setImg(String img) {
    this.img = img;
  }

  
  /**
   * Webpage mobile url
   **/
  @ApiModelProperty(required = true, value = "Webpage mobile url")
  @JsonProperty("webpage_mobile_image_url")
  public String getWebpage_mobile_image_url() {
    return webpage_mobile_image_url;
  }
  public void setWebpage_mobile_image_url(String webpage_mobile_image_url) {
    this.webpage_mobile_image_url = webpage_mobile_image_url;
  }

  
  /**
   * Webpage tablet url
   **/
  @ApiModelProperty(required = true, value = "Webpage tablet url")
  @JsonProperty("webpage_tablet_image_url")
  public String getWebpage_tablet_image_url() {
    return webpage_tablet_image_url;
  }
  public void setWebpage_tablet_image_url(String webpage_tablet_image_url) {
    this.webpage_tablet_image_url = webpage_tablet_image_url;
  }

  
  /**
   * Article URL
   **/
  @ApiModelProperty(required = true, value = "Article URL")
  @JsonProperty("rss_feed_url")
  public String getRss_feed_url() {
    return rss_feed_url;
  }
  public void setRss_feed_url(String rss_feed_url) {
    this.rss_feed_url = rss_feed_url;
  }

  
  /**
   * Article category
   **/
  @ApiModelProperty(required = true, value = "Article category")
  @JsonProperty("rss_feed_category")
  public String getRss_feed_category() {
    return rss_feed_category;
  }
  public void setRss_feed_category(String rss_feed_category) {
    this.rss_feed_category = rss_feed_category;
  }

  
  /**
   * Article logo
   **/
  @ApiModelProperty(required = true, value = "Article logo")
  @JsonProperty("rss_feed_logo_url")
  public String getRss_feed_logo_url() {
    return rss_feed_logo_url;
  }
  public void setRss_feed_logo_url(String rss_feed_logo_url) {
    this.rss_feed_logo_url = rss_feed_logo_url;
  }

  
  /**
   * Does this article need sanitizing?
   **/
  @ApiModelProperty(required = true, value = "Does this article need sanitizing?")
  @JsonProperty("needs_sanitize")
  public Boolean getNeeds_sanitize() {
    return needs_sanitize;
  }
  public void setNeeds_sanitize(Boolean needs_sanitize) {
    this.needs_sanitize = needs_sanitize;
  }

  
  /**
   * Is this article responsive
   **/
  @ApiModelProperty(required = true, value = "Is this article responsive")
  @JsonProperty("is_responsive")
  public Boolean getIs_responsive() {
    return is_responsive;
  }
  public void setIs_responsive(Boolean is_responsive) {
    this.is_responsive = is_responsive;
  }

  
  /**
   * Is a proxy used for this article
   **/
  @ApiModelProperty(required = true, value = "Is a proxy used for this article")
  @JsonProperty("is_proxy_needed")
  public Boolean getIs_proxy_needed() {
    return is_proxy_needed;
  }
  public void setIs_proxy_needed(Boolean is_proxy_needed) {
    this.is_proxy_needed = is_proxy_needed;
  }

  
  /**
   * Is mobile proxying needed
   **/
  @ApiModelProperty(required = true, value = "Is mobile proxying needed")
  @JsonProperty("is_mobile_proxy_needed")
  public Boolean getIs_mobile_proxy_needed() {
    return is_mobile_proxy_needed;
  }
  public void setIs_mobile_proxy_needed(Boolean is_mobile_proxy_needed) {
    this.is_mobile_proxy_needed = is_mobile_proxy_needed;
  }

  
  /**
   * Is working url?
   **/
  @ApiModelProperty(required = true, value = "Is working url?")
  @JsonProperty("is_working_url")
  public Boolean getIs_working_url() {
    return is_working_url;
  }
  public void setIs_working_url(Boolean is_working_url) {
    this.is_working_url = is_working_url;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Article {\n");
    
    sb.append("  _id: ").append(_id).append("\n");
    sb.append("  url: ").append(url).append("\n");
    sb.append("  title: ").append(title).append("\n");
    sb.append("  open_calais_topics: ").append(open_calais_topics).append("\n");
    sb.append("  open_calais_keywords: ").append(open_calais_keywords).append("\n");
    sb.append("  categories: ").append(categories).append("\n");
    sb.append("  summary: ").append(summary).append("\n");
    sb.append("  unparsed_html: ").append(unparsed_html).append("\n");
    sb.append("  parsed_html: ").append(parsed_html).append("\n");
    sb.append("  content: ").append(content).append("\n");
    sb.append("  vestorly_topics: ").append(vestorly_topics).append("\n");
    sb.append("  override_topic: ").append(override_topic).append("\n");
    sb.append("  published_at: ").append(published_at).append("\n");
    sb.append("  original_image_url: ").append(original_image_url).append("\n");
    sb.append("  small_image_url: ").append(small_image_url).append("\n");
    sb.append("  large_image_url: ").append(large_image_url).append("\n");
    sb.append("  img: ").append(img).append("\n");
    sb.append("  webpage_mobile_image_url: ").append(webpage_mobile_image_url).append("\n");
    sb.append("  webpage_tablet_image_url: ").append(webpage_tablet_image_url).append("\n");
    sb.append("  rss_feed_url: ").append(rss_feed_url).append("\n");
    sb.append("  rss_feed_category: ").append(rss_feed_category).append("\n");
    sb.append("  rss_feed_logo_url: ").append(rss_feed_logo_url).append("\n");
    sb.append("  needs_sanitize: ").append(needs_sanitize).append("\n");
    sb.append("  is_responsive: ").append(is_responsive).append("\n");
    sb.append("  is_proxy_needed: ").append(is_proxy_needed).append("\n");
    sb.append("  is_mobile_proxy_needed: ").append(is_mobile_proxy_needed).append("\n");
    sb.append("  is_working_url: ").append(is_working_url).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
