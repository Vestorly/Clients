package vestorly.client.model;

import vestorly.client.model.Source;
import java.util.*;

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
