package io.swagger.model;

import io.swagger.model.Post;

import com.wordnik.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
public class Newsletterresponse  {
  
  private Post newsletter = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("newsletter")
  public Post getNewsletter() {
    return newsletter;
  }
  public void setNewsletter(Post newsletter) {
    this.newsletter = newsletter;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Newsletterresponse {\n");
    
    sb.append("  newsletter: ").append(newsletter).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
