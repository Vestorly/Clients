package io.swagger.client.model;

import io.swagger.client.model.Newsletter;

import com.wordnik.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class Newsletterresponse  {
  
  @SerializedName("newsletter")
  private Newsletter newsletter = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Newsletter getNewsletter() {
    return newsletter;
  }
  public void setNewsletter(Newsletter newsletter) {
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
