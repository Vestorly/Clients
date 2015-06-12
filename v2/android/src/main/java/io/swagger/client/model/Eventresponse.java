package io.swagger.client.model;

import io.swagger.client.model.Event;

import com.wordnik.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class Eventresponse  {
  
  @SerializedName("event")
  private Event event = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Event getEvent() {
    return event;
  }
  public void setEvent(Event event) {
    this.event = event;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Eventresponse {\n");
    
    sb.append("  event: ").append(event).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
