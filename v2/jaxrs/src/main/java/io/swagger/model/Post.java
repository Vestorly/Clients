package io.swagger.model;


import com.wordnik.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
public class Post  {
  
  private Boolean clientOnly = null;
  private Boolean imgCompressed = null;
  private Boolean imgChanged = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("clientOnly")
  public Boolean getClientOnly() {
    return clientOnly;
  }
  public void setClientOnly(Boolean clientOnly) {
    this.clientOnly = clientOnly;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("imgCompressed")
  public Boolean getImgCompressed() {
    return imgCompressed;
  }
  public void setImgCompressed(Boolean imgCompressed) {
    this.imgCompressed = imgCompressed;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("imgChanged")
  public Boolean getImgChanged() {
    return imgChanged;
  }
  public void setImgChanged(Boolean imgChanged) {
    this.imgChanged = imgChanged;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Post {\n");
    
    sb.append("  clientOnly: ").append(clientOnly).append("\n");
    sb.append("  imgCompressed: ").append(imgCompressed).append("\n");
    sb.append("  imgChanged: ").append(imgChanged).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
