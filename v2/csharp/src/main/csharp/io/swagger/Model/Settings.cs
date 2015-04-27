using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;

namespace io.swagger.Model {
  public class Settings {
    

    
    public string Id { get; set; }

    

    
    public string Company { get; set; }

    

    
    public string PictureUrl { get; set; }

    

    
    public string Website { get; set; }

    

    
    public string Disclosure { get; set; }

    

    
    public string AdvBrochure { get; set; }

    

    
    public string Slug { get; set; }

    

    
    public string Name { get; set; }

    

    
    public OrgSetting Orgsetting { get; set; }

    

    
    public Features Feature { get; set; }

    

    
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