package io.swagger.model;


import com.wordnik.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


/**
 * A Post object.
 **/
@ApiModel(description = "A Post object.")
public class Post  {
  
  private String _id = null;
  private String title = null;
  private String body = null;
  private String comment = null;
  private String video = null;
  private String img = null;

  
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
   * Title of the post
   **/
  @ApiModelProperty(required = true, value = "Title of the post")
  @JsonProperty("title")
  public String getTitle() {
    return title;
  }
  public void setTitle(String title) {
    this.title = title;
  }

  
  /**
   * Body of the post
   **/
  @ApiModelProperty(required = true, value = "Body of the post")
  @JsonProperty("body")
  public String getBody() {
    return body;
  }
  public void setBody(String body) {
    this.body = body;
  }

  
  /**
   * Comment associated with the post
   **/
  @ApiModelProperty(required = true, value = "Comment associated with the post")
  @JsonProperty("comment")
  public String getComment() {
    return comment;
  }
  public void setComment(String comment) {
    this.comment = comment;
  }

  
  /**
   * Video associated with the post
   **/
  @ApiModelProperty(required = false, value = "Video associated with the post")
  @JsonProperty("video")
  public String getVideo() {
    return video;
  }
  public void setVideo(String video) {
    this.video = video;
  }

  
  /**
   * Image associated with the post
   **/
  @ApiModelProperty(required = false, value = "Image associated with the post")
  @JsonProperty("img")
  public String getImg() {
    return img;
  }
  public void setImg(String img) {
    this.img = img;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Post {\n");
    
    sb.append("  _id: ").append(_id).append("\n");
    sb.append("  title: ").append(title).append("\n");
    sb.append("  body: ").append(body).append("\n");
    sb.append("  comment: ").append(comment).append("\n");
    sb.append("  video: ").append(video).append("\n");
    sb.append("  img: ").append(img).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
