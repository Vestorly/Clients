package io.swagger.client.model;


import com.wordnik.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
public class PersonalSettings  {
  
  private String id = null;

  
  /**
   **/
  @ApiModelProperty(required = true, value = "")
  @JsonProperty("_id")
  public String getId() {
    return id;
  }
  public void setId(String id) {
    this.id = id;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class PersonalSettings {\n");
    
    sb.append("  id: ").append(id).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
