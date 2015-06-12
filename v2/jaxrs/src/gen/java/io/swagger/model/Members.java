package io.swagger.model;

import io.swagger.model.Member;
import io.swagger.model.Meta;
import java.util.*;

import com.wordnik.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
public class Members  {
  
  private List<Member> members = new ArrayList<Member>() ;
  private Boolean moreResults = null;
  private Meta meta = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("members")
  public List<Member> getMembers() {
    return members;
  }
  public void setMembers(List<Member> members) {
    this.members = members;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("moreResults")
  public Boolean getMoreResults() {
    return moreResults;
  }
  public void setMoreResults(Boolean moreResults) {
    this.moreResults = moreResults;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("meta")
  public Meta getMeta() {
    return meta;
  }
  public void setMeta(Meta meta) {
    this.meta = meta;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Members {\n");
    
    sb.append("  members: ").append(members).append("\n");
    sb.append("  moreResults: ").append(moreResults).append("\n");
    sb.append("  meta: ").append(meta).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
