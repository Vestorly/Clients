package io.swagger.model;

import java.util.*;
import io.swagger.model.Member;

import com.wordnik.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
public class Members  {
  
  private List<Member> articles = new ArrayList<Member>() ;

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("articles")
  public List<Member> getArticles() {
    return articles;
  }
  public void setArticles(List<Member> articles) {
    this.articles = articles;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Members {\n");
    
    sb.append("  articles: ").append(articles).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
