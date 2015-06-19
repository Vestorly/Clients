package io.swagger.client.model;

import java.util.*;
import io.swagger.client.model.MemberReport;

import com.wordnik.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;


@ApiModel(description = "")
public class MemberReports  {
  
  @SerializedName("member_reports")
  private List<MemberReport> memberReports = new ArrayList<MemberReport>() ;

  
  /**
   **/
  @ApiModelProperty(value = "")
  public List<MemberReport> getMemberReports() {
    return memberReports;
  }
  public void setMemberReports(List<MemberReport> memberReports) {
    this.memberReports = memberReports;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class MemberReports {\n");
    
    sb.append("  memberReports: ").append(memberReports).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
