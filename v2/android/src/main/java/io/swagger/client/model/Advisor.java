package io.swagger.client.model;


import com.wordnik.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
public class Advisor  {
  
  private Boolean clientOnly = null;
  private Boolean imgCompressed = null;
  private Boolean imgChanged = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("client_only")
  public Boolean getClientOnly() {
    return clientOnly;
  }
  public void setClientOnly(Boolean clientOnly) {
    this.clientOnly = clientOnly;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("img_compressed")
  public Boolean getImgCompressed() {
    return imgCompressed;
  }
  public void setImgCompressed(Boolean imgCompressed) {
    this.imgCompressed = imgCompressed;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("img_changed")
  public Boolean getImgChanged() {
    return imgChanged;
  }
  public void setImgChanged(Boolean imgChanged) {
    this.imgChanged = imgChanged;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Advisor {\n");
    
    sb.append("  clientOnly: ").append(clientOnly).append("\n");
    sb.append("  imgCompressed: ").append(imgCompressed).append("\n");
    sb.append("  imgChanged: ").append(imgChanged).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
