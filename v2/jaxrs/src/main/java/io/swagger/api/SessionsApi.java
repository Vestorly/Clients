package io.swagger.api;

import io.swagger.model.*;

import com.wordnik.swagger.annotations.ApiParam;

import com.sun.jersey.multipart.FormDataParam;

import io.swagger.model.Session;

import java.util.List;
import io.swagger.api.NotFoundException;

import java.io.InputStream;

import com.sun.jersey.core.header.FormDataContentDisposition;
import com.sun.jersey.multipart.FormDataParam;

import javax.ws.rs.core.Response;
import javax.ws.rs.*;

@Path("/sessions")
@com.wordnik.swagger.annotations.Api(value = "/sessions", description = "the sessions API")
public class SessionsApi {
  
  @POST
  
  @Consumes({ "application/x-www-form-urlencoded",  })
  
  @com.wordnik.swagger.annotations.ApiOperation(value = "", notes = "Login To Vestorly Platform", response = Session.class)
  @com.wordnik.swagger.annotations.ApiResponses(value = { 
    @com.wordnik.swagger.annotations.ApiResponse(code = 200, message = "Response") })

  public Response login(@ApiParam(value = "Username in the vestorly platform", required=true )@FormParam("username")  String username,
    @ApiParam(value = "Password in Vestorly Platform", required=true )@FormParam("password")  String password)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }

  
  @DELETE
  @Path("/m")
  @Consumes({ "application/x-www-form-urlencoded",  })
  
  @com.wordnik.swagger.annotations.ApiOperation(value = "", notes = "Logout", response = Session.class)
  @com.wordnik.swagger.annotations.ApiResponses(value = { 
    @com.wordnik.swagger.annotations.ApiResponse(code = 200, message = "Response") })

  public Response logout(@ApiParam(value = "Authenication token", required=true )@FormParam("vestorlyAuth")  String vestorlyAuth)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }

  
}
