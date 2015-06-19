using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.model {
  [DataContract]
  public class Member {
    
    
    [DataMember(Name="_id", EmitDefaultValue=false)]
    public string id { get; set; }

    
    
    [DataMember(Name="email", EmitDefaultValue=false)]
    public string email { get; set; }

    
    
    [DataMember(Name="first_name", EmitDefaultValue=false)]
    public string firstName { get; set; }

    
    
    [DataMember(Name="last_name", EmitDefaultValue=false)]
    public string lastName { get; set; }

    
    
    [DataMember(Name="phone", EmitDefaultValue=false)]
    public string phone { get; set; }

    
    
    [DataMember(Name="address", EmitDefaultValue=false)]
    public string address { get; set; }

    
    
    [DataMember(Name="city", EmitDefaultValue=false)]
    public string city { get; set; }

    
    
    [DataMember(Name="state", EmitDefaultValue=false)]
    public string state { get; set; }

    
    
    [DataMember(Name="zip", EmitDefaultValue=false)]
    public string zip { get; set; }

    
    
    [DataMember(Name="gender", EmitDefaultValue=false)]
    public string gender { get; set; }

    
    
    [DataMember(Name="interest_consultation", EmitDefaultValue=false)]
    public string interestConsultation { get; set; }

    
    
    [DataMember(Name="interest_in_new_advisor", EmitDefaultValue=false)]
    public string interestInNewAdvisor { get; set; }

    
    
    [DataMember(Name="assets", EmitDefaultValue=false)]
    public string assets { get; set; }

    
    
    [DataMember(Name="age", EmitDefaultValue=false)]
    public string age { get; set; }

    
    
    [DataMember(Name="data_estimated", EmitDefaultValue=false)]
    public bool? dataEstimated { get; set; }

    
    
    [DataMember(Name="education", EmitDefaultValue=false)]
    public string education { get; set; }

    
    
    [DataMember(Name="high_net_worth", EmitDefaultValue=false)]
    public bool? highNetWorth { get; set; }

    
    
    [DataMember(Name="home_market_value", EmitDefaultValue=false)]
    public string homeMarketValue { get; set; }

    
    
    [DataMember(Name="home_owner_status", EmitDefaultValue=false)]
    public string homeOwnerStatus { get; set; }

    
    
    [DataMember(Name="household_income", EmitDefaultValue=false)]
    public string householdIncome { get; set; }

    
    
    [DataMember(Name="marital_status", EmitDefaultValue=false)]
    public string maritalStatus { get; set; }

    
    
    [DataMember(Name="occupation", EmitDefaultValue=false)]
    public string occupation { get; set; }

    
    
    [DataMember(Name="hometown", EmitDefaultValue=false)]
    public string hometown { get; set; }

    
    
    [DataMember(Name="family", EmitDefaultValue=false)]
    public string family { get; set; }

    
    
    [DataMember(Name="tags", EmitDefaultValue=false)]
    public List<string> tags { get; set; }

    
    
    [DataMember(Name="subscribed_group_ids", EmitDefaultValue=false)]
    public List<string> subscribedGroupIds { get; set; }

    
    
    [DataMember(Name="unsubscribed", EmitDefaultValue=false)]
    public bool? unsubscribed { get; set; }

    
    
    [DataMember(Name="unsubscribed_date", EmitDefaultValue=false)]
    public bool? unsubscribedDate { get; set; }

    
    
    [DataMember(Name="user_type", EmitDefaultValue=false)]
    public string userType { get; set; }

    
    
    [DataMember(Name="signed_up_with", EmitDefaultValue=false)]
    public string signedUpWith { get; set; }

    
    
    [DataMember(Name="message", EmitDefaultValue=false)]
    public string message { get; set; }

    
    
    [DataMember(Name="location", EmitDefaultValue=false)]
    public string location { get; set; }

    
    
    [DataMember(Name="picture_url", EmitDefaultValue=false)]
    public string pictureUrl { get; set; }

    
    
    [DataMember(Name="profile_url", EmitDefaultValue=false)]
    public string profileUrl { get; set; }

    
    
    [DataMember(Name="estimated_location", EmitDefaultValue=false)]
    public string estimatedLocation { get; set; }

    
    
    [DataMember(Name="estimated_zip", EmitDefaultValue=false)]
    public string estimatedZip { get; set; }

    
    
    [DataMember(Name="register_ip_addr", EmitDefaultValue=false)]
    public string registerIpAddr { get; set; }

    
    
    [DataMember(Name="genuine_email", EmitDefaultValue=false)]
    public bool? genuineEmail { get; set; }

    
    
    [DataMember(Name="last_active_date", EmitDefaultValue=false)]
    public string lastActiveDate { get; set; }

    
    
    [DataMember(Name="is_client", EmitDefaultValue=false)]
    public bool? isClient { get; set; }

    
    
    [DataMember(Name="is_hidden", EmitDefaultValue=false)]
    public bool? isHidden { get; set; }

    
    
    [DataMember(Name="invited_on", EmitDefaultValue=false)]
    public string invitedOn { get; set; }

    
    
    [DataMember(Name="invited_by", EmitDefaultValue=false)]
    public string invitedBy { get; set; }

    
    
    [DataMember(Name="portfolio_size", EmitDefaultValue=false)]
    public string portfolioSize { get; set; }

    
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Member {\n");
      
      sb.Append("  id: ").Append(id).Append("\n");
      
      sb.Append("  email: ").Append(email).Append("\n");
      
      sb.Append("  firstName: ").Append(firstName).Append("\n");
      
      sb.Append("  lastName: ").Append(lastName).Append("\n");
      
      sb.Append("  phone: ").Append(phone).Append("\n");
      
      sb.Append("  address: ").Append(address).Append("\n");
      
      sb.Append("  city: ").Append(city).Append("\n");
      
      sb.Append("  state: ").Append(state).Append("\n");
      
      sb.Append("  zip: ").Append(zip).Append("\n");
      
      sb.Append("  gender: ").Append(gender).Append("\n");
      
      sb.Append("  interestConsultation: ").Append(interestConsultation).Append("\n");
      
      sb.Append("  interestInNewAdvisor: ").Append(interestInNewAdvisor).Append("\n");
      
      sb.Append("  assets: ").Append(assets).Append("\n");
      
      sb.Append("  age: ").Append(age).Append("\n");
      
      sb.Append("  dataEstimated: ").Append(dataEstimated).Append("\n");
      
      sb.Append("  education: ").Append(education).Append("\n");
      
      sb.Append("  highNetWorth: ").Append(highNetWorth).Append("\n");
      
      sb.Append("  homeMarketValue: ").Append(homeMarketValue).Append("\n");
      
      sb.Append("  homeOwnerStatus: ").Append(homeOwnerStatus).Append("\n");
      
      sb.Append("  householdIncome: ").Append(householdIncome).Append("\n");
      
      sb.Append("  maritalStatus: ").Append(maritalStatus).Append("\n");
      
      sb.Append("  occupation: ").Append(occupation).Append("\n");
      
      sb.Append("  hometown: ").Append(hometown).Append("\n");
      
      sb.Append("  family: ").Append(family).Append("\n");
      
      sb.Append("  tags: ").Append(tags).Append("\n");
      
      sb.Append("  subscribedGroupIds: ").Append(subscribedGroupIds).Append("\n");
      
      sb.Append("  unsubscribed: ").Append(unsubscribed).Append("\n");
      
      sb.Append("  unsubscribedDate: ").Append(unsubscribedDate).Append("\n");
      
      sb.Append("  userType: ").Append(userType).Append("\n");
      
      sb.Append("  signedUpWith: ").Append(signedUpWith).Append("\n");
      
      sb.Append("  message: ").Append(message).Append("\n");
      
      sb.Append("  location: ").Append(location).Append("\n");
      
      sb.Append("  pictureUrl: ").Append(pictureUrl).Append("\n");
      
      sb.Append("  profileUrl: ").Append(profileUrl).Append("\n");
      
      sb.Append("  estimatedLocation: ").Append(estimatedLocation).Append("\n");
      
      sb.Append("  estimatedZip: ").Append(estimatedZip).Append("\n");
      
      sb.Append("  registerIpAddr: ").Append(registerIpAddr).Append("\n");
      
      sb.Append("  genuineEmail: ").Append(genuineEmail).Append("\n");
      
      sb.Append("  lastActiveDate: ").Append(lastActiveDate).Append("\n");
      
      sb.Append("  isClient: ").Append(isClient).Append("\n");
      
      sb.Append("  isHidden: ").Append(isHidden).Append("\n");
      
      sb.Append("  invitedOn: ").Append(invitedOn).Append("\n");
      
      sb.Append("  invitedBy: ").Append(invitedBy).Append("\n");
      
      sb.Append("  portfolioSize: ").Append(portfolioSize).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}
