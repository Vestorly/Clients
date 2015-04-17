package io.swagger.client.model;

import java.util.*;
import io.swagger.client.model.Source;

import com.wordnik.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
public class Sources  {
  
  private List<Source> sources = new ArrayList<Source>() ;

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("sources")
  public List<Source> getSources() {
    return sources;
  }
  public void setSources(List<Source> sources) {
    this.sources = sources;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Sources {\n");
    
    sb.append("  sources: ").append(sources).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
