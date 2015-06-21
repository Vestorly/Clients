using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.model {
  [DataContract]
  public class EventContent {
    
    /* Mongo id of event */
    [DataMember(Name="_id", EmitDefaultValue=false)]
    public string id { get; set; }

    
    
    [DataMember(Name="content_field", EmitDefaultValue=false)]
    public string contentField { get; set; }

    
    
    [DataMember(Name="content_id", EmitDefaultValue=false)]
    public string contentId { get; set; }

    
    
    [DataMember(Name="content_type", EmitDefaultValue=false)]
    public string contentType { get; set; }

    
    
    [DataMember(Name="created_at", EmitDefaultValue=false)]
    public string createdAt { get; set; }

    
    
    [DataMember(Name="slug", EmitDefaultValue=false)]
    public string slug { get; set; }

    
    
    [DataMember(Name="updated_at", EmitDefaultValue=false)]
    public string updatedAt { get; set; }

    
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class EventContent {\n");
      
      sb.Append("  id: ").Append(id).Append("\n");
      
      sb.Append("  contentField: ").Append(contentField).Append("\n");
      
      sb.Append("  contentId: ").Append(contentId).Append("\n");
      
      sb.Append("  contentType: ").Append(contentType).Append("\n");
      
      sb.Append("  createdAt: ").Append(createdAt).Append("\n");
      
      sb.Append("  slug: ").Append(slug).Append("\n");
      
      sb.Append("  updatedAt: ").Append(updatedAt).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}
