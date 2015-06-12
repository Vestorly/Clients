package io.swagger.client.model;

import io.swagger.client.model.Meta;

import com.wordnik.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class Eventcreateresponse  {
  
  @SerializedName("meta")
  private Meta meta = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Meta getMeta() {
    return meta;
  }
  public void setMeta(Meta meta) {
    this.meta = meta;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Eventcreateresponse {\n");
    
    sb.append("  meta: ").append(meta).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
