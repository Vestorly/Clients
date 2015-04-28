package io.swagger.client.model;

import io.swagger.client.model.Article;

import com.wordnik.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
public class Articleresponse  {
  
  private Article article = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("article")
  public Article getArticle() {
    return article;
  }
  public void setArticle(Article article) {
    this.article = article;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Articleresponse {\n");
    
    sb.append("  article: ").append(article).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
