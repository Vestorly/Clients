package io.swagger.model;


import com.wordnik.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
public class Post  {
  
  private String id = null;
  private String title = null;
  private String postDate = null;
  private String body = null;
  private String comment = null;
  private Boolean clientOnly = null;
  private String attachment = null;
  private String video = null;
  private String img = null;
  private String imageUrl = null;
  private Boolean imgCompressed = null;
  private Boolean imgChanged = null;
  private String topic = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
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
  @JsonProperty("postDate")
  public String getPostDate() {
    return postDate;
  }
  public void setPostDate(String postDate) {
    this.postDate = postDate;
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
  @JsonProperty("comment")
  public String getComment() {
    return comment;
  }
  public void setComment(String comment) {
    this.comment = comment;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("clientOnly")
  public Boolean getClientOnly() {
    return clientOnly;
  }
  public void setClientOnly(Boolean clientOnly) {
    this.clientOnly = clientOnly;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("attachment")
  public String getAttachment() {
    return attachment;
  }
  public void setAttachment(String attachment) {
    this.attachment = attachment;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("video")
  public String getVideo() {
    return video;
  }
  public void setVideo(String video) {
    this.video = video;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("img")
  public String getImg() {
    return img;
  }
  public void setImg(String img) {
    this.img = img;
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
  @JsonProperty("imgCompressed")
  public Boolean getImgCompressed() {
    return imgCompressed;
  }
  public void setImgCompressed(Boolean imgCompressed) {
    this.imgCompressed = imgCompressed;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("imgChanged")
  public Boolean getImgChanged() {
    return imgChanged;
  }
  public void setImgChanged(Boolean imgChanged) {
    this.imgChanged = imgChanged;
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

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Post {\n");
    
    sb.append("  id: ").append(id).append("\n");
    sb.append("  title: ").append(title).append("\n");
    sb.append("  postDate: ").append(postDate).append("\n");
    sb.append("  body: ").append(body).append("\n");
    sb.append("  comment: ").append(comment).append("\n");
    sb.append("  clientOnly: ").append(clientOnly).append("\n");
    sb.append("  attachment: ").append(attachment).append("\n");
    sb.append("  video: ").append(video).append("\n");
    sb.append("  img: ").append(img).append("\n");
    sb.append("  imageUrl: ").append(imageUrl).append("\n");
    sb.append("  imgCompressed: ").append(imgCompressed).append("\n");
    sb.append("  imgChanged: ").append(imgChanged).append("\n");
    sb.append("  topic: ").append(topic).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
