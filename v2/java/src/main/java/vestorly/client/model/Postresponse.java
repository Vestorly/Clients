package vestorly.client.model;

import vestorly.client.model.Post;

import com.wordnik.swagger.annotations.*;
import com.fasterxml.jackson.annotation.JsonProperty;


@ApiModel(description = "")
public class Postresponse  {
  
  private Post post = null;

  
  /**
   **/
  @ApiModelProperty(value = "")
  @JsonProperty("post")
  public Post getPost() {
    return post;
  }
  public void setPost(Post post) {
    this.post = post;
  }

  

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class Postresponse {\n");
    
    sb.append("  post: ").append(post).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
