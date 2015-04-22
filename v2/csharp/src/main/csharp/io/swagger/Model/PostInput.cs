using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;

namespace io.swagger.Model {
  public class PostInput {
    

    
    public string Id { get; set; }

    

    
    public string Title { get; set; }

    

    
    public string PostDate { get; set; }

    

    
    public string Body { get; set; }

    

    
    public string Comment { get; set; }

    

    
    public bool? ClientOnly { get; set; }

    

    
    public string Attachment { get; set; }

    

    
    public string Video { get; set; }

    

    
    public string Img { get; set; }

    

    
    public string ImageUrl { get; set; }

    

    
    public bool? ImgCompressed { get; set; }

    

    
    public bool? ImgChanged { get; set; }

    

    
    public string Topic { get; set; }

    

    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class PostInput {\n");
      
      sb.Append("  Id: ").Append(Id).Append("\n");
      
      sb.Append("  Title: ").Append(Title).Append("\n");
      
      sb.Append("  PostDate: ").Append(PostDate).Append("\n");
      
      sb.Append("  Body: ").Append(Body).Append("\n");
      
      sb.Append("  Comment: ").Append(Comment).Append("\n");
      
      sb.Append("  ClientOnly: ").Append(ClientOnly).Append("\n");
      
      sb.Append("  Attachment: ").Append(Attachment).Append("\n");
      
      sb.Append("  Video: ").Append(Video).Append("\n");
      
      sb.Append("  Img: ").Append(Img).Append("\n");
      
      sb.Append("  ImageUrl: ").Append(ImageUrl).Append("\n");
      
      sb.Append("  ImgCompressed: ").Append(ImgCompressed).Append("\n");
      
      sb.Append("  ImgChanged: ").Append(ImgChanged).Append("\n");
      
      sb.Append("  Topic: ").Append(Topic).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}