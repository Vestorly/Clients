using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;

namespace io.swagger.Model {
  public class Member {
    

    
    public string Id { get; set; }

    

    
    public string Email { get; set; }

    

    
    public string FirstName { get; set; }

    

    
    public string LastName { get; set; }

    

    
    public string Phone { get; set; }

    

    
    public string Address { get; set; }

    

    
    public string City { get; set; }

    

    
    public string State { get; set; }

    

    
    public string Zip { get; set; }

    

    
    public string Gender { get; set; }

    

    
    public string InterestConsultation { get; set; }

    

    
    public string InterestInNewAdvisor { get; set; }

    

    
    public string Assets { get; set; }

    

    
    public int? Age { get; set; }

    

    
    public bool? DataEstimated { get; set; }

    

    
    public string Education { get; set; }

    

    
    public bool? HighNetWorth { get; set; }

    

    
    public string HomeMarketValue { get; set; }

    

    
    public string HomeOwnerStatus { get; set; }

    

    
    public int? HouseholdIncome { get; set; }

    

    
    public string MaritalStatus { get; set; }

    

    
    public string Occupation { get; set; }

    

    
    public string Hometown { get; set; }

    

    
    public string Family { get; set; }

    

    
    public List<string> Tags { get; set; }

    

    
    public List<string> SubscribedGroupIds { get; set; }

    

    
    public bool? Unsubscribed { get; set; }

    

    
    public bool? UnsubscribedDate { get; set; }

    

    
    public bool? UserType { get; set; }

    

    
    public bool? SignedUpWith { get; set; }

    

    
    public string Message { get; set; }

    

    
    public string Location { get; set; }

    

    
    public string PictureUrl { get; set; }

    

    
    public string ProfileUrl { get; set; }

    

    
    public string EstimatedLocation { get; set; }

    

    
    public string EstimatedZip { get; set; }

    

    
    public string RegisterIpAddr { get; set; }

    

    
    public bool? GenuineEmail { get; set; }

    

    
    public string LastActiveDate { get; set; }

    

    
    public bool? IsClient { get; set; }

    

    
    public bool? IsHidden { get; set; }

    

    
    public string InvitedOn { get; set; }

    

    
    public string InvitedBy { get; set; }

    

    
    public int? PortfolioSize { get; set; }

    

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