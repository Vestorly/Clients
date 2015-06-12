package io.swagger.client.model;

import io.swagger.client.model.Event;
import java.util.*;

import com.wordnik.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class Events  {
  
  @SerializedName("events")
  private List<Event> events = new ArrayList<Event>() ;

  
  /**
   **/
  @ApiModelProperty(value = "")
  public List<Event> getEvents() {
    return events;
  }
  public void setEvents(List<Event> events) {
    this.events = events;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Events {\n");
    
    sb.append("  events: ").append(events).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
