package vestorly.client.model;

import java.util.*;
import vestorly.client.model.Article;

import com.wordnik.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
public class Articles  {
  
  private List<Article> articles = new ArrayList<Article>() ;

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("articles")
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
