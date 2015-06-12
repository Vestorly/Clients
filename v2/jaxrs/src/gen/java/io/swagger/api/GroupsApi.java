package io.swagger.api;

import io.swagger.model.*;
import io.swagger.api.GroupsApiService;
import io.swagger.api.factories.GroupsApiServiceFactory;

import com.wordnik.swagger.annotations.ApiParam;

import com.sun.jersey.multipart.FormDataParam;

import io.swagger.model.Groups;
import io.swagger.model.GroupInput;
import io.swagger.model.Groupresponse;

import java.util.List;
import io.swagger.api.NotFoundException;

import java.io.InputStream;

import com.sun.jersey.core.header.FormDataContentDisposition;
import com.sun.jersey.multipart.FormDataParam;

import javax.ws.rs.core.Response;
import javax.ws.rs.*;

@Path("/groups")


@com.wordnik.swagger.annotations.Api(value = "/groups", description = "the groups API")
public class GroupsApi  {

   private final GroupsApiService delegate = GroupsApiServiceFactory.getGroupsApi();

    @GET
    
    
    
    @com.wordnik.swagger.annotations.ApiOperation(value = "", notes = "Returns all groups", response = Groups.class)
    @com.wordnik.swagger.annotations.ApiResponses(value = { 
        @com.wordnik.swagger.annotations.ApiResponse(code = 200, message = "Group response") })

    public Response findGroups(@ApiParam(value = "Vestorly Auth Token",required=true) @QueryParam("vestorly_auth") String vestorlyAuth)
    throws NotFoundException {
    return delegate.findGroups(vestorlyAuth);
    }
    @POST
    
    
    @Produces({ "application/json" })
    @com.wordnik.swagger.annotations.ApiOperation(value = "", notes = "Creates a new Group", response = Groupresponse.class)
    @com.wordnik.swagger.annotations.ApiResponses(value = { 
        @com.wordnik.swagger.annotations.ApiResponse(code = 200, message = "group response") })

    public Response createGroup(@ApiParam(value = "Vestorly Auth Token",required=true) @QueryParam("vestorly_auth") String vestorlyAuth,
    @ApiParam(value = "Group to add" ,required=true ) GroupInput group)
    throws NotFoundException {
    return delegate.createGroup(vestorlyAuth,group);
    }
    @GET
    @Path("/{id}")
    
    
    @com.wordnik.swagger.annotations.ApiOperation(value = "", notes = "Returns a single group if user has access", response = Groupresponse.class)
    @com.wordnik.swagger.annotations.ApiResponses(value = { 
        @com.wordnik.swagger.annotations.ApiResponse(code = 200, message = "Group response") })

    public Response findGroupByID(@ApiParam(value = "Vestorly Auth Token",required=true) @QueryParam("vestorly_auth") String vestorlyAuth,
    @ApiParam(value = "Mongo ID of group to fetch",required=true ) @PathParam("id") String id)
    throws NotFoundException {
    return delegate.findGroupByID(vestorlyAuth,id);
    }
    @PUT
    @Path("/{id}")
    
    @Produces({ "application/json" })
    @com.wordnik.swagger.annotations.ApiOperation(value = "", notes = "Updates a Group", response = Groupresponse.class)
    @com.wordnik.swagger.annotations.ApiResponses(value = { 
        @com.wordnik.swagger.annotations.ApiResponse(code = 200, message = "group response") })

    public Response updateGroupById(@ApiParam(value = "Vestorly Auth Token",required=true) @QueryParam("vestorly_auth") String vestorlyAuth,
    @ApiParam(value = "id of group to update",required=true ) @PathParam("id") String id,
    @ApiParam(value = "Group to update" ,required=true ) GroupInput group)
    throws NotFoundException {
    return delegate.updateGroupById(vestorlyAuth,id,group);
    }
    @DELETE
    @Path("/{id}")
    
    @Produces({ "application/json" })
    @com.wordnik.swagger.annotations.ApiOperation(value = "", notes = "Deletes a Group", response = Groupresponse.class)
    @com.wordnik.swagger.annotations.ApiResponses(value = { 
        @com.wordnik.swagger.annotations.ApiResponse(code = 200, message = "group response") })

    public Response deleteGroup(@ApiParam(value = "Vestorly Auth Token",required=true) @QueryParam("vestorly_auth") String vestorlyAuth,
    @ApiParam(value = "id of group to delete",required=true ) @PathParam("id") String id)
    throws NotFoundException {
    return delegate.deleteGroup(vestorlyAuth,id);
    }
}

