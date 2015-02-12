package com.wordnik.client.model;


import com.wordnik.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


/**
 * A Session object.
 **/
@ApiModel(description = "A Session object.")
public class Session  { 
  private String _id = null;
  
  
  /**
   * Id of session
   **/
  @ApiModelProperty(required = true, value = "Id of session")
  @JsonProperty("_id")
  public String get_id() {
    return _id;
  }
  public void set_id(String _id) {
    this._id = _id;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Session {\n");
    
    sb.append("  _id: ").append(_id).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
