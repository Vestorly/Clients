package io.swagger.client.model;


import com.wordnik.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class Features  {
  
  @SerializedName("_id")
  private String id = null;

  
  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public String getId() {
    return id;
  }
  public void setId(String id) {
    this.id = id;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Features {\n");
    
    sb.append("  id: ").append(id).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
