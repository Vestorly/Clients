package io.swagger.model;

import io.swagger.model.Member;

import com.wordnik.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
public class Memberresponse  {
  
  private Member post = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("post")
  public Member getPost() {
    return post;
  }
  public void setPost(Member post) {
    this.post = post;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Memberresponse {\n");
    
    sb.append("  post: ").append(post).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
