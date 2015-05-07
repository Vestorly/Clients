using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;

namespace io.swagger.Model {
  public class EventContent {
    

    /* Mongo id of event */
    
    public string Id { get; set; }

    

    
    public string ContentField { get; set; }

    

    
    public string ContentId { get; set; }

    

    
    public string ContentType { get; set; }

    

    
    public string CreatedAt { get; set; }

    

    
    public string Slug { get; set; }

    

    
    public string UpdatedAt { get; set; }

    

    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class EventContent {\n");
      
      sb.Append("  Id: ").Append(Id).Append("\n");
      
      sb.Append("  ContentField: ").Append(ContentField).Append("\n");
      
      sb.Append("  ContentId: ").Append(ContentId).Append("\n");
      
      sb.Append("  ContentType: ").Append(ContentType).Append("\n");
      
      sb.Append("  CreatedAt: ").Append(CreatedAt).Append("\n");
      
      sb.Append("  Slug: ").Append(Slug).Append("\n");
      
      sb.Append("  UpdatedAt: ").Append(UpdatedAt).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}