using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.Model {
  [DataContract]
  public class Advisor {
    
    
    [DataMember(Name="company", EmitDefaultValue=false)]
    public string Company { get; set; }

    
    
    [DataMember(Name="address", EmitDefaultValue=false)]
    public string Address { get; set; }

    
    
    [DataMember(Name="city", EmitDefaultValue=false)]
    public string City { get; set; }

    
    
    [DataMember(Name="state", EmitDefaultValue=false)]
    public string State { get; set; }

    
    
    [DataMember(Name="zip", EmitDefaultValue=false)]
    public string Zip { get; set; }

    
    
    [DataMember(Name="first_name", EmitDefaultValue=false)]
    public string FirstName { get; set; }

    
    
    [DataMember(Name="last_name", EmitDefaultValue=false)]
    public string LastName { get; set; }

    
    
    [DataMember(Name="reg_number", EmitDefaultValue=false)]
    public string RegNumber { get; set; }

    
    
    [DataMember(Name="account_type", EmitDefaultValue=false)]
    public string AccountType { get; set; }

    
    
    [DataMember(Name="advisor_employees", EmitDefaultValue=false)]
    public string AdvisorEmployees { get; set; }

    
    
    [DataMember(Name="other_services_types", EmitDefaultValue=false)]
    public string OtherServicesTypes { get; set; }

    
    
    [DataMember(Name="other_compensation", EmitDefaultValue=false)]
    public string OtherCompensation { get; set; }

    
    
    [DataMember(Name="performance_audited", EmitDefaultValue=false)]
    public string PerformanceAudited { get; set; }

    
    
    [DataMember(Name="about", EmitDefaultValue=false)]
    public string About { get; set; }

    
    
    [DataMember(Name="twitter_handle", EmitDefaultValue=false)]
    public string TwitterHandle { get; set; }

    
    
    [DataMember(Name="profile_picture", EmitDefaultValue=false)]
    public string ProfilePicture { get; set; }

    
    
    [DataMember(Name="logo", EmitDefaultValue=false)]
    public string Logo { get; set; }

    
    
    [DataMember(Name="linkedin", EmitDefaultValue=false)]
    public string Linkedin { get; set; }

    
    
    [DataMember(Name="website", EmitDefaultValue=false)]
    public string Website { get; set; }

    
    
    [DataMember(Name="adv_brochure", EmitDefaultValue=false)]
    public string AdvBrochure { get; set; }

    
    
    [DataMember(Name="plan", EmitDefaultValue=false)]
    public string Plan { get; set; }

    
    
    [DataMember(Name="consultation_reminder", EmitDefaultValue=false)]
    public string ConsultationReminder { get; set; }

    
    
    [DataMember(Name="referral_reminder", EmitDefaultValue=false)]
    public string ReferralReminder { get; set; }

    
    
    [DataMember(Name="weekly_email_blast", EmitDefaultValue=false)]
    public string WeeklyEmailBlast { get; set; }

    
    
    [DataMember(Name="disclosure", EmitDefaultValue=false)]
    public string Disclosure { get; set; }

    
    
    [DataMember(Name="external_options", EmitDefaultValue=false)]
    public string ExternalOptions { get; set; }

    
    
    [DataMember(Name="email_report_blast", EmitDefaultValue=false)]
    public string EmailReportBlast { get; set; }

    
    
    [DataMember(Name="email_blast", EmitDefaultValue=false)]
    public string EmailBlast { get; set; }

    
    
    [DataMember(Name="twitter_blast", EmitDefaultValue=false)]
    public string TwitterBlast { get; set; }

    
    
    [DataMember(Name="linkedin_blast", EmitDefaultValue=false)]
    public string LinkedinBlast { get; set; }

    
    
    [DataMember(Name="facebook_blast", EmitDefaultValue=false)]
    public string FacebookBlast { get; set; }

    
    
    [DataMember(Name="compliance_bcc_email_address", EmitDefaultValue=false)]
    public string ComplianceBccEmailAddress { get; set; }

    
    
    [DataMember(Name="dashboard_url", EmitDefaultValue=false)]
    public string DashboardUrl { get; set; }

    
    
    [DataMember(Name="api_key", EmitDefaultValue=false)]
    public string ApiKey { get; set; }

    
    
    [DataMember(Name="id", EmitDefaultValue=false)]
    public string Id { get; set; }

    
    
    [DataMember(Name="name", EmitDefaultValue=false)]
    public string Name { get; set; }

    
    
    [DataMember(Name="tag", EmitDefaultValue=false)]
    public string Tag { get; set; }

    
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Advisor {\n");
      
      sb.Append("  Company: ").Append(Company).Append("\n");
      
      sb.Append("  Address: ").Append(Address).Append("\n");
      
      sb.Append("  City: ").Append(City).Append("\n");
      
      sb.Append("  State: ").Append(State).Append("\n");
      
      sb.Append("  Zip: ").Append(Zip).Append("\n");
      
      sb.Append("  FirstName: ").Append(FirstName).Append("\n");
      
      sb.Append("  LastName: ").Append(LastName).Append("\n");
      
      sb.Append("  RegNumber: ").Append(RegNumber).Append("\n");
      
      sb.Append("  AccountType: ").Append(AccountType).Append("\n");
      
      sb.Append("  AdvisorEmployees: ").Append(AdvisorEmployees).Append("\n");
      
      sb.Append("  OtherServicesTypes: ").Append(OtherServicesTypes).Append("\n");
      
      sb.Append("  OtherCompensation: ").Append(OtherCompensation).Append("\n");
      
      sb.Append("  PerformanceAudited: ").Append(PerformanceAudited).Append("\n");
      
      sb.Append("  About: ").Append(About).Append("\n");
      
      sb.Append("  TwitterHandle: ").Append(TwitterHandle).Append("\n");
      
      sb.Append("  ProfilePicture: ").Append(ProfilePicture).Append("\n");
      
      sb.Append("  Logo: ").Append(Logo).Append("\n");
      
      sb.Append("  Linkedin: ").Append(Linkedin).Append("\n");
      
      sb.Append("  Website: ").Append(Website).Append("\n");
      
      sb.Append("  AdvBrochure: ").Append(AdvBrochure).Append("\n");
      
      sb.Append("  Plan: ").Append(Plan).Append("\n");
      
      sb.Append("  ConsultationReminder: ").Append(ConsultationReminder).Append("\n");
      
      sb.Append("  ReferralReminder: ").Append(ReferralReminder).Append("\n");
      
      sb.Append("  WeeklyEmailBlast: ").Append(WeeklyEmailBlast).Append("\n");
      
      sb.Append("  Disclosure: ").Append(Disclosure).Append("\n");
      
      sb.Append("  ExternalOptions: ").Append(ExternalOptions).Append("\n");
      
      sb.Append("  EmailReportBlast: ").Append(EmailReportBlast).Append("\n");
      
      sb.Append("  EmailBlast: ").Append(EmailBlast).Append("\n");
      
      sb.Append("  TwitterBlast: ").Append(TwitterBlast).Append("\n");
      
      sb.Append("  LinkedinBlast: ").Append(LinkedinBlast).Append("\n");
      
      sb.Append("  FacebookBlast: ").Append(FacebookBlast).Append("\n");
      
      sb.Append("  ComplianceBccEmailAddress: ").Append(ComplianceBccEmailAddress).Append("\n");
      
      sb.Append("  DashboardUrl: ").Append(DashboardUrl).Append("\n");
      
      sb.Append("  ApiKey: ").Append(ApiKey).Append("\n");
      
      sb.Append("  Id: ").Append(Id).Append("\n");
      
      sb.Append("  Name: ").Append(Name).Append("\n");
      
      sb.Append("  Tag: ").Append(Tag).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}
