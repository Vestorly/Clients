using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.model {
  [DataContract]
  public class EventInput {
    
    
    [DataMember(Name="type", EmitDefaultValue=false)]
    public string type { get; set; }

    
    
    [DataMember(Name="referer", EmitDefaultValue=false)]
    public string referer { get; set; }

    
    
    [DataMember(Name="original_url", EmitDefaultValue=false)]
    public string originalUrl { get; set; }

    
    
    [DataMember(Name="originator_email", EmitDefaultValue=false)]
    public string originatorEmail { get; set; }

    
    
    [DataMember(Name="subject_email", EmitDefaultValue=false)]
    public string subjectEmail { get; set; }

    
    
    [DataMember(Name="parent_event_id", EmitDefaultValue=false)]
    public string parentEventId { get; set; }

    
    
    [DataMember(Name="originator_id", EmitDefaultValue=false)]
    public string originatorId { get; set; }

    
    
    [DataMember(Name="advisor_id", EmitDefaultValue=false)]
    public string advisorId { get; set; }

    
    
    [DataMember(Name="subject_id", EmitDefaultValue=false)]
    public string subjectId { get; set; }

    
    
    [DataMember(Name="event_content", EmitDefaultValue=false)]
    public EventContent eventContent { get; set; }

    
    
    [DataMember(Name="created_at", EmitDefaultValue=false)]
    public string createdAt { get; set; }

    
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class EventInput {\n");
      
      sb.Append("  type: ").Append(type).Append("\n");
      
      sb.Append("  referer: ").Append(referer).Append("\n");
      
      sb.Append("  originalUrl: ").Append(originalUrl).Append("\n");
      
      sb.Append("  originatorEmail: ").Append(originatorEmail).Append("\n");
      
      sb.Append("  subjectEmail: ").Append(subjectEmail).Append("\n");
      
      sb.Append("  parentEventId: ").Append(parentEventId).Append("\n");
      
      sb.Append("  originatorId: ").Append(originatorId).Append("\n");
      
      sb.Append("  advisorId: ").Append(advisorId).Append("\n");
      
      sb.Append("  subjectId: ").Append(subjectId).Append("\n");
      
      sb.Append("  eventContent: ").Append(eventContent).Append("\n");
      
      sb.Append("  createdAt: ").Append(createdAt).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}
