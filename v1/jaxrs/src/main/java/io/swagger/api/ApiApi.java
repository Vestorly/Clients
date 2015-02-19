package io.swagger.api;

import io.swagger.model.*;

import com.wordnik.swagger.annotations.*;
import com.sun.jersey.multipart.FormDataParam;


import java.util.List;
import io.swagger.api.NotFoundException;

import java.io.InputStream;

import com.sun.jersey.core.header.FormDataContentDisposition;
import com.sun.jersey.multipart.FormDataParam;

import javax.ws.rs.core.Response;
import javax.ws.rs.*;

@Path("/api")
@Api(value = "/api", description = "the api API")
public class ApiApi {
  
  @POST
  @Path("api/advisors.json")
  
  
  // Void
  @ApiOperation(value = "Create an advisor", notes = "This creates an advisor in the database", response = Void.class)
  @ApiResponses(value = { 
    @ApiResponse(code = 201, message = "Created"),
    
    @ApiResponse(code = 400, message = "The request you made is not acceptable"),
    
    @ApiResponse(code = 401, message = "The request you made does not contain a valid auth token") })

  public Response create(@ApiParam(value = "Authentication token",required=true) @QueryParam("vestorly-auth") String vestorly-auth,
    @ApiParam(value = "JSON block of advisor data", required=true )@FormParam("advisor")  String advisor)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }

  
  @GET
  @Path("api/advisors/{advisor_id}/members.json")
  
  
  // Void
  @ApiOperation(value = "Read member lead data", notes = "This lists all the active members for a given advisor", response = Void.class)
  @ApiResponses(value = { 
    @ApiResponse(code = 400, message = "The request you made is not acceptable"),
    
    @ApiResponse(code = 401, message = "The request you made does not contain a valid auth token") })

  public Response index(@ApiParam(value = "Authentication token",required=true) @QueryParam("vestorly-auth") String vestorly-auth,
    @ApiParam(value = "Id of Advisor",required=true ) @PathParam("advisor_id") String advisor_id,
    @ApiParam(value = "Fuzzy search by name") @QueryParam("search") String search,
    @ApiParam(value = "Sort by: first_name, last_name, content_views, shares, posts_read, signed_up, last_active") @QueryParam("sorted_by") String sorted_by,
    @ApiParam(value = "Sort order: asc, desc") @QueryParam("sorted_order") String sorted_order)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }

  
  @POST
  @Path("api/advisors/{advisor_id}/members.json")
  
  
  // Void
  @ApiOperation(value = "Create a member", notes = "This creates a member in the database", response = Void.class)
  @ApiResponses(value = { 
    @ApiResponse(code = 201, message = "Created"),
    
    @ApiResponse(code = 400, message = "The request you made is not acceptable"),
    
    @ApiResponse(code = 401, message = "The request you made does not contain a valid auth token") })

  public Response create(@ApiParam(value = "Authentication token",required=true) @QueryParam("vestorly-auth") String vestorly-auth,
    @ApiParam(value = "Id of advisor",required=true ) @PathParam("advisor_id") String advisor_id,
    @ApiParam(value = "JSON block of member data", required=true )@FormParam("member")  String member)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }

  
  @GET
  @Path("api/advisors/{advisor_id}/members/{id}.json")
  
  
  // Void
  @ApiOperation(value = "Read a specific member", notes = "This retrieves a specifp ic member object", response = Void.class)
  @ApiResponses(value = { 
    @ApiResponse(code = 400, message = "The request you made is not acceptable"),
    
    @ApiResponse(code = 401, message = "The request you made does not contain a valid auth token") })

  public Response show(@ApiParam(value = "Authentication token",required=true) @QueryParam("vestorly-auth") String vestorly-auth,
    @ApiParam(value = "Id of advisor",required=true ) @PathParam("advisor_id") String advisor_id,
    @ApiParam(value = "Id of member",required=true ) @PathParam("id") String id)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }

  
  @PUT
  @Path("api/advisors/{advisor_id}/members/{id}.json")
  
  
  // Void
  @ApiOperation(value = "Update a member", notes = "This updates a member in the database", response = Void.class)
  @ApiResponses(value = { 
    @ApiResponse(code = 400, message = "The request you made is not acceptable"),
    
    @ApiResponse(code = 401, message = "The request you made does not contain a valid auth token") })

  public Response update(@ApiParam(value = "Authentication token",required=true) @QueryParam("vestorly-auth") String vestorly-auth,
    @ApiParam(value = "Id of advisor",required=true ) @PathParam("advisor_id") String advisor_id,
    @ApiParam(value = "Id of member",required=true ) @PathParam("id") String id,
    @ApiParam(value = "JSON block of member data", required=true )@FormParam("member")  String member)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }

  
  @DELETE
  @Path("api/advisors/{advisor_id}/members/{id}.json")
  
  
  // Void
  @ApiOperation(value = "Deletes a member", notes = "This deletes a member in the database", response = Void.class)
  @ApiResponses(value = { 
    @ApiResponse(code = 400, message = "The request you made is not acceptable"),
    
    @ApiResponse(code = 401, message = "The request you made does not contain a valid auth token") })

  public Response destroy(@ApiParam(value = "Authentication token",required=true) @QueryParam("vestorly-auth") String vestorly-auth,
    @ApiParam(value = "Id of advisor",required=true ) @PathParam("advisor_id") String advisor_id,
    @ApiParam(value = "Id of member",required=true ) @PathParam("id") String id)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }

  
  @GET
  @Path("api/advisors/{advisor_id}/posts.json")
  
  
  // Void
  @ApiOperation(value = "Read a list of posts", notes = "This retrieves a list of post objects", response = Void.class)
  @ApiResponses(value = { 
    @ApiResponse(code = 400, message = "The request you made is not acceptable"),
    
    @ApiResponse(code = 401, message = "The request you made does not contain a valid auth token") })

  public Response index(@ApiParam(value = "Authentication token",required=true) @QueryParam("vestorly-auth") String vestorly-auth,
    @ApiParam(value = "Supports [all/published/unpublished/features/vestorly/newsletter]") @QueryParam("filter_by") String filter_by,
    @ApiParam(value = "Filter by group id") @QueryParam("filter_by_group_id") String filter_by_group_id,
    @ApiParam(value = "Filter by newsletter") @QueryParam("filter_by_newsletter_id") String filter_by_newsletter_id)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }

  
  @POST
  @Path("api/advisors/{advisor_id}/posts.json")
  
  
  // Void
  @ApiOperation(value = "Create an post", notes = "This creates an post in the database", response = Void.class)
  @ApiResponses(value = { 
    @ApiResponse(code = 201, message = "Created"),
    
    @ApiResponse(code = 400, message = "The request you made is not acceptable"),
    
    @ApiResponse(code = 401, message = "The request you made does not contain a valid auth token") })

  public Response create(@ApiParam(value = "Authentication token",required=true) @QueryParam("vestorly-auth") String vestorly-auth,
    @ApiParam(value = "Id of advisor",required=true ) @PathParam("advisor_id") String advisor_id,
    @ApiParam(value = "JSON block of post data", required=true )@FormParam("post")  String post)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }

  
  @GET
  @Path("api/advisors/{advisor_id}/posts/{id}.json")
  
  
  // Void
  @ApiOperation(value = "Read a specific post", notes = "This retrieves a specific post object", response = Void.class)
  @ApiResponses(value = { 
    @ApiResponse(code = 400, message = "The request you made is not acceptable"),
    
    @ApiResponse(code = 401, message = "The request you made does not contain a valid auth token") })

  public Response show(@ApiParam(value = "Authentication token",required=true) @QueryParam("vestorly-auth") String vestorly-auth,
    @ApiParam(value = "Id of post",required=true ) @PathParam("id") String id,
    @ApiParam(value = "Id of advisor",required=true ) @PathParam("advisor_id") String advisor_id)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }

  
  @PUT
  @Path("api/advisors/{advisor_id}/posts/{id}.json")
  
  
  // Void
  @ApiOperation(value = "Update a post", notes = "This updates a post in the database", response = Void.class)
  @ApiResponses(value = { 
    @ApiResponse(code = 400, message = "The request you made is not acceptable"),
    
    @ApiResponse(code = 401, message = "The request you made does not contain a valid auth token") })

  public Response update(@ApiParam(value = "Authentication token",required=true) @QueryParam("vestorly-auth") String vestorly-auth,
    @ApiParam(value = "Id of post",required=true ) @PathParam("id") String id,
    @ApiParam(value = "Id of advisor",required=true ) @PathParam("advisor_id") String advisor_id,
    @ApiParam(value = "JSON block of post data", required=true )@FormParam("post")  String post)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }

  
  @DELETE
  @Path("api/advisors/{advisor_id}/posts/{id}.json")
  
  
  // Void
  @ApiOperation(value = "Deletes a post", notes = "This deletes a post in the database", response = Void.class)
  @ApiResponses(value = { 
    @ApiResponse(code = 400, message = "The request you made is not acceptable"),
    
    @ApiResponse(code = 401, message = "The request you made does not contain a valid auth token"),
    
    @ApiResponse(code = 500, message = "Destroyed") })

  public Response destroy(@ApiParam(value = "Authentication token",required=true) @QueryParam("vestorly-auth") String vestorly-auth,
    @ApiParam(value = "Id of advisor",required=true ) @PathParam("id") String id)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }

  
  @GET
  @Path("api/advisors/{id}.json")
  
  
  // Void
  @ApiOperation(value = "Read a specific advisor", notes = "This retrieves a specifp advisor object", response = Void.class)
  @ApiResponses(value = { 
    @ApiResponse(code = 400, message = "The request you made is not acceptable"),
    
    @ApiResponse(code = 401, message = "The request you made does not contain a valid auth token") })

  public Response show(@ApiParam(value = "Authentication token",required=true) @QueryParam("vestorly-auth") String vestorly-auth,
    @ApiParam(value = "Id of advisor",required=true ) @PathParam("id") String id,
    @ApiParam(value = "Filtered by [signups/page_views]") @QueryParam("filter_by") String filter_by)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }

  
  @PUT
  @Path("api/advisors/{id}.json")
  
  
  // Void
  @ApiOperation(value = "Update a advisor", notes = "This updates a advisor in the database", response = Void.class)
  @ApiResponses(value = { 
    @ApiResponse(code = 400, message = "The request you made is not acceptable"),
    
    @ApiResponse(code = 401, message = "The request you made does not contain a valid auth token") })

  public Response update(@ApiParam(value = "Authentication token",required=true) @QueryParam("vestorly-auth") String vestorly-auth,
    @ApiParam(value = "Id of advisor",required=true ) @PathParam("id") String id)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }

  
}
