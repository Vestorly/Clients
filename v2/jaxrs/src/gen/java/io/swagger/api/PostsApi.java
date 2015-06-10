package io.swagger.api;

import io.swagger.model.*;
import io.swagger.api.PostsApiService;
import io.swagger.api.factories.PostsApiServiceFactory;

import com.wordnik.swagger.annotations.ApiParam;

import com.sun.jersey.multipart.FormDataParam;

import io.swagger.model.Posts;
import io.swagger.model.PostInput;
import io.swagger.model.Postresponse;
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
public class PostsApi  {

   private final PostsApiService delegate = PostsApiServiceFactory.getPostsApi();

    @GET
    
    
    
    @com.wordnik.swagger.annotations.ApiOperation(value = "", notes = "Query all posts", response = Posts.class)
    @com.wordnik.swagger.annotations.ApiResponses(value = { 
        @com.wordnik.swagger.annotations.ApiResponse(code = 200, message = "posts response") })

    public Response findPosts(@ApiParam(value = "Vestorly Auth Token",required=true) @QueryParam("vestorly_auth") String vestorlyAuth,
    @ApiParam(value = "Filter post by parameters") @QueryParam("text_query") String textQuery,
    @ApiParam(value = "Filter by External URL") @QueryParam("external_url") String externalUrl,
    @ApiParam(value = "Filter by is_published boolean") @QueryParam("is_published") String isPublished)
    throws NotFoundException {
    return delegate.findPosts(vestorlyAuth,textQuery,externalUrl,isPublished);
    }
    @POST
    
    
    
    @com.wordnik.swagger.annotations.ApiOperation(value = "", notes = "Create a new post in the Vestorly Platform", response = Postresponse.class)
    @com.wordnik.swagger.annotations.ApiResponses(value = { 
        @com.wordnik.swagger.annotations.ApiResponse(code = 200, message = "posts response") })

    public Response createPost(@ApiParam(value = "Vestorly Auth Token",required=true) @QueryParam("vestorly_auth") String vestorlyAuth,
    @ApiParam(value = "Post you want to create" ,required=true ) PostInput post)
    throws NotFoundException {
    return delegate.createPost(vestorlyAuth,post);
    }
    @GET
    @Path("/{id}")
    
    
    @com.wordnik.swagger.annotations.ApiOperation(value = "", notes = "Query all posts", response = Postresponse.class)
    @com.wordnik.swagger.annotations.ApiResponses(value = { 
        @com.wordnik.swagger.annotations.ApiResponse(code = 200, message = "post response") })

    public Response getPostByID(@ApiParam(value = "Vestorly Auth Token",required=true) @QueryParam("vestorly_auth") String vestorlyAuth,
    @ApiParam(value = "ID of post to fetch",required=true ) @PathParam("id") String id)
    throws NotFoundException {
    return delegate.getPostByID(vestorlyAuth,id);
    }
    @PUT
    @Path("/{id}")
    
    
    @com.wordnik.swagger.annotations.ApiOperation(value = "", notes = "Update A Post", response = Postresponse.class)
    @com.wordnik.swagger.annotations.ApiResponses(value = { 
        @com.wordnik.swagger.annotations.ApiResponse(code = 200, message = "post response") })

    public Response updatePostByID(@ApiParam(value = "Vestorly Auth Token",required=true) @QueryParam("vestorly_auth") String vestorlyAuth,
    @ApiParam(value = "id of post to update",required=true ) @PathParam("id") String id,
    @ApiParam(value = "Post you want to update" ,required=true ) Post post)
    throws NotFoundException {
    return delegate.updatePostByID(vestorlyAuth,id,post);
    }
}

