using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.Model {
  [DataContract]
  public class Settings {
    
    
    [DataMember(Name="_id", EmitDefaultValue=false)]
    public string Id { get; set; }

    
    
    [DataMember(Name="company", EmitDefaultValue=false)]
    public string Company { get; set; }

    
    
    [DataMember(Name="picture_url", EmitDefaultValue=false)]
    public string PictureUrl { get; set; }

    
    
    [DataMember(Name="website", EmitDefaultValue=false)]
    public string Website { get; set; }

    
    
    [DataMember(Name="disclosure", EmitDefaultValue=false)]
    public string Disclosure { get; set; }

    
    
    [DataMember(Name="adv_brochure", EmitDefaultValue=false)]
    public string AdvBrochure { get; set; }

    
    
    [DataMember(Name="slug", EmitDefaultValue=false)]
    public string Slug { get; set; }

    
    
    [DataMember(Name="name", EmitDefaultValue=false)]
    public string Name { get; set; }

    
    
    [DataMember(Name="orgsetting", EmitDefaultValue=false)]
    public OrgSetting Orgsetting { get; set; }

    
    
    [DataMember(Name="feature", EmitDefaultValue=false)]
    public Features Feature { get; set; }

    
    
    [DataMember(Name="personalsetting", EmitDefaultValue=false)]
    public PersonalSettings Personalsetting { get; set; }

    
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Settings {\n");
      
      sb.Append("  Id: ").Append(Id).Append("\n");
      
      sb.Append("  Company: ").Append(Company).Append("\n");
      
      sb.Append("  PictureUrl: ").Append(PictureUrl).Append("\n");
      
      sb.Append("  Website: ").Append(Website).Append("\n");
      
      sb.Append("  Disclosure: ").Append(Disclosure).Append("\n");
      
      sb.Append("  AdvBrochure: ").Append(AdvBrochure).Append("\n");
      
      sb.Append("  Slug: ").Append(Slug).Append("\n");
      
      sb.Append("  Name: ").Append(Name).Append("\n");
      
      sb.Append("  Orgsetting: ").Append(Orgsetting).Append("\n");
      
      sb.Append("  Feature: ").Append(Feature).Append("\n");
      
      sb.Append("  Personalsetting: ").Append(Personalsetting).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}
