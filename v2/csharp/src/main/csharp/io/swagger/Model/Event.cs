using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;

namespace io.swagger.Model {
  public class Event {
    

    
    public string Id { get; set; }

    

    
    public string Type { get; set; }

    

    
    public string Referer { get; set; }

    

    
    public string OriginalUrl { get; set; }

    

    
    public string OriginatorEmail { get; set; }

    

    
    public string SubjectEmail { get; set; }

    

    
    public string ParentEventId { get; set; }

    

    
    public string OriginatorId { get; set; }

    

    
    public string AdvisorId { get; set; }

    

    
    public string SubjectId { get; set; }

    

    
    public EventContent EventContent { get; set; }

    

    
    public string CreatedAt { get; set; }

    

    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Event {\n");
      
      sb.Append("  Id: ").Append(Id).Append("\n");
      
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