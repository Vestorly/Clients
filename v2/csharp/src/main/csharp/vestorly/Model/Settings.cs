using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.model {
  [DataContract]
  public class Settings {
    
    
    [DataMember(Name="_id", EmitDefaultValue=false)]
    public string id { get; set; }

    
    
    [DataMember(Name="company", EmitDefaultValue=false)]
    public string company { get; set; }

    
    
    [DataMember(Name="picture_url", EmitDefaultValue=false)]
    public string pictureUrl { get; set; }

    
    
    [DataMember(Name="website", EmitDefaultValue=false)]
    public string website { get; set; }

    
    
    [DataMember(Name="disclosure", EmitDefaultValue=false)]
    public string disclosure { get; set; }

    
    
    [DataMember(Name="adv_brochure", EmitDefaultValue=false)]
    public string advBrochure { get; set; }

    
    
    [DataMember(Name="slug", EmitDefaultValue=false)]
    public string slug { get; set; }

    
    
    [DataMember(Name="name", EmitDefaultValue=false)]
    public string name { get; set; }

    
    
    [DataMember(Name="orgsetting", EmitDefaultValue=false)]
    public OrgSetting orgsetting { get; set; }

    
    
    [DataMember(Name="feature", EmitDefaultValue=false)]
    public Features feature { get; set; }

    
    
    [DataMember(Name="personalsetting", EmitDefaultValue=false)]
    public PersonalSettings personalsetting { get; set; }

    
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Settings {\n");
      
      sb.Append("  id: ").Append(id).Append("\n");
      
      sb.Append("  company: ").Append(company).Append("\n");
      
      sb.Append("  pictureUrl: ").Append(pictureUrl).Append("\n");
      
      sb.Append("  website: ").Append(website).Append("\n");
      
      sb.Append("  disclosure: ").Append(disclosure).Append("\n");
      
      sb.Append("  advBrochure: ").Append(advBrochure).Append("\n");
      
      sb.Append("  slug: ").Append(slug).Append("\n");
      
      sb.Append("  name: ").Append(name).Append("\n");
      
      sb.Append("  orgsetting: ").Append(orgsetting).Append("\n");
      
      sb.Append("  feature: ").Append(feature).Append("\n");
      
      sb.Append("  personalsetting: ").Append(personalsetting).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}
