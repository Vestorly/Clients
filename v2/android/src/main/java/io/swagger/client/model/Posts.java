package io.swagger.client.model;

import io.swagger.client.model.Post;
import java.util.*;

import com.wordnik.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
public class Posts  {
  
  private List<Post> posts = new ArrayList<Post>() ;

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("posts")
  public List<Post> getPosts() {
    return posts;
  }
  public void setPosts(List<Post> posts) {
    this.posts = posts;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Posts {\n");
    
    sb.append("  posts: ").append(posts).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
