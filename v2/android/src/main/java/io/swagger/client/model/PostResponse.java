package io.swagger.client.model;

import io.swagger.client.model.Post;

import com.wordnik.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class Postresponse  {
  
  @SerializedName("post")
  private Post post = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Post getPost() {
    return post;
  }
  public void setPost(Post post) {
    this.post = post;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Postresponse {\n");
    
    sb.append("  post: ").append(post).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
