package io.swagger.api;

import io.swagger.model.*;
import io.swagger.api.Newsletter_settingsApiService;
import io.swagger.api.factories.Newsletter_settingsApiServiceFactory;

import com.wordnik.swagger.annotations.ApiParam;

import com.sun.jersey.multipart.FormDataParam;

import io.swagger.model.NewsletterSettings;
import io.swagger.model.Newslettersettingresponse;
import io.swagger.model.NewsletterSettingsInput;

import java.util.List;
import io.swagger.api.NotFoundException;

import java.io.InputStream;

import com.sun.jersey.core.header.FormDataContentDisposition;
import com.sun.jersey.multipart.FormDataParam;

import javax.ws.rs.core.Response;
import javax.ws.rs.*;

@Path("/newsletter_settings")


@com.wordnik.swagger.annotations.Api(value = "/newsletter_settings", description = "the newsletter_settings API")
public class Newsletter_settingsApi  {

   private final Newsletter_settingsApiService delegate = Newsletter_settingsApiServiceFactory.getNewsletter_settingsApi();

    @GET
    
    
    
    @com.wordnik.swagger.annotations.ApiOperation(value = "", notes = "Returns all newsletter settings", response = NewsletterSettings.class)
    @com.wordnik.swagger.annotations.ApiResponses(value = { 
        @com.wordnik.swagger.annotations.ApiResponse(code = 200, message = "newsletter settings response") })

    public Response findNewsletterSettings(@ApiParam(value = "Vestorly Auth Token",required=true) @QueryParam("vestorly_auth") String vestorlyAuth)
    throws NotFoundException {
    return delegate.findNewsletterSettings(vestorlyAuth);
    }
    @GET
    @Path("/{id}")
    
    
    @com.wordnik.swagger.annotations.ApiOperation(value = "", notes = "Returns a single newsletter settings if the user has access", response = Newslettersettingresponse.class)
    @com.wordnik.swagger.annotations.ApiResponses(value = { 
        @com.wordnik.swagger.annotations.ApiResponse(code = 200, message = "newsletting setting response") })

    public Response findNewsletterSettingsByID(@ApiParam(value = "Mongo ID of newsletter settings to fetch",required=true ) @PathParam("id") String id,
    @ApiParam(value = "Vestorly Auth Token",required=true) @QueryParam("vestorly_auth") String vestorlyAuth)
    throws NotFoundException {
    return delegate.findNewsletterSettingsByID(id,vestorlyAuth);
    }
    @PUT
    @Path("/{id}")
    
    
    @com.wordnik.swagger.annotations.ApiOperation(value = "", notes = "Update a single newsletter setting by ID", response = Newslettersettingresponse.class)
    @com.wordnik.swagger.annotations.ApiResponses(value = { 
        @com.wordnik.swagger.annotations.ApiResponse(code = 200, message = "newsletter settings response") })

    public Response updateNewsletterSettingsByID(@ApiParam(value = "Mongo ID of newsletter settings to update",required=true ) @PathParam("id") String id,
    @ApiParam(value = "Vestorly Auth Token",required=true) @QueryParam("vestorly_auth") String vestorlyAuth,
    @ApiParam(value = "newsletter settings" ,required=true ) NewsletterSettingsInput newsletterSetting)
    throws NotFoundException {
    return delegate.updateNewsletterSettingsByID(id,vestorlyAuth,newsletterSetting);
    }
}

