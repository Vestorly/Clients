package vestorly.client.model;

import java.util.*;
import vestorly.client.model.MemberReport;

import com.wordnik.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
public class MemberReports  {
  
  private List<MemberReport> memberReports = new ArrayList<MemberReport>() ;

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("member_reports")
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
