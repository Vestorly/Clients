package vestorly.client.model;

import vestorly.client.model.Source;

import com.wordnik.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
public class Sourceresponse  {
  
  private Source source = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("source")
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
