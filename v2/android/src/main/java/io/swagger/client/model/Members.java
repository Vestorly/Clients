package io.swagger.client.model;

import io.swagger.client.model.Member;
import io.swagger.client.model.Meta;
import java.util.*;

import com.wordnik.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class Members  {
  
  @SerializedName("members")
  private List<Member> members = new ArrayList<Member>() ;
  @SerializedName("more_results")
  private Boolean moreResults = null;
  @SerializedName("meta")
  private Meta meta = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  public List<Member> getMembers() {
    return members;
  }
  public void setMembers(List<Member> members) {
    this.members = members;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getMoreResults() {
    return moreResults;
  }
  public void setMoreResults(Boolean moreResults) {
    this.moreResults = moreResults;
  }

  
  /**
   **/
  @ApiModelProperty(value = "")
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
