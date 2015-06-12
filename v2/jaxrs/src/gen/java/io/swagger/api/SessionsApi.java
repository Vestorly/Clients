package io.swagger.api;

import io.swagger.model.*;
import io.swagger.api.SessionsApiService;
import io.swagger.api.factories.SessionsApiServiceFactory;

import com.wordnik.swagger.annotations.ApiParam;

import com.sun.jersey.multipart.FormDataParam;

import io.swagger.model.Session;
import io.swagger.model.SessionLogoutResponse;

import java.util.List;
import io.swagger.api.NotFoundException;

import java.io.InputStream;

import com.sun.jersey.core.header.FormDataContentDisposition;
import com.sun.jersey.multipart.FormDataParam;

import javax.ws.rs.core.Response;
import javax.ws.rs.*;

@Path("/sessions")


@com.wordnik.swagger.annotations.Api(value = "/sessions", description = "the sessions API")
public class SessionsApi  {

   private final SessionsApiService delegate = SessionsApiServiceFactory.getSessionsApi();

    @POST
    
    @Consumes({ "application/x-www-form-urlencoded" })
    
    @com.wordnik.swagger.annotations.ApiOperation(value = "", notes = "Login To Vestorly Platform", response = Session.class)
    @com.wordnik.swagger.annotations.ApiResponses(value = { 
        @com.wordnik.swagger.annotations.ApiResponse(code = 200, message = "Response") })

    public Response login(@ApiParam(value = "Username in the vestorly platform",required=true) @QueryParam("username") String username,
    @ApiParam(value = "Password in Vestorly Platform",required=true) @QueryParam("password") String password)
    throws NotFoundException {
    return delegate.login(username,password);
    }
    @DELETE
    @Path("/{id}")
    
    
    @com.wordnik.swagger.annotations.ApiOperation(value = "", notes = "Logout of the vestorly platform", response = SessionLogoutResponse.class)
    @com.wordnik.swagger.annotations.ApiResponses(value = { 
        @com.wordnik.swagger.annotations.ApiResponse(code = 200, message = "You have successfully logged out of the vestorly platform") })

    public Response logout(@ApiParam(value = "Authenication token",required=true) @QueryParam("vestorly_auth") String vestorlyAuth,
    @ApiParam(value = "ID of pet to session",required=true ) @PathParam("id") String id)
    throws NotFoundException {
    return delegate.logout(vestorlyAuth,id);
    }
}

