package io.swagger.model;

import java.util.*;
import io.swagger.model.Member;

import com.wordnik.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
public class Members  {
  
  private List<Member> posts = new ArrayList<Member>() ;
  private Boolean moreResults = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("posts")
  public List<Member> getPosts() {
    return posts;
  }
  public void setPosts(List<Member> posts) {
    this.posts = posts;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("moreResults")
  public Boolean getMoreResults() {
    return moreResults;
  }
  public void setMoreResults(Boolean moreResults) {
    this.moreResults = moreResults;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Members {\n");
    
    sb.append("  posts: ").append(posts).append("\n");
    sb.append("  moreResults: ").append(moreResults).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
