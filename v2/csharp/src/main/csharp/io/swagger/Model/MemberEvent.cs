using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;

namespace io.swagger.Model {
  public class MemberEvent {
    

    
    public string Id { get; set; }

    

    
    public string CreatedAt { get; set; }

    

    
    public string Type { get; set; }

    

    
    public string Source { get; set; }

    

    
    public string Referer { get; set; }

    

    
    public string OriginalUrl { get; set; }

    

    
    public string OriginatorEmail { get; set; }

    

    
    public string OriginatorName { get; set; }

    

    
    public string ParentOriginatorId { get; set; }

    

    
    public string ParentEventId { get; set; }

    

    
    public string OriginatorType { get; set; }

    

    
    public string OriginatorGroupId { get; set; }

    

    
    public string EventType { get; set; }

    

    
    public string EventSource { get; set; }

    

    
    public string ContentUrl { get; set; }

    

    
    public string EventDate { get; set; }

    

    
    public string Username { get; set; }

    

    
    public string MemberId { get; set; }

    

    
    public string OriginatorId { get; set; }

    

    
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