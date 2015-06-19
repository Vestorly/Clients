package io.swagger.client.model;


import com.wordnik.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class EventContent  {
  
  @SerializedName("_id")
  private String id = null;
  @SerializedName("content_field")
  private String contentField = null;
  @SerializedName("content_id")
  private String contentId = null;
  @SerializedName("content_type")
  private String contentType = null;
  @SerializedName("created_at")
  private String createdAt = null;
  @SerializedName("slug")
  private String slug = null;
  @SerializedName("updated_at")
  private String updatedAt = null;

  
  /**
   * Mongo id of event
   **/
  @ApiModelProperty(value = "Mongo id of event")
  public String getId() {
    return id;
  }
  public void setId(String id) {
    this.id = id;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getContentField() {
    return contentField;
  }
  public void setContentField(String contentField) {
    this.contentField = contentField;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getContentId() {
    return contentId;
  }
  public void setContentId(String contentId) {
    this.contentId = contentId;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public String getContentType() {
    return contentType;
  }
  public void setContentType(String contentType) {
    this.contentType = contentType;
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
  public String getUpdatedAt() {
    return updatedAt;
  }
  public void setUpdatedAt(String updatedAt) {
    this.updatedAt = updatedAt;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class EventContent {\n");
    
    sb.append("  id: ").append(id).append("\n");
    sb.append("  contentField: ").append(contentField).append("\n");
    sb.append("  contentId: ").append(contentId).append("\n");
    sb.append("  contentType: ").append(contentType).append("\n");
    sb.append("  createdAt: ").append(createdAt).append("\n");
    sb.append("  slug: ").append(slug).append("\n");
    sb.append("  updatedAt: ").append(updatedAt).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
