package io.swagger.api;

import io.swagger.model.*;
import io.swagger.api.SourcesApiService;
import io.swagger.api.factories.SourcesApiServiceFactory;

import com.wordnik.swagger.annotations.ApiParam;

import com.sun.jersey.multipart.FormDataParam;

import io.swagger.model.Sources;
import io.swagger.model.Sourceresponse;
import io.swagger.model.SourceInput;

import java.util.List;
import io.swagger.api.NotFoundException;

import java.io.InputStream;

import com.sun.jersey.core.header.FormDataContentDisposition;
import com.sun.jersey.multipart.FormDataParam;

import javax.ws.rs.core.Response;
import javax.ws.rs.*;

@Path("/sources")


@com.wordnik.swagger.annotations.Api(value = "/sources", description = "the sources API")
public class SourcesApi  {

   private final SourcesApiService delegate = SourcesApiServiceFactory.getSourcesApi();

    @GET
    
    
    
    @com.wordnik.swagger.annotations.ApiOperation(value = "", notes = "Returns all sources", response = Sources.class)
    @com.wordnik.swagger.annotations.ApiResponses(value = { 
        @com.wordnik.swagger.annotations.ApiResponse(code = 200, message = "source response") })

    public Response findSources(@ApiParam(value = "Vestorly Auth Token",required=true) @QueryParam("vestorly_auth") String vestorlyAuth)
    throws NotFoundException {
    return delegate.findSources(vestorlyAuth);
    }
    @POST
    
    
    
    @com.wordnik.swagger.annotations.ApiOperation(value = "", notes = "Create source", response = Sourceresponse.class)
    @com.wordnik.swagger.annotations.ApiResponses(value = { 
        @com.wordnik.swagger.annotations.ApiResponse(code = 200, message = "source response") })

    public Response createSource(@ApiParam(value = "Vestorly Auth Token",required=true) @QueryParam("vestorly_auth") String vestorlyAuth,
    @ApiParam(value = "Source" ,required=true ) SourceInput source)
    throws NotFoundException {
    return delegate.createSource(vestorlyAuth,source);
    }
    @GET
    @Path("/{id}")
    
    
    @com.wordnik.swagger.annotations.ApiOperation(value = "", notes = "Get Source By ID", response = Sourceresponse.class)
    @com.wordnik.swagger.annotations.ApiResponses(value = { 
        @com.wordnik.swagger.annotations.ApiResponse(code = 200, message = "source response") })

    public Response getSourceByID(@ApiParam(value = "Vestorly Auth Token",required=true) @QueryParam("vestorly_auth") String vestorlyAuth,
    @ApiParam(value = "ID of source to fetch",required=true ) @PathParam("id") String id)
    throws NotFoundException {
    return delegate.getSourceByID(vestorlyAuth,id);
    }
    @PUT
    @Path("/{id}")
    
    
    @com.wordnik.swagger.annotations.ApiOperation(value = "", notes = "Update Source By ID", response = Sourceresponse.class)
    @com.wordnik.swagger.annotations.ApiResponses(value = { 
        @com.wordnik.swagger.annotations.ApiResponse(code = 200, message = "source response") })

    public Response updateSourceByID(@ApiParam(value = "Vestorly Auth Token",required=true) @QueryParam("vestorly_auth") String vestorlyAuth,
    @ApiParam(value = "ID of source to fetch",required=true ) @PathParam("id") String id,
    @ApiParam(value = "Source" ,required=true ) SourceInput source)
    throws NotFoundException {
    return delegate.updateSourceByID(vestorlyAuth,id,source);
    }
}

