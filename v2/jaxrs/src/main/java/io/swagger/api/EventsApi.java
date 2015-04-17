package io.swagger.api;

import io.swagger.model.*;

import com.wordnik.swagger.annotations.ApiParam;

import com.sun.jersey.multipart.FormDataParam;

import io.swagger.model.Events;
import io.swagger.model.Event;

import java.util.List;
import io.swagger.api.NotFoundException;

import java.io.InputStream;

import com.sun.jersey.core.header.FormDataContentDisposition;
import com.sun.jersey.multipart.FormDataParam;

import javax.ws.rs.core.Response;
import javax.ws.rs.*;

@Path("/events")
@com.wordnik.swagger.annotations.Api(value = "/events", description = "the events API")
public class EventsApi {
  
  @GET
  
  
  
  @com.wordnik.swagger.annotations.ApiOperation(value = "", notes = "Returns all events", response = Events.class)
  @com.wordnik.swagger.annotations.ApiResponses(value = { 
    @com.wordnik.swagger.annotations.ApiResponse(code = 200, message = "Event response") })

  public Response findEvents(@ApiParam(value = "Vestorly Auth Token",required=true) @QueryParam("vestorly-auth") String vestorlyAuth)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }

  
  @GET
  @Path("/{id}")
  
  
  @com.wordnik.swagger.annotations.ApiOperation(value = "", notes = "Returns a single event if the user has access", response = Event.class)
  @com.wordnik.swagger.annotations.ApiResponses(value = { 
    @com.wordnik.swagger.annotations.ApiResponse(code = 200, message = "Event response") })

  public Response findEventByID(@ApiParam(value = "Mongo ID of event to fetch",required=true ) @PathParam("id") String id,
    @ApiParam(value = "Vestorly Auth Token",required=true) @QueryParam("vestorly-auth") String vestorlyAuth)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }

  
  @PUT
  @Path("/{id}")
  
  
  @com.wordnik.swagger.annotations.ApiOperation(value = "", notes = "Updates a single event by mongo id", response = Event.class)
  @com.wordnik.swagger.annotations.ApiResponses(value = { 
    @com.wordnik.swagger.annotations.ApiResponse(code = 200, message = "Event response") })

  public Response updateEventByID(@ApiParam(value = "Mongo ID of event to update",required=true ) @PathParam("id") String id,
    @ApiParam(value = "Vestorly Auth Token",required=true) @QueryParam("vestorly-auth") String vestorlyAuth,
    @ApiParam(value = "Event", required=true )@FormParam("event")  String event)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }

  
}
