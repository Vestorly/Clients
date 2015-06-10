using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.Model {
  [DataContract]
  public class EventContent {
    
    /* Mongo id of event */
    [DataMember(Name="_id", EmitDefaultValue=false)]
    public string Id { get; set; }

    
    
    [DataMember(Name="content_field", EmitDefaultValue=false)]
    public string ContentField { get; set; }

    
    
    [DataMember(Name="content_id", EmitDefaultValue=false)]
    public string ContentId { get; set; }

    
    
    [DataMember(Name="content_type", EmitDefaultValue=false)]
    public string ContentType { get; set; }

    
    
    [DataMember(Name="created_at", EmitDefaultValue=false)]
    public string CreatedAt { get; set; }

    
    
    [DataMember(Name="slug", EmitDefaultValue=false)]
    public string Slug { get; set; }

    
    
    [DataMember(Name="updated_at", EmitDefaultValue=false)]
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
