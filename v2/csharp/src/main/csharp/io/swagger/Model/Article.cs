using System;
using System.Text;
using System.Collections;
using System.Collections.Generic;

namespace io.swagger.Model {
  public class Article {
    

    /* Id of object */
    
    public string Id { get; set; }

    

    /* URL of the article */
    
    public string Url { get; set; }

    

    /* Title of the article */
    
    public string Title { get; set; }

    

    /* Open calcais optics */
    
    public string OpenCalaisTopics { get; set; }

    

    /* Open calais keywords */
    
    public string OpenCalaisKeywords { get; set; }

    

    /* Categories of article */
    
    public string Categories { get; set; }

    

    /* Summary of article */
    
    public string Summary { get; set; }

    

    /* Unparsed HTML */
    
    public string UnparsedHtml { get; set; }

    

    /* Parsed HTML */
    
    public string ParsedHtml { get; set; }

    

    /* Content of article */
    
    public string Content { get; set; }

    

    /* Vestorly topics */
    
    public string VestorlyTopics { get; set; }

    

    /* Override topics */
    
    public string OverrideTopic { get; set; }

    

    /* Article published at time */
    
    public datetime PublishedAt { get; set; }

    

    /* Original image url */
    
    public string OriginalImageUrl { get; set; }

    

    /* Small image url */
    
    public string SmallImageUrl { get; set; }

    

    /* Large image url */
    
    public string LargeImageUrl { get; set; }

    

    /* Image */
    
    public string Img { get; set; }

    

    /* Webpage mobile url */
    
    public string WebpageMobileImageUrl { get; set; }

    

    /* Webpage tablet url */
    
    public string WebpageTabletImageUrl { get; set; }

    

    /* Article URL */
    
    public string RssFeedUrl { get; set; }

    

    /* Article category */
    
    public string RssFeedCategory { get; set; }

    

    /* Article logo */
    
    public string RssFeedLogoUrl { get; set; }

    

    /* Does this article need sanitizing? */
    
    public bool? NeedsSanitize { get; set; }

    

    /* Is this article responsive */
    
    public bool? IsResponsive { get; set; }

    

    /* Is a proxy used for this article */
    
    public bool? IsProxyNeeded { get; set; }

    

    /* Is mobile proxying needed */
    
    public bool? IsMobileProxyNeeded { get; set; }

    

    /* Is working url? */
    
    public bool? IsWorkingUrl { get; set; }

    

    public override string ToString()  {
      var sb = new StringBuilder();
      sb.Append("class Article {\n");
      
      sb.Append("  Id: ").Append(Id).Append("\n");
      
      sb.Append("  Url: ").Append(Url).Append("\n");
      
      sb.Append("  Title: ").Append(Title).Append("\n");
      
      sb.Append("  OpenCalaisTopics: ").Append(OpenCalaisTopics).Append("\n");
      
      sb.Append("  OpenCalaisKeywords: ").Append(OpenCalaisKeywords).Append("\n");
      
      sb.Append("  Categories: ").Append(Categories).Append("\n");
      
      sb.Append("  Summary: ").Append(Summary).Append("\n");
      
      sb.Append("  UnparsedHtml: ").Append(UnparsedHtml).Append("\n");
      
      sb.Append("  ParsedHtml: ").Append(ParsedHtml).Append("\n");
      
      sb.Append("  Content: ").Append(Content).Append("\n");
      
      sb.Append("  VestorlyTopics: ").Append(VestorlyTopics).Append("\n");
      
      sb.Append("  OverrideTopic: ").Append(OverrideTopic).Append("\n");
      
      sb.Append("  PublishedAt: ").Append(PublishedAt).Append("\n");
      
      sb.Append("  OriginalImageUrl: ").Append(OriginalImageUrl).Append("\n");
      
      sb.Append("  SmallImageUrl: ").Append(SmallImageUrl).Append("\n");
      
      sb.Append("  LargeImageUrl: ").Append(LargeImageUrl).Append("\n");
      
      sb.Append("  Img: ").Append(Img).Append("\n");
      
      sb.Append("  WebpageMobileImageUrl: ").Append(WebpageMobileImageUrl).Append("\n");
      
      sb.Append("  WebpageTabletImageUrl: ").Append(WebpageTabletImageUrl).Append("\n");
      
      sb.Append("  RssFeedUrl: ").Append(RssFeedUrl).Append("\n");
      
      sb.Append("  RssFeedCategory: ").Append(RssFeedCategory).Append("\n");
      
      sb.Append("  RssFeedLogoUrl: ").Append(RssFeedLogoUrl).Append("\n");
      
      sb.Append("  NeedsSanitize: ").Append(NeedsSanitize).Append("\n");
      
      sb.Append("  IsResponsive: ").Append(IsResponsive).Append("\n");
      
      sb.Append("  IsProxyNeeded: ").Append(IsProxyNeeded).Append("\n");
      
      sb.Append("  IsMobileProxyNeeded: ").Append(IsMobileProxyNeeded).Append("\n");
      
      sb.Append("  IsWorkingUrl: ").Append(IsWorkingUrl).Append("\n");
      
      sb.Append("}\n");
      return sb.ToString();
    }
  }
  
  
}