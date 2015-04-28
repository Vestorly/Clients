package io.swagger.model;

import io.swagger.model.Event;

import com.wordnik.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
public class Eventresponse  {
  
  private Event event = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("event")
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
