using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.Model {
  [DataContract]
  public class EventInput {
    
    
    [DataMember(Name="type", EmitDefaultValue=false)]
    public string Type { get; set; }

    
    
    [DataMember(Name="referer", EmitDefaultValue=false)]
    public string Referer { get; set; }

    
    
    [DataMember(Name="original_url", EmitDefaultValue=false)]
    public string OriginalUrl { get; set; }

    
    
    [DataMember(Name="originator_email", EmitDefaultValue=false)]
    public string OriginatorEmail { get; set; }

    
    
    [DataMember(Name="subject_email", EmitDefaultValue=false)]
    public string SubjectEmail { get; set; }

    
    
    [DataMember(Name="parent_event_id", EmitDefaultValue=false)]
    public string ParentEventId { get; set; }

    
    
    [DataMember(Name="originator_id", EmitDefaultValue=false)]
    public string OriginatorId { get; set; }

    
    
    [DataMember(Name="advisor_id", EmitDefaultValue=false)]
    public string AdvisorId { get; set; }

    
    
    [DataMember(Name="subject_id", EmitDefaultValue=false)]
    public string SubjectId { get; set; }

    
    
    [DataMember(Name="event_content", EmitDefaultValue=false)]
    public EventContent EventContent { get; set; }

    
    
    [DataMember(Name="created_at", EmitDefaultValue=false)]
    public string CreatedAt { get; set; }

    
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class EventInput {\n");
      
      sb.Append("  Type: ").Append(Type).Append("\n");
      
      sb.Append("  Referer: ").Append(Referer).Append("\n");
      
      sb.Append("  OriginalUrl: ").Append(OriginalUrl).Append("\n");
      
      sb.Append("  OriginatorEmail: ").Append(OriginatorEmail).Append("\n");
      
      sb.Append("  SubjectEmail: ").Append(SubjectEmail).Append("\n");
      
      sb.Append("  ParentEventId: ").Append(ParentEventId).Append("\n");
      
      sb.Append("  OriginatorId: ").Append(OriginatorId).Append("\n");
      
      sb.Append("  AdvisorId: ").Append(AdvisorId).Append("\n");
      
      sb.Append("  SubjectId: ").Append(SubjectId).Append("\n");
      
      sb.Append("  EventContent: ").Append(EventContent).Append("\n");
      
      sb.Append("  CreatedAt: ").Append(CreatedAt).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}
