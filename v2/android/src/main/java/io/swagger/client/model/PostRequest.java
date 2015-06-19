package io.swagger.client.model;

import io.swagger.client.model.PostInput;

import com.wordnik.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class Postrequest  {
  
  @SerializedName("post")
  private PostInput post = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  public PostInput getPost() {
    return post;
  }
  public void setPost(PostInput post) {
    this.post = post;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Postrequest {\n");
    
    sb.append("  post: ").append(post).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
