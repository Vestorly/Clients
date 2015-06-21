using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.model {
  [DataContract]
  public class Advisor {
    
    
    [DataMember(Name="company", EmitDefaultValue=false)]
    public string company { get; set; }

    
    
    [DataMember(Name="address", EmitDefaultValue=false)]
    public string address { get; set; }

    
    
    [DataMember(Name="city", EmitDefaultValue=false)]
    public string city { get; set; }

    
    
    [DataMember(Name="state", EmitDefaultValue=false)]
    public string state { get; set; }

    
    
    [DataMember(Name="zip", EmitDefaultValue=false)]
    public string zip { get; set; }

    
    
    [DataMember(Name="first_name", EmitDefaultValue=false)]
    public string firstName { get; set; }

    
    
    [DataMember(Name="last_name", EmitDefaultValue=false)]
    public string lastName { get; set; }

    
    
    [DataMember(Name="reg_number", EmitDefaultValue=false)]
    public string regNumber { get; set; }

    
    
    [DataMember(Name="account_type", EmitDefaultValue=false)]
    public string accountType { get; set; }

    
    
    [DataMember(Name="advisor_employees", EmitDefaultValue=false)]
    public string advisorEmployees { get; set; }

    
    
    [DataMember(Name="other_services_types", EmitDefaultValue=false)]
    public string otherServicesTypes { get; set; }

    
    
    [DataMember(Name="other_compensation", EmitDefaultValue=false)]
    public string otherCompensation { get; set; }

    
    
    [DataMember(Name="performance_audited", EmitDefaultValue=false)]
    public string performanceAudited { get; set; }

    
    
    [DataMember(Name="about", EmitDefaultValue=false)]
    public string about { get; set; }

    
    
    [DataMember(Name="twitter_handle", EmitDefaultValue=false)]
    public string twitterHandle { get; set; }

    
    
    [DataMember(Name="profile_picture", EmitDefaultValue=false)]
    public string profilePicture { get; set; }

    
    
    [DataMember(Name="logo", EmitDefaultValue=false)]
    public string logo { get; set; }

    
    
    [DataMember(Name="linkedin", EmitDefaultValue=false)]
    public string linkedin { get; set; }

    
    
    [DataMember(Name="website", EmitDefaultValue=false)]
    public string website { get; set; }

    
    
    [DataMember(Name="adv_brochure", EmitDefaultValue=false)]
    public string advBrochure { get; set; }

    
    
    [DataMember(Name="plan", EmitDefaultValue=false)]
    public string plan { get; set; }

    
    
    [DataMember(Name="consultation_reminder", EmitDefaultValue=false)]
    public string consultationReminder { get; set; }

    
    
    [DataMember(Name="referral_reminder", EmitDefaultValue=false)]
    public string referralReminder { get; set; }

    
    
    [DataMember(Name="weekly_email_blast", EmitDefaultValue=false)]
    public string weeklyEmailBlast { get; set; }

    
    
    [DataMember(Name="disclosure", EmitDefaultValue=false)]
    public string disclosure { get; set; }

    
    
    [DataMember(Name="external_options", EmitDefaultValue=false)]
    public string externalOptions { get; set; }

    
    
    [DataMember(Name="email_report_blast", EmitDefaultValue=false)]
    public string emailReportBlast { get; set; }

    
    
    [DataMember(Name="email_blast", EmitDefaultValue=false)]
    public string emailBlast { get; set; }

    
    
    [DataMember(Name="twitter_blast", EmitDefaultValue=false)]
    public string twitterBlast { get; set; }

    
    
    [DataMember(Name="linkedin_blast", EmitDefaultValue=false)]
    public string linkedinBlast { get; set; }

    
    
    [DataMember(Name="facebook_blast", EmitDefaultValue=false)]
    public string facebookBlast { get; set; }

    
    
    [DataMember(Name="compliance_bcc_email_address", EmitDefaultValue=false)]
    public string complianceBccEmailAddress { get; set; }

    
    
    [DataMember(Name="dashboard_url", EmitDefaultValue=false)]
    public string dashboardUrl { get; set; }

    
    
    [DataMember(Name="api_key", EmitDefaultValue=false)]
    public string apiKey { get; set; }

    
    
    [DataMember(Name="id", EmitDefaultValue=false)]
    public string id { get; set; }

    
    
    [DataMember(Name="name", EmitDefaultValue=false)]
    public string name { get; set; }

    
    
    [DataMember(Name="tag", EmitDefaultValue=false)]
    public string tag { get; set; }

    
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Advisor {\n");
      
      sb.Append("  company: ").Append(company).Append("\n");
      
      sb.Append("  address: ").Append(address).Append("\n");
      
      sb.Append("  city: ").Append(city).Append("\n");
      
      sb.Append("  state: ").Append(state).Append("\n");
      
      sb.Append("  zip: ").Append(zip).Append("\n");
      
      sb.Append("  firstName: ").Append(firstName).Append("\n");
      
      sb.Append("  lastName: ").Append(lastName).Append("\n");
      
      sb.Append("  regNumber: ").Append(regNumber).Append("\n");
      
      sb.Append("  accountType: ").Append(accountType).Append("\n");
      
      sb.Append("  advisorEmployees: ").Append(advisorEmployees).Append("\n");
      
      sb.Append("  otherServicesTypes: ").Append(otherServicesTypes).Append("\n");
      
      sb.Append("  otherCompensation: ").Append(otherCompensation).Append("\n");
      
      sb.Append("  performanceAudited: ").Append(performanceAudited).Append("\n");
      
      sb.Append("  about: ").Append(about).Append("\n");
      
      sb.Append("  twitterHandle: ").Append(twitterHandle).Append("\n");
      
      sb.Append("  profilePicture: ").Append(profilePicture).Append("\n");
      
      sb.Append("  logo: ").Append(logo).Append("\n");
      
      sb.Append("  linkedin: ").Append(linkedin).Append("\n");
      
      sb.Append("  website: ").Append(website).Append("\n");
      
      sb.Append("  advBrochure: ").Append(advBrochure).Append("\n");
      
      sb.Append("  plan: ").Append(plan).Append("\n");
      
      sb.Append("  consultationReminder: ").Append(consultationReminder).Append("\n");
      
      sb.Append("  referralReminder: ").Append(referralReminder).Append("\n");
      
      sb.Append("  weeklyEmailBlast: ").Append(weeklyEmailBlast).Append("\n");
      
      sb.Append("  disclosure: ").Append(disclosure).Append("\n");
      
      sb.Append("  externalOptions: ").Append(externalOptions).Append("\n");
      
      sb.Append("  emailReportBlast: ").Append(emailReportBlast).Append("\n");
      
      sb.Append("  emailBlast: ").Append(emailBlast).Append("\n");
      
      sb.Append("  twitterBlast: ").Append(twitterBlast).Append("\n");
      
      sb.Append("  linkedinBlast: ").Append(linkedinBlast).Append("\n");
      
      sb.Append("  facebookBlast: ").Append(facebookBlast).Append("\n");
      
      sb.Append("  complianceBccEmailAddress: ").Append(complianceBccEmailAddress).Append("\n");
      
      sb.Append("  dashboardUrl: ").Append(dashboardUrl).Append("\n");
      
      sb.Append("  apiKey: ").Append(apiKey).Append("\n");
      
      sb.Append("  id: ").Append(id).Append("\n");
      
      sb.Append("  name: ").Append(name).Append("\n");
      
      sb.Append("  tag: ").Append(tag).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}
