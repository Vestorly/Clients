using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;

namespace io.swagger.Model {
  public class Session {
    

    /* Id of session */
    
    public string Id { get; set; }

    

    /* User associated with the sessions */
    
    public string User { get; set; }

    

    /* Authenication Cookie associated with sessions */
    
    public string AuthCookie { get; set; }

    

    /* Is the user a new user to the Vestorly Platform */
    
    public bool? NewUser { get; set; }

    

    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Session {\n");
      
      sb.Append("  Id: ").Append(Id).Append("\n");
      
      sb.Append("  User: ").Append(User).Append("\n");
      
      sb.Append("  AuthCookie: ").Append(AuthCookie).Append("\n");
      
      sb.Append("  NewUser: ").Append(NewUser).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}