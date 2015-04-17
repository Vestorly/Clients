package io.swagger.api;

import io.swagger.model.*;

import com.wordnik.swagger.annotations.ApiParam;

import com.sun.jersey.multipart.FormDataParam;

import io.swagger.model.Post;

import java.util.List;
import io.swagger.api.NotFoundException;

import java.io.InputStream;

import com.sun.jersey.core.header.FormDataContentDisposition;
import com.sun.jersey.multipart.FormDataParam;

import javax.ws.rs.core.Response;
import javax.ws.rs.*;

@Path("/posts")
@com.wordnik.swagger.annotations.Api(value = "/posts", description = "the posts API")
public class PostsApi {
  
  @POST
  
  @Consumes({ "application/x-www-form-urlencoded",  })
  
  @com.wordnik.swagger.annotations.ApiOperation(value = "", notes = "Create a new post in the Vestorly Platform", response = Post.class)
  @com.wordnik.swagger.annotations.ApiResponses(value = { 
    @com.wordnik.swagger.annotations.ApiResponse(code = 200, message = "Response") })

  public Response createPost(@ApiParam(value = "Post", required=true )@FormParam("post")  String post)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }

  
}
