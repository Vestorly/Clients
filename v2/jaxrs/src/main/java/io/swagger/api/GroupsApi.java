package io.swagger.api;

import io.swagger.model.*;

import com.wordnik.swagger.annotations.ApiParam;

import com.sun.jersey.multipart.FormDataParam;

import io.swagger.model.Groups;
import io.swagger.model.Group;
import io.swagger.model.GroupInput;
import io.swagger.model.ErrorModel;

import java.util.List;
import io.swagger.api.NotFoundException;

import java.io.InputStream;

import com.sun.jersey.core.header.FormDataContentDisposition;
import com.sun.jersey.multipart.FormDataParam;

import javax.ws.rs.core.Response;
import javax.ws.rs.*;

@Path("/groups")
@com.wordnik.swagger.annotations.Api(value = "/groups", description = "the groups API")
public class GroupsApi {
  
  @GET
  
  
  
  @com.wordnik.swagger.annotations.ApiOperation(value = "", notes = "Returns all groups", response = Groups.class)
  @com.wordnik.swagger.annotations.ApiResponses(value = { 
    @com.wordnik.swagger.annotations.ApiResponse(code = 200, message = "Group response") })

  public Response findGroups(@ApiParam(value = "Vestorly Auth Token",required=true) @QueryParam("vestorly-auth") String vestorlyAuth)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }

  
  @GET
  @Path("/{id}")
  
  
  @com.wordnik.swagger.annotations.ApiOperation(value = "", notes = "Returns a single group if user has access", response = Group.class)
  @com.wordnik.swagger.annotations.ApiResponses(value = { 
    @com.wordnik.swagger.annotations.ApiResponse(code = 200, message = "Group response") })

  public Response findGroupByID(@ApiParam(value = "Vestorly Auth Token",required=true) @QueryParam("vestorly-auth") String vestorlyAuth,
    @ApiParam(value = "Mongo ID of group to fetch",required=true ) @PathParam("id") String id)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }

  
  @PUT
  @Path("/{id}")
  
  @Produces({ "application/json" })
  @com.wordnik.swagger.annotations.ApiOperation(value = "", notes = "Creates a new Group", response = GroupInput.class)
  @com.wordnik.swagger.annotations.ApiResponses(value = { 
    @com.wordnik.swagger.annotations.ApiResponse(code = 200, message = "group response"),
    
    @com.wordnik.swagger.annotations.ApiResponse(code = 0, message = "unexpected error") })

  public Response addGroup(@ApiParam(value = "Group to add" ,required=true ) Group group)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }

  
  @POST
  @Path("/{id}")
  
  @Produces({ "application/json" })
  @com.wordnik.swagger.annotations.ApiOperation(value = "", notes = "Creates a new Group", response = GroupInput.class)
  @com.wordnik.swagger.annotations.ApiResponses(value = { 
    @com.wordnik.swagger.annotations.ApiResponse(code = 200, message = "group response"),
    
    @com.wordnik.swagger.annotations.ApiResponse(code = 0, message = "unexpected error") })

  public Response addGroup_1(@ApiParam(value = "Group to add" ,required=true ) Group group)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }

  
  @DELETE
  @Path("/{id}")
  
  @Produces({ "application/json" })
  @com.wordnik.swagger.annotations.ApiOperation(value = "", notes = "Deletes a Group", response = GroupInput.class)
  @com.wordnik.swagger.annotations.ApiResponses(value = { 
    @com.wordnik.swagger.annotations.ApiResponse(code = 200, message = "group response"),
    
    @com.wordnik.swagger.annotations.ApiResponse(code = 0, message = "unexpected error") })

  public Response deleteGroup(@ApiParam(value = "Group to remove" ,required=true ) Group group)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }

  
}
