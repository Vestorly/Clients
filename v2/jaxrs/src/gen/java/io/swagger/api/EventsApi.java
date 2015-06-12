package io.swagger.api;

import io.swagger.model.*;
import io.swagger.api.EventsApiService;
import io.swagger.api.factories.EventsApiServiceFactory;

import com.wordnik.swagger.annotations.ApiParam;

import com.sun.jersey.multipart.FormDataParam;

import io.swagger.model.Events;
import io.swagger.model.Eventcreateresponse;
import io.swagger.model.EventInput;
import io.swagger.model.Eventresponse;

import java.util.List;
import io.swagger.api.NotFoundException;

import java.io.InputStream;

import com.sun.jersey.core.header.FormDataContentDisposition;
import com.sun.jersey.multipart.FormDataParam;

import javax.ws.rs.core.Response;
import javax.ws.rs.*;

@Path("/events")


@com.wordnik.swagger.annotations.Api(value = "/events", description = "the events API")
public class EventsApi  {

   private final EventsApiService delegate = EventsApiServiceFactory.getEventsApi();

    @GET
    
    
    
    @com.wordnik.swagger.annotations.ApiOperation(value = "", notes = "Returns all events", response = Events.class)
    @com.wordnik.swagger.annotations.ApiResponses(value = { 
        @com.wordnik.swagger.annotations.ApiResponse(code = 200, message = "Event response") })

    public Response findEvents(@ApiParam(value = "Vestorly Auth Token",required=true) @QueryParam("vestorly_auth") String vestorlyAuth)
    throws NotFoundException {
    return delegate.findEvents(vestorlyAuth);
    }
    @POST
    
    
    
    @com.wordnik.swagger.annotations.ApiOperation(value = "", notes = "Creates a new event in the system", response = Eventcreateresponse.class)
    @com.wordnik.swagger.annotations.ApiResponses(value = { 
        @com.wordnik.swagger.annotations.ApiResponse(code = 200, message = "Event response") })

    public Response createEvent(@ApiParam(value = "Vestorly Auth Token",required=true) @QueryParam("vestorly_auth") String vestorlyAuth,
    @ApiParam(value = "Event" ,required=true ) EventInput event)
    throws NotFoundException {
    return delegate.createEvent(vestorlyAuth,event);
    }
    @GET
    @Path("/{id}")
    
    
    @com.wordnik.swagger.annotations.ApiOperation(value = "", notes = "Returns a single event if the user has access", response = Eventresponse.class)
    @com.wordnik.swagger.annotations.ApiResponses(value = { 
        @com.wordnik.swagger.annotations.ApiResponse(code = 200, message = "Event response") })

    public Response findEventByID(@ApiParam(value = "Mongo ID of event to fetch",required=true ) @PathParam("id") String id,
    @ApiParam(value = "Vestorly Auth Token",required=true) @QueryParam("vestorly_auth") String vestorlyAuth)
    throws NotFoundException {
    return delegate.findEventByID(id,vestorlyAuth);
    }
}

