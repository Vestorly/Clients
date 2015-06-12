package io.swagger.client.model;

import java.util.*;
import io.swagger.client.model.Article;

import com.wordnik.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class Articles  {
  
  @SerializedName("articles")
  private List<Article> articles = new ArrayList<Article>() ;

  
  /**
   **/
  @ApiModelProperty(value = "")
  public List<Article> getArticles() {
    return articles;
  }
  public void setArticles(List<Article> articles) {
    this.articles = articles;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Articles {\n");
    
    sb.append("  articles: ").append(articles).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
