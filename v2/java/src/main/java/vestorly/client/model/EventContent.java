package vestorly.client.model;


import com.wordnik.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
public class EventContent  {
  
  private String id = null;
  private String contentField = null;
  private String contentId = null;
  private String contentType = null;
  private String createdAt = null;
  private String slug = null;
  private String updatedAt = null;

  
  /**
   * Mongo id of event
   **/
  @ApiModelProperty(value = "Mongo id of event")
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
  @JsonProperty("content_field")
  public String getContentField() {
    return contentField;
  }
  public void setContentField(String contentField) {
    this.contentField = contentField;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("content_id")
  public String getContentId() {
    return contentId;
  }
  public void setContentId(String contentId) {
    this.contentId = contentId;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("content_type")
  public String getContentType() {
    return contentType;
  }
  public void setContentType(String contentType) {
    this.contentType = contentType;
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
  @JsonProperty("slug")
  public String getSlug() {
    return slug;
  }
  public void setSlug(String slug) {
    this.slug = slug;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("updated_at")
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
