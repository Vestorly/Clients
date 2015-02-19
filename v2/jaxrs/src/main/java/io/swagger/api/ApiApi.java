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
  
  @GET
  @Path("api/advisors/{id}.json")
  
  
  // Void
  @ApiOperation(value = "Read a specific advisor", notes = "This retrieves a specific article advisor", response = Void.class)
  @ApiResponses(value = { 
    @ApiResponse(code = 400, message = "The request you made is not acceptable"),
    
    @ApiResponse(code = 401, message = "The request you made does not contain a valid auth token") })

  public Response show(@ApiParam(value = "Authentication token",required=true) @QueryParam("vestorly-auth") String vestorly-auth,
    @ApiParam(value = "Id of advisor",required=true ) @PathParam("id") String id)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }

  
  @GET
  @Path("api/articles.json")
  
  
  // Void
  @ApiOperation(value = "Read a list of articles", notes = "This retrieves a list of articles objects", response = Void.class)
  @ApiResponses(value = { 
    @ApiResponse(code = 400, message = "The request you made is not acceptable"),
    
    @ApiResponse(code = 401, message = "The request you made does not contain a valid auth token") })

  public Response index(@ApiParam(value = "Authentication token",required=true) @QueryParam("vestorly-auth") String vestorly-auth,
    @ApiParam(value = "Filter by published articles") @QueryParam("is_published") String is_published,
    @ApiParam(value = "Filter by posts with external URL source") @QueryParam("external_url_source") String external_url_source,
    @ApiParam(value = "Return posts with list of IDs provided") @QueryParam("ids") String ids)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }

  
  @GET
  @Path("api/articles/{id}.json")
  
  
  // Void
  @ApiOperation(value = "Read a specific article", notes = "This retrieves a specific article document", response = Void.class)
  @ApiResponses(value = { 
    @ApiResponse(code = 400, message = "The request you made is not acceptable"),
    
    @ApiResponse(code = 401, message = "The request you made does not contain a valid auth token") })

  public Response show(@ApiParam(value = "Authentication token",required=true) @QueryParam("vestorly-auth") String vestorly-auth,
    @ApiParam(value = "Id of article",required=true ) @PathParam("id") String id)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }

  
  @PUT
  @Path("api/articles/{id}.json")
  
  
  // Void
  @ApiOperation(value = "Update an article", notes = "This updates an article in the database", response = Void.class)
  @ApiResponses(value = { 
    @ApiResponse(code = 400, message = "The request you made is not acceptable"),
    
    @ApiResponse(code = 401, message = "The request you made does not contain a valid auth token") })

  public Response update(@ApiParam(value = "Authentication token",required=true) @QueryParam("vestorly-auth") String vestorly-auth,
    @ApiParam(value = "JSON block of article data", required=true )@FormParam("article")  String article)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }

  
  @GET
  @Path("api/events.json")
  
  
  // Void
  @ApiOperation(value = "Read a list of events", notes = "This retrieves a list of events objects", response = Void.class)
  @ApiResponses(value = { 
    @ApiResponse(code = 400, message = "The request you made is not acceptable"),
    
    @ApiResponse(code = 401, message = "The request you made does not contain a valid auth token") })

  public Response index(@ApiParam(value = "Authentication token",required=true) @QueryParam("vestorly-auth") String vestorly-auth)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }

  
  @POST
  @Path("api/events.json")
  
  
  // Void
  @ApiOperation(value = "Create a event", notes = "This creates an event in the database", response = Void.class)
  @ApiResponses(value = { 
    @ApiResponse(code = 400, message = "The request you made is not acceptable"),
    
    @ApiResponse(code = 401, message = "The request you made does not contain a valid auth token") })

  public Response create(@ApiParam(value = "JSON block of event data", required=true )@FormParam("event")  String event)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }

  
  @GET
  @Path("api/events/{id}.json")
  
  
  // Void
  @ApiOperation(value = "Read a specific event", notes = "This retrieves a specific event document", response = Void.class)
  @ApiResponses(value = { 
    @ApiResponse(code = 400, message = "The request you made is not acceptable"),
    
    @ApiResponse(code = 401, message = "The request you made does not contain a valid auth token") })

  public Response show(@ApiParam(value = "Authentication token",required=true) @QueryParam("vestorly-auth") String vestorly-auth,
    @ApiParam(value = "Id of event",required=true ) @PathParam("id") String id)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }

  
  @PUT
  @Path("api/events/{id}.json")
  
  
  // Void
  @ApiOperation(value = "Create a event", notes = "This creates an event in the database", response = Void.class)
  @ApiResponses(value = { 
    @ApiResponse(code = 400, message = "The request you made is not acceptable"),
    
    @ApiResponse(code = 401, message = "The request you made does not contain a valid auth token") })

  public Response update(@ApiParam(value = "Id of g",required=true ) @PathParam("id") String id,
    @ApiParam(value = "JSON block of event data", required=true )@FormParam("event")  String event)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }

  
  @GET
  @Path("api/posts.json")
  
  
  // Void
  @ApiOperation(value = "Read a list of posts", notes = "This retrieves a list of post objects", response = Void.class)
  @ApiResponses(value = { 
    @ApiResponse(code = 400, message = "The request you made is not acceptable"),
    
    @ApiResponse(code = 401, message = "The request you made does not contain a valid auth token") })

  public Response index(@ApiParam(value = "Authentication token",required=true) @QueryParam("vestorly-auth") String vestorly-auth,
    @ApiParam(value = "Filter by published articles") @QueryParam("is_published") String is_published,
    @ApiParam(value = "Filter by posts with external URL source") @QueryParam("external_url_source") String external_url_source,
    @ApiParam(value = "Return posts with list of IDs provided") @QueryParam("ids") String ids)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }

  
  @POST
  @Path("api/posts.json")
  
  
  // Void
  @ApiOperation(value = "Create an post", notes = "This creates an post in the database", response = Void.class)
  @ApiResponses(value = {  })

  public Response create(@ApiParam(value = "JSON block of post data", required=true )@FormParam("post")  String post)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }

  
  @GET
  @Path("api/posts/{id}.json")
  
  
  // Void
  @ApiOperation(value = "Retreive a single post", notes = "Retrieve a single post from the database", response = Void.class)
  @ApiResponses(value = { 
    @ApiResponse(code = 400, message = "Post not found"),
    
    @ApiResponse(code = 401, message = "The request you made does not contain a valid auth token") })

  public Response show(@ApiParam(value = "Authentication token",required=true) @QueryParam("vestorly-auth") String vestorly-auth,
    @ApiParam(value = "Id of post",required=true ) @PathParam("id") String id)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }

  
  @PUT
  @Path("api/posts/{id}.json")
  
  
  // Void
  @ApiOperation(value = "Create an advisor", notes = "This creates an advisor in the database", response = Void.class)
  @ApiResponses(value = { 
    @ApiResponse(code = 400, message = "The request you made is not acceptable"),
    
    @ApiResponse(code = 401, message = "The request you made does not contain a valid auth token") })

  public Response update(@ApiParam(value = "Id of post",required=true ) @PathParam("id") String id,
    @ApiParam(value = "JSON block of post data", required=true )@FormParam("post")  String post)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }

  
  @DELETE
  @Path("api/posts/{id}.json")
  
  
  // Void
  @ApiOperation(value = "Destroy a post", notes = "This destroys a post in the database", response = Void.class)
  @ApiResponses(value = {  })

  public Response destroy(@ApiParam(value = "Id of pow5",required=true ) @PathParam("id") String id)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }

  
  @GET
  @Path("api/rss_feeds.json")
  
  
  // Void
  @ApiOperation(value = "Read a list of rss feed", notes = "This retrieves a list of rss feed objects", response = Void.class)
  @ApiResponses(value = { 
    @ApiResponse(code = 400, message = "The request you made is not acceptable"),
    
    @ApiResponse(code = 401, message = "The request you made does not contain a valid auth token") })

  public Response index(@ApiParam(value = "Authentication token",required=true) @QueryParam("vestorly-auth") String vestorly-auth,
    @ApiParam(value = "Return rss feed with list of IDs provided") @QueryParam("ids") String ids)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }

  
  @POST
  @Path("api/rss_feeds.json")
  
  
  // Void
  @ApiOperation(value = "Create an post", notes = "This creates an post in the database", response = Void.class)
  @ApiResponses(value = {  })

  public Response create(@ApiParam(value = "JSON block of rss feed data", required=true )@FormParam("rss_feed")  String rss_feed)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }

  
  @GET
  @Path("api/rss_feeds/{id}.json")
  
  
  // Void
  @ApiOperation(value = "Retreive a single rss feed", notes = "Retrieve a single rss feed from the database", response = Void.class)
  @ApiResponses(value = { 
    @ApiResponse(code = 400, message = "RSS Feed not found"),
    
    @ApiResponse(code = 401, message = "The request you made does not contain a valid auth token") })

  public Response show(@ApiParam(value = "Authentication token",required=true) @QueryParam("vestorly-auth") String vestorly-auth,
    @ApiParam(value = "Id of rss feed",required=true ) @PathParam("id") String id)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }

  
  @PUT
  @Path("api/rss_feeds/{id}.json")
  
  
  // Void
  @ApiOperation(value = "Create an advisor", notes = "This creates an advisor in the database", response = Void.class)
  @ApiResponses(value = { 
    @ApiResponse(code = 400, message = "The request you made is not acceptable"),
    
    @ApiResponse(code = 401, message = "The request you made does not contain a valid auth token") })

  public Response update(@ApiParam(value = "Id of post",required=true ) @PathParam("id") String id,
    @ApiParam(value = "JSON block of rss feed data", required=true )@FormParam("rss_feed")  String rss_feed)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }

  
  @DELETE
  @Path("api/rss_feeds/{id}.json")
  
  
  // Void
  @ApiOperation(value = "Destroy a post", notes = "This destroys a post in the database", response = Void.class)
  @ApiResponses(value = {  })

  public Response destroy(@ApiParam(value = "Id of pow5",required=true ) @PathParam("id") String id)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }

  
  @GET
  @Path("api/sources.json")
  
  
  // Void
  @ApiOperation(value = "Read a list of sources", notes = "This retrieves a list of sources objects", response = Void.class)
  @ApiResponses(value = { 
    @ApiResponse(code = 400, message = "The request you made is not acceptable"),
    
    @ApiResponse(code = 401, message = "The request you made does not contain a valid auth token") })

  public Response index(@ApiParam(value = "Authentication token",required=true) @QueryParam("vestorly-auth") String vestorly-auth,
    @ApiParam(value = "Return sources with list of IDs provided") @QueryParam("ids") String ids)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }

  
  @GET
  @Path("api/sources/{id}.json")
  
  
  // Void
  @ApiOperation(value = "Read a specific source", notes = "This retrieves a specific source document", response = Void.class)
  @ApiResponses(value = { 
    @ApiResponse(code = 400, message = "The request you made is not acceptable"),
    
    @ApiResponse(code = 401, message = "The request you made does not contain a valid auth token") })

  public Response show(@ApiParam(value = "Authentication token",required=true) @QueryParam("vestorly-auth") String vestorly-auth,
    @ApiParam(value = "Id of source",required=true ) @PathParam("id") String id)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }

  
  @PUT
  @Path("api/sources/{id}.json")
  
  
  // Void
  @ApiOperation(value = "Create a source", notes = "This creates an source in the database", response = Void.class)
  @ApiResponses(value = { 
    @ApiResponse(code = 400, message = "The request you made is not acceptable"),
    
    @ApiResponse(code = 401, message = "The request you made does not contain a valid auth token") })

  public Response update(@ApiParam(value = "Id of g",required=true ) @PathParam("id") String id,
    @ApiParam(value = "JSON block of source data", required=true )@FormParam("source")  String source)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }

  
}
