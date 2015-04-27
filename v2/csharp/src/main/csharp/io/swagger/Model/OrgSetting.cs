using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;

namespace io.swagger.Model {
  public class OrgSetting {
    

    
    public string Id { get; set; }

    

    
    public bool? IsDefault { get; set; }

    

    
    public string Name { get; set; }

    

    
    public string EmailThemeName { get; set; }

    

    
    public string CompanyAddress { get; set; }

    

    
    public string CompanyContactEmail { get; set; }

    

    
    public string SiteUrl { get; set; }

    

    
    public string CompanyHomepageUrl { get; set; }

    

    
    public string PrivacyPolicyUrl { get; set; }

    

    
    public string TermsAndConditionsUrl { get; set; }

    

    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class OrgSetting {\n");
      
      sb.Append("  Id: ").Append(Id).Append("\n");
      
      sb.Append("  IsDefault: ").Append(IsDefault).Append("\n");
      
      sb.Append("  Name: ").Append(Name).Append("\n");
      
      sb.Append("  EmailThemeName: ").Append(EmailThemeName).Append("\n");
      
      sb.Append("  CompanyAddress: ").Append(CompanyAddress).Append("\n");
      
      sb.Append("  CompanyContactEmail: ").Append(CompanyContactEmail).Append("\n");
      
      sb.Append("  SiteUrl: ").Append(SiteUrl).Append("\n");
      
      sb.Append("  CompanyHomepageUrl: ").Append(CompanyHomepageUrl).Append("\n");
      
      sb.Append("  PrivacyPolicyUrl: ").Append(PrivacyPolicyUrl).Append("\n");
      
      sb.Append("  TermsAndConditionsUrl: ").Append(TermsAndConditionsUrl).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}