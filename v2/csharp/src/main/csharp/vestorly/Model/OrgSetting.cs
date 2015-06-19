using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.model {
  [DataContract]
  public class OrgSetting {
    
    
    [DataMember(Name="_id", EmitDefaultValue=false)]
    public string id { get; set; }

    
    
    [DataMember(Name="is_default", EmitDefaultValue=false)]
    public bool? isDefault { get; set; }

    
    
    [DataMember(Name="name", EmitDefaultValue=false)]
    public string name { get; set; }

    
    
    [DataMember(Name="email_theme_name", EmitDefaultValue=false)]
    public string emailThemeName { get; set; }

    
    
    [DataMember(Name="company_address", EmitDefaultValue=false)]
    public string companyAddress { get; set; }

    
    
    [DataMember(Name="company_contact_email", EmitDefaultValue=false)]
    public string companyContactEmail { get; set; }

    
    
    [DataMember(Name="site_url", EmitDefaultValue=false)]
    public string siteUrl { get; set; }

    
    
    [DataMember(Name="company_homepage_url", EmitDefaultValue=false)]
    public string companyHomepageUrl { get; set; }

    
    
    [DataMember(Name="privacy_policy_url", EmitDefaultValue=false)]
    public string privacyPolicyUrl { get; set; }

    
    
    [DataMember(Name="terms_and_conditions_url", EmitDefaultValue=false)]
    public string termsAndConditionsUrl { get; set; }

    
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class OrgSetting {\n");
      
      sb.Append("  id: ").Append(id).Append("\n");
      
      sb.Append("  isDefault: ").Append(isDefault).Append("\n");
      
      sb.Append("  name: ").Append(name).Append("\n");
      
      sb.Append("  emailThemeName: ").Append(emailThemeName).Append("\n");
      
      sb.Append("  companyAddress: ").Append(companyAddress).Append("\n");
      
      sb.Append("  companyContactEmail: ").Append(companyContactEmail).Append("\n");
      
      sb.Append("  siteUrl: ").Append(siteUrl).Append("\n");
      
      sb.Append("  companyHomepageUrl: ").Append(companyHomepageUrl).Append("\n");
      
      sb.Append("  privacyPolicyUrl: ").Append(privacyPolicyUrl).Append("\n");
      
      sb.Append("  termsAndConditionsUrl: ").Append(termsAndConditionsUrl).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}
