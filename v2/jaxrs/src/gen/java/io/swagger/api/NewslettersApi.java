package io.swagger.api;

import io.swagger.model.*;
import io.swagger.api.NewslettersApiService;
import io.swagger.api.factories.NewslettersApiServiceFactory;

import com.wordnik.swagger.annotations.ApiParam;

import com.sun.jersey.multipart.FormDataParam;

import io.swagger.model.Newsletters;
import io.swagger.model.Newsletterresponse;
import io.swagger.model.NewsletterInput;

import java.util.List;
import io.swagger.api.NotFoundException;

import java.io.InputStream;

import com.sun.jersey.core.header.FormDataContentDisposition;
import com.sun.jersey.multipart.FormDataParam;

import javax.ws.rs.core.Response;
import javax.ws.rs.*;

@Path("/newsletters")


@com.wordnik.swagger.annotations.Api(value = "/newsletters", description = "the newsletters API")
public class NewslettersApi  {

   private final NewslettersApiService delegate = NewslettersApiServiceFactory.getNewslettersApi();

    @GET
    
    
    
    @com.wordnik.swagger.annotations.ApiOperation(value = "", notes = "Returns all newsletters", response = Newsletters.class)
    @com.wordnik.swagger.annotations.ApiResponses(value = { 
        @com.wordnik.swagger.annotations.ApiResponse(code = 200, message = "Newsletter response") })

    public Response findNewsletters(@ApiParam(value = "Vestorly Auth Token",required=true) @QueryParam("vestorly_auth") String vestorlyAuth)
    throws NotFoundException {
    return delegate.findNewsletters(vestorlyAuth);
    }
    @GET
    @Path("/{id}")
    
    
    @com.wordnik.swagger.annotations.ApiOperation(value = "", notes = "Get a newsletter by ID", response = Newsletterresponse.class)
    @com.wordnik.swagger.annotations.ApiResponses(value = { 
        @com.wordnik.swagger.annotations.ApiResponse(code = 200, message = "Newsletter response") })

    public Response getNewsletterByID(@ApiParam(value = "Vestorly Auth Token",required=true) @QueryParam("vestorly_auth") String vestorlyAuth,
    @ApiParam(value = "Mongo ID of event to get",required=true ) @PathParam("id") String id)
    throws NotFoundException {
    return delegate.getNewsletterByID(vestorlyAuth,id);
    }
    @PUT
    @Path("/{id}")
    
    
    @com.wordnik.swagger.annotations.ApiOperation(value = "", notes = "Updates a newsletter", response = Newsletterresponse.class)
    @com.wordnik.swagger.annotations.ApiResponses(value = { 
        @com.wordnik.swagger.annotations.ApiResponse(code = 200, message = "Newsletter response") })

    public Response updateNewsletterByID(@ApiParam(value = "Vestorly Auth Token",required=true) @QueryParam("vestorly_auth") String vestorlyAuth,
    @ApiParam(value = "Mongo ID of event to update",required=true ) @PathParam("id") String id,
    @ApiParam(value = "Newsletter" ,required=true ) NewsletterInput newsletter)
    throws NotFoundException {
    return delegate.updateNewsletterByID(vestorlyAuth,id,newsletter);
    }
}

