using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;

namespace io.swagger.Model {
  public class Post {
    

    /* Id of object */
    
    public string Id { get; set; }

    

    /* Title of the post */
    
    public string Title { get; set; }

    

    /* Body of the post */
    
    public string Body { get; set; }

    

    /* Comment associated with the post */
    
    public string Comment { get; set; }

    

    /* Video associated with the post */
    
    public string Video { get; set; }

    

    /* Image associated with the post */
    
    public string Img { get; set; }

    

    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Post {\n");
      
      sb.Append("  Id: ").Append(Id).Append("\n");
      
      sb.Append("  Title: ").Append(Title).Append("\n");
      
      sb.Append("  Body: ").Append(Body).Append("\n");
      
      sb.Append("  Comment: ").Append(Comment).Append("\n");
      
      sb.Append("  Video: ").Append(Video).Append("\n");
      
      sb.Append("  Img: ").Append(Img).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}