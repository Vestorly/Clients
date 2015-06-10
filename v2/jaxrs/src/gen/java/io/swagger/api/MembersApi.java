package io.swagger.api;

import io.swagger.model.*;
import io.swagger.api.MembersApiService;
import io.swagger.api.factories.MembersApiServiceFactory;

import com.wordnik.swagger.annotations.ApiParam;

import com.sun.jersey.multipart.FormDataParam;

import io.swagger.model.Members;
import io.swagger.model.Member;
import io.swagger.model.Memberresponse;

import java.util.List;
import io.swagger.api.NotFoundException;

import java.io.InputStream;

import com.sun.jersey.core.header.FormDataContentDisposition;
import com.sun.jersey.multipart.FormDataParam;

import javax.ws.rs.core.Response;
import javax.ws.rs.*;

@Path("/members")


@com.wordnik.swagger.annotations.Api(value = "/members", description = "the members API")
public class MembersApi  {

   private final MembersApiService delegate = MembersApiServiceFactory.getMembersApi();

    @GET
    
    
    
    @com.wordnik.swagger.annotations.ApiOperation(value = "", notes = "Returns all members", response = Members.class)
    @com.wordnik.swagger.annotations.ApiResponses(value = { 
        @com.wordnik.swagger.annotations.ApiResponse(code = 200, message = "Member response") })

    public Response findMembers(@ApiParam(value = "Vestorly Auth Token",required=true) @QueryParam("vestorly_auth") String vestorlyAuth)
    throws NotFoundException {
    return delegate.findMembers(vestorlyAuth);
    }
    @POST
    
    
    
    @com.wordnik.swagger.annotations.ApiOperation(value = "", notes = "Create a new member in the Vestorly Platform", response = Memberresponse.class)
    @com.wordnik.swagger.annotations.ApiResponses(value = { 
        @com.wordnik.swagger.annotations.ApiResponse(code = 200, message = "member response") })

    public Response createMember(@ApiParam(value = "Vestorly Auth Token",required=true) @QueryParam("vestorly_auth") String vestorlyAuth,
    @ApiParam(value = "Member you want to create" ,required=true ) Member member)
    throws NotFoundException {
    return delegate.createMember(vestorlyAuth,member);
    }
    @GET
    @Path("/{id}")
    
    
    @com.wordnik.swagger.annotations.ApiOperation(value = "", notes = "Returns a single member", response = Memberresponse.class)
    @com.wordnik.swagger.annotations.ApiResponses(value = { 
        @com.wordnik.swagger.annotations.ApiResponse(code = 200, message = "Member response") })

    public Response findMemberByID(@ApiParam(value = "Mongo ID of member to fetch",required=true ) @PathParam("id") String id,
    @ApiParam(value = "Vestorly Auth Token",required=true) @QueryParam("vestorly_auth") String vestorlyAuth)
    throws NotFoundException {
    return delegate.findMemberByID(id,vestorlyAuth);
    }
    @PUT
    @Path("/{id}")
    
    
    @com.wordnik.swagger.annotations.ApiOperation(value = "", notes = "Updates a single member", response = Memberresponse.class)
    @com.wordnik.swagger.annotations.ApiResponses(value = { 
        @com.wordnik.swagger.annotations.ApiResponse(code = 200, message = "Member response") })

    public Response updateMemberByID(@ApiParam(value = "Mongo ID of member to fetch",required=true ) @PathParam("id") String id,
    @ApiParam(value = "Vestorly Auth Token",required=true) @QueryParam("vestorly_auth") String vestorlyAuth,
    @ApiParam(value = "Member you want to update" ,required=true ) Member member)
    throws NotFoundException {
    return delegate.updateMemberByID(id,vestorlyAuth,member);
    }
}

