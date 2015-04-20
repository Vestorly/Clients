using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;

namespace io.swagger.Model {
  public class Event {
    

    
    public string Id { get; set; }

    

    
    public string Referrer { get; set; }

    

    
    public string OriginalUrl { get; set; }

    

    
    public string OriginatorEmail { get; set; }

    

    
    public string SubjectEmail { get; set; }

    

    
    public string AdvisorEmail { get; set; }

    

    
    public string OriginatorGroupName { get; set; }

    

    
    public string Newsletter { get; set; }

    

    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Event {\n");
      
      sb.Append("  Id: ").Append(Id).Append("\n");
      
      sb.Append("  Referrer: ").Append(Referrer).Append("\n");
      
      sb.Append("  OriginalUrl: ").Append(OriginalUrl).Append("\n");
      
      sb.Append("  OriginatorEmail: ").Append(OriginatorEmail).Append("\n");
      
      sb.Append("  SubjectEmail: ").Append(SubjectEmail).Append("\n");
      
      sb.Append("  AdvisorEmail: ").Append(AdvisorEmail).Append("\n");
      
      sb.Append("  OriginatorGroupName: ").Append(OriginatorGroupName).Append("\n");
      
      sb.Append("  Newsletter: ").Append(Newsletter).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}