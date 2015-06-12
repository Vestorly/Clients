using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.Model {
  [DataContract]
  public class MemberEvent {
    
    
    [DataMember(Name="_id", EmitDefaultValue=false)]
    public string Id { get; set; }

    
    
    [DataMember(Name="created_at", EmitDefaultValue=false)]
    public string CreatedAt { get; set; }

    
    
    [DataMember(Name="type", EmitDefaultValue=false)]
    public string Type { get; set; }

    
    
    [DataMember(Name="source", EmitDefaultValue=false)]
    public string Source { get; set; }

    
    
    [DataMember(Name="referer", EmitDefaultValue=false)]
    public string Referer { get; set; }

    
    
    [DataMember(Name="original_url", EmitDefaultValue=false)]
    public string OriginalUrl { get; set; }

    
    
    [DataMember(Name="originator_email", EmitDefaultValue=false)]
    public string OriginatorEmail { get; set; }

    
    
    [DataMember(Name="originator_name", EmitDefaultValue=false)]
    public string OriginatorName { get; set; }

    
    
    [DataMember(Name="parent_originator_id", EmitDefaultValue=false)]
    public string ParentOriginatorId { get; set; }

    
    
    [DataMember(Name="parent_event_id", EmitDefaultValue=false)]
    public string ParentEventId { get; set; }

    
    
    [DataMember(Name="originator_type", EmitDefaultValue=false)]
    public string OriginatorType { get; set; }

    
    
    [DataMember(Name="originator_group_id", EmitDefaultValue=false)]
    public string OriginatorGroupId { get; set; }

    
    
    [DataMember(Name="event_type", EmitDefaultValue=false)]
    public string EventType { get; set; }

    
    
    [DataMember(Name="event_source", EmitDefaultValue=false)]
    public string EventSource { get; set; }

    
    
    [DataMember(Name="content_url", EmitDefaultValue=false)]
    public string ContentUrl { get; set; }

    
    
    [DataMember(Name="event_date", EmitDefaultValue=false)]
    public string EventDate { get; set; }

    
    
    [DataMember(Name="username", EmitDefaultValue=false)]
    public string Username { get; set; }

    
    
    [DataMember(Name="member_id", EmitDefaultValue=false)]
    public string MemberId { get; set; }

    
    
    [DataMember(Name="originator_id", EmitDefaultValue=false)]
    public string OriginatorId { get; set; }

    
    
    [DataMember(Name="subject_id", EmitDefaultValue=false)]
    public string SubjectId { get; set; }

    
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class MemberEvent {\n");
      
      sb.Append("  Id: ").Append(Id).Append("\n");
      
      sb.Append("  CreatedAt: ").Append(CreatedAt).Append("\n");
      
      sb.Append("  Type: ").Append(Type).Append("\n");
      
      sb.Append("  Source: ").Append(Source).Append("\n");
      
      sb.Append("  Referer: ").Append(Referer).Append("\n");
      
      sb.Append("  OriginalUrl: ").Append(OriginalUrl).Append("\n");
      
      sb.Append("  OriginatorEmail: ").Append(OriginatorEmail).Append("\n");
      
      sb.Append("  OriginatorName: ").Append(OriginatorName).Append("\n");
      
      sb.Append("  ParentOriginatorId: ").Append(ParentOriginatorId).Append("\n");
      
      sb.Append("  ParentEventId: ").Append(ParentEventId).Append("\n");
      
      sb.Append("  OriginatorType: ").Append(OriginatorType).Append("\n");
      
      sb.Append("  OriginatorGroupId: ").Append(OriginatorGroupId).Append("\n");
      
      sb.Append("  EventType: ").Append(EventType).Append("\n");
      
      sb.Append("  EventSource: ").Append(EventSource).Append("\n");
      
      sb.Append("  ContentUrl: ").Append(ContentUrl).Append("\n");
      
      sb.Append("  EventDate: ").Append(EventDate).Append("\n");
      
      sb.Append("  Username: ").Append(Username).Append("\n");
      
      sb.Append("  MemberId: ").Append(MemberId).Append("\n");
      
      sb.Append("  OriginatorId: ").Append(OriginatorId).Append("\n");
      
      sb.Append("  SubjectId: ").Append(SubjectId).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}
