using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.Serialization;

namespace vestorly.Model {
  [DataContract]
  public class Member {
    
    
    [DataMember(Name="_id", EmitDefaultValue=false)]
    public string Id { get; set; }

    
    
    [DataMember(Name="email", EmitDefaultValue=false)]
    public string Email { get; set; }

    
    
    [DataMember(Name="first_name", EmitDefaultValue=false)]
    public string FirstName { get; set; }

    
    
    [DataMember(Name="last_name", EmitDefaultValue=false)]
    public string LastName { get; set; }

    
    
    [DataMember(Name="phone", EmitDefaultValue=false)]
    public string Phone { get; set; }

    
    
    [DataMember(Name="address", EmitDefaultValue=false)]
    public string Address { get; set; }

    
    
    [DataMember(Name="city", EmitDefaultValue=false)]
    public string City { get; set; }

    
    
    [DataMember(Name="state", EmitDefaultValue=false)]
    public string State { get; set; }

    
    
    [DataMember(Name="zip", EmitDefaultValue=false)]
    public string Zip { get; set; }

    
    
    [DataMember(Name="gender", EmitDefaultValue=false)]
    public string Gender { get; set; }

    
    
    [DataMember(Name="interest_consultation", EmitDefaultValue=false)]
    public string InterestConsultation { get; set; }

    
    
    [DataMember(Name="interest_in_new_advisor", EmitDefaultValue=false)]
    public string InterestInNewAdvisor { get; set; }

    
    
    [DataMember(Name="assets", EmitDefaultValue=false)]
    public string Assets { get; set; }

    
    
    [DataMember(Name="age", EmitDefaultValue=false)]
    public string Age { get; set; }

    
    
    [DataMember(Name="data_estimated", EmitDefaultValue=false)]
    public bool? DataEstimated { get; set; }

    
    
    [DataMember(Name="education", EmitDefaultValue=false)]
    public string Education { get; set; }

    
    
    [DataMember(Name="high_net_worth", EmitDefaultValue=false)]
    public bool? HighNetWorth { get; set; }

    
    
    [DataMember(Name="home_market_value", EmitDefaultValue=false)]
    public string HomeMarketValue { get; set; }

    
    
    [DataMember(Name="home_owner_status", EmitDefaultValue=false)]
    public string HomeOwnerStatus { get; set; }

    
    
    [DataMember(Name="household_income", EmitDefaultValue=false)]
    public string HouseholdIncome { get; set; }

    
    
    [DataMember(Name="marital_status", EmitDefaultValue=false)]
    public string MaritalStatus { get; set; }

    
    
    [DataMember(Name="occupation", EmitDefaultValue=false)]
    public string Occupation { get; set; }

    
    
    [DataMember(Name="hometown", EmitDefaultValue=false)]
    public string Hometown { get; set; }

    
    
    [DataMember(Name="family", EmitDefaultValue=false)]
    public string Family { get; set; }

    
    
    [DataMember(Name="tags", EmitDefaultValue=false)]
    public List<string> Tags { get; set; }

    
    
    [DataMember(Name="subscribed_group_ids", EmitDefaultValue=false)]
    public List<string> SubscribedGroupIds { get; set; }

    
    
    [DataMember(Name="unsubscribed", EmitDefaultValue=false)]
    public bool? Unsubscribed { get; set; }

    
    
    [DataMember(Name="unsubscribed_date", EmitDefaultValue=false)]
    public bool? UnsubscribedDate { get; set; }

    
    
    [DataMember(Name="user_type", EmitDefaultValue=false)]
    public string UserType { get; set; }

    
    
    [DataMember(Name="signed_up_with", EmitDefaultValue=false)]
    public string SignedUpWith { get; set; }

    
    
    [DataMember(Name="message", EmitDefaultValue=false)]
    public string Message { get; set; }

    
    
    [DataMember(Name="location", EmitDefaultValue=false)]
    public string Location { get; set; }

    
    
    [DataMember(Name="picture_url", EmitDefaultValue=false)]
    public string PictureUrl { get; set; }

    
    
    [DataMember(Name="profile_url", EmitDefaultValue=false)]
    public string ProfileUrl { get; set; }

    
    
    [DataMember(Name="estimated_location", EmitDefaultValue=false)]
    public string EstimatedLocation { get; set; }

    
    
    [DataMember(Name="estimated_zip", EmitDefaultValue=false)]
    public string EstimatedZip { get; set; }

    
    
    [DataMember(Name="register_ip_addr", EmitDefaultValue=false)]
    public string RegisterIpAddr { get; set; }

    
    
    [DataMember(Name="genuine_email", EmitDefaultValue=false)]
    public bool? GenuineEmail { get; set; }

    
    
    [DataMember(Name="last_active_date", EmitDefaultValue=false)]
    public string LastActiveDate { get; set; }

    
    
    [DataMember(Name="is_client", EmitDefaultValue=false)]
    public bool? IsClient { get; set; }

    
    
    [DataMember(Name="is_hidden", EmitDefaultValue=false)]
    public bool? IsHidden { get; set; }

    
    
    [DataMember(Name="invited_on", EmitDefaultValue=false)]
    public string InvitedOn { get; set; }

    
    
    [DataMember(Name="invited_by", EmitDefaultValue=false)]
    public string InvitedBy { get; set; }

    
    
    [DataMember(Name="portfolio_size", EmitDefaultValue=false)]
    public string PortfolioSize { get; set; }

    
    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Member {\n");
      
      sb.Append("  Id: ").Append(Id).Append("\n");
      
      sb.Append("  Email: ").Append(Email).Append("\n");
      
      sb.Append("  FirstName: ").Append(FirstName).Append("\n");
      
      sb.Append("  LastName: ").Append(LastName).Append("\n");
      
      sb.Append("  Phone: ").Append(Phone).Append("\n");
      
      sb.Append("  Address: ").Append(Address).Append("\n");
      
      sb.Append("  City: ").Append(City).Append("\n");
      
      sb.Append("  State: ").Append(State).Append("\n");
      
      sb.Append("  Zip: ").Append(Zip).Append("\n");
      
      sb.Append("  Gender: ").Append(Gender).Append("\n");
      
      sb.Append("  InterestConsultation: ").Append(InterestConsultation).Append("\n");
      
      sb.Append("  InterestInNewAdvisor: ").Append(InterestInNewAdvisor).Append("\n");
      
      sb.Append("  Assets: ").Append(Assets).Append("\n");
      
      sb.Append("  Age: ").Append(Age).Append("\n");
      
      sb.Append("  DataEstimated: ").Append(DataEstimated).Append("\n");
      
      sb.Append("  Education: ").Append(Education).Append("\n");
      
      sb.Append("  HighNetWorth: ").Append(HighNetWorth).Append("\n");
      
      sb.Append("  HomeMarketValue: ").Append(HomeMarketValue).Append("\n");
      
      sb.Append("  HomeOwnerStatus: ").Append(HomeOwnerStatus).Append("\n");
      
      sb.Append("  HouseholdIncome: ").Append(HouseholdIncome).Append("\n");
      
      sb.Append("  MaritalStatus: ").Append(MaritalStatus).Append("\n");
      
      sb.Append("  Occupation: ").Append(Occupation).Append("\n");
      
      sb.Append("  Hometown: ").Append(Hometown).Append("\n");
      
      sb.Append("  Family: ").Append(Family).Append("\n");
      
      sb.Append("  Tags: ").Append(Tags).Append("\n");
      
      sb.Append("  SubscribedGroupIds: ").Append(SubscribedGroupIds).Append("\n");
      
      sb.Append("  Unsubscribed: ").Append(Unsubscribed).Append("\n");
      
      sb.Append("  UnsubscribedDate: ").Append(UnsubscribedDate).Append("\n");
      
      sb.Append("  UserType: ").Append(UserType).Append("\n");
      
      sb.Append("  SignedUpWith: ").Append(SignedUpWith).Append("\n");
      
      sb.Append("  Message: ").Append(Message).Append("\n");
      
      sb.Append("  Location: ").Append(Location).Append("\n");
      
      sb.Append("  PictureUrl: ").Append(PictureUrl).Append("\n");
      
      sb.Append("  ProfileUrl: ").Append(ProfileUrl).Append("\n");
      
      sb.Append("  EstimatedLocation: ").Append(EstimatedLocation).Append("\n");
      
      sb.Append("  EstimatedZip: ").Append(EstimatedZip).Append("\n");
      
      sb.Append("  RegisterIpAddr: ").Append(RegisterIpAddr).Append("\n");
      
      sb.Append("  GenuineEmail: ").Append(GenuineEmail).Append("\n");
      
      sb.Append("  LastActiveDate: ").Append(LastActiveDate).Append("\n");
      
      sb.Append("  IsClient: ").Append(IsClient).Append("\n");
      
      sb.Append("  IsHidden: ").Append(IsHidden).Append("\n");
      
      sb.Append("  InvitedOn: ").Append(InvitedOn).Append("\n");
      
      sb.Append("  InvitedBy: ").Append(InvitedBy).Append("\n");
      
      sb.Append("  PortfolioSize: ").Append(PortfolioSize).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}
