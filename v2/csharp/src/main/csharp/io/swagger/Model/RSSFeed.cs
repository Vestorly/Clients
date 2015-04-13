using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;

namespace io.swagger.Model {
  public class RSSFeed {
    

    /* Id of object */
    
    public string Id { get; set; }

    

    /* Name of rss feed */
    
    public string Name { get; set; }

    

    /* Category of rss feed */
    
    public string Category { get; set; }

    

    /* URL of rss feed */
    
    public url Url { get; set; }

    

    /* Logo URL of rss feed */
    
    public url LogoUrl { get; set; }

    

    /* Does the feed need to be sanatized. */
    
    public string NeedsSanitize { get; set; }

    

    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class RSSFeed {\n");
      
      sb.Append("  Id: ").Append(Id).Append("\n");
      
      sb.Append("  Name: ").Append(Name).Append("\n");
      
      sb.Append("  Category: ").Append(Category).Append("\n");
      
      sb.Append("  Url: ").Append(Url).Append("\n");
      
      sb.Append("  LogoUrl: ").Append(LogoUrl).Append("\n");
      
      sb.Append("  NeedsSanitize: ").Append(NeedsSanitize).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}