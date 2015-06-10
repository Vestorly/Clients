package io.swagger.client.model;

import io.swagger.client.model.Source;

import com.wordnik.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class Sourceresponse  {
  
  @SerializedName("source")
  private Source source = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Source getSource() {
    return source;
  }
  public void setSource(Source source) {
    this.source = source;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Sourceresponse {\n");
    
    sb.append("  source: ").append(source).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
