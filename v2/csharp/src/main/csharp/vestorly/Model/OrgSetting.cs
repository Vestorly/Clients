using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.Model {
  [DataContract]
  public class OrgSetting {
    
    
    [DataMember(Name="_id", EmitDefaultValue=false)]
    public string Id { get; set; }

    
    
    [DataMember(Name="is_default", EmitDefaultValue=false)]
    public bool? IsDefault { get; set; }

    
    
    [DataMember(Name="name", EmitDefaultValue=false)]
    public string Name { get; set; }

    
    
    [DataMember(Name="email_theme_name", EmitDefaultValue=false)]
    public string EmailThemeName { get; set; }

    
    
    [DataMember(Name="company_address", EmitDefaultValue=false)]
    public string CompanyAddress { get; set; }

    
    
    [DataMember(Name="company_contact_email", EmitDefaultValue=false)]
    public string CompanyContactEmail { get; set; }

    
    
    [DataMember(Name="site_url", EmitDefaultValue=false)]
    public string SiteUrl { get; set; }

    
    
    [DataMember(Name="company_homepage_url", EmitDefaultValue=false)]
    public string CompanyHomepageUrl { get; set; }

    
    
    [DataMember(Name="privacy_policy_url", EmitDefaultValue=false)]
    public string PrivacyPolicyUrl { get; set; }

    
    
    [DataMember(Name="terms_and_conditions_url", EmitDefaultValue=false)]
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
