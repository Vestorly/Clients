using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.model {
  [DataContract]
  public class MemberEvent {
    
    
    [DataMember(Name="_id", EmitDefaultValue=false)]
    public string id { get; set; }

    
    
    [DataMember(Name="created_at", EmitDefaultValue=false)]
    public string createdAt { get; set; }

    
    
    [DataMember(Name="type", EmitDefaultValue=false)]
    public string type { get; set; }

    
    
    [DataMember(Name="source", EmitDefaultValue=false)]
    public string source { get; set; }

    
    
    [DataMember(Name="referer", EmitDefaultValue=false)]
    public string referer { get; set; }

    
    
    [DataMember(Name="original_url", EmitDefaultValue=false)]
    public string originalUrl { get; set; }

    
    
    [DataMember(Name="originator_email", EmitDefaultValue=false)]
    public string originatorEmail { get; set; }

    
    
    [DataMember(Name="originator_name", EmitDefaultValue=false)]
    public string originatorName { get; set; }

    
    
    [DataMember(Name="parent_originator_id", EmitDefaultValue=false)]
    public string parentOriginatorId { get; set; }

    
    
    [DataMember(Name="parent_event_id", EmitDefaultValue=false)]
    public string parentEventId { get; set; }

    
    
    [DataMember(Name="originator_type", EmitDefaultValue=false)]
    public string originatorType { get; set; }

    
    
    [DataMember(Name="originator_group_id", EmitDefaultValue=false)]
    public string originatorGroupId { get; set; }

    
    
    [DataMember(Name="event_type", EmitDefaultValue=false)]
    public string eventType { get; set; }

    
    
    [DataMember(Name="event_source", EmitDefaultValue=false)]
    public string eventSource { get; set; }

    
    
    [DataMember(Name="content_url", EmitDefaultValue=false)]
    public string contentUrl { get; set; }

    
    
    [DataMember(Name="event_date", EmitDefaultValue=false)]
    public string eventDate { get; set; }

    
    
    [DataMember(Name="username", EmitDefaultValue=false)]
    public string username { get; set; }

    
    
    [DataMember(Name="member_id", EmitDefaultValue=false)]
    public string memberId { get; set; }

    
    
    [DataMember(Name="originator_id", EmitDefaultValue=false)]
    public string originatorId { get; set; }

    
    
    [DataMember(Name="subject_id", EmitDefaultValue=false)]
    public string subjectId { get; set; }

    
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class MemberEvent {\n");
      
      sb.Append("  id: ").Append(id).Append("\n");
      
      sb.Append("  createdAt: ").Append(createdAt).Append("\n");
      
      sb.Append("  type: ").Append(type).Append("\n");
      
      sb.Append("  source: ").Append(source).Append("\n");
      
      sb.Append("  referer: ").Append(referer).Append("\n");
      
      sb.Append("  originalUrl: ").Append(originalUrl).Append("\n");
      
      sb.Append("  originatorEmail: ").Append(originatorEmail).Append("\n");
      
      sb.Append("  originatorName: ").Append(originatorName).Append("\n");
      
      sb.Append("  parentOriginatorId: ").Append(parentOriginatorId).Append("\n");
      
      sb.Append("  parentEventId: ").Append(parentEventId).Append("\n");
      
      sb.Append("  originatorType: ").Append(originatorType).Append("\n");
      
      sb.Append("  originatorGroupId: ").Append(originatorGroupId).Append("\n");
      
      sb.Append("  eventType: ").Append(eventType).Append("\n");
      
      sb.Append("  eventSource: ").Append(eventSource).Append("\n");
      
      sb.Append("  contentUrl: ").Append(contentUrl).Append("\n");
      
      sb.Append("  eventDate: ").Append(eventDate).Append("\n");
      
      sb.Append("  username: ").Append(username).Append("\n");
      
      sb.Append("  memberId: ").Append(memberId).Append("\n");
      
      sb.Append("  originatorId: ").Append(originatorId).Append("\n");
      
      sb.Append("  subjectId: ").Append(subjectId).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}
