using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;

namespace io.swagger.Model {
  public class TruncatedMember {
    

    
    public string Id { get; set; }

    

    
    public string FirstName { get; set; }

    

    
    public string LastName { get; set; }

    

    
    public string Email { get; set; }

    

    
    public string PictureUrl { get; set; }

    

    
    public string AddedOn { get; set; }

    

    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class TruncatedMember {\n");
      
      sb.Append("  Id: ").Append(Id).Append("\n");
      
      sb.Append("  FirstName: ").Append(FirstName).Append("\n");
      
      sb.Append("  LastName: ").Append(LastName).Append("\n");
      
      sb.Append("  Email: ").Append(Email).Append("\n");
      
      sb.Append("  PictureUrl: ").Append(PictureUrl).Append("\n");
      
      sb.Append("  AddedOn: ").Append(AddedOn).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}