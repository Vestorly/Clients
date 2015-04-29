package io.swagger.client.model;

import io.swagger.client.model.PostInput;

import com.wordnik.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
public class PostRequest  {
  
  private PostInput post = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("post")
  public PostInput getPost() {
    return post;
  }
  public void setPost(PostInput post) {
    this.post = post;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class PostRequest {\n");
    
    sb.append("  post: ").append(post).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
