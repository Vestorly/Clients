package io.swagger.api;

import io.swagger.model.*;
import io.swagger.api.AdvisorsApiService;
import io.swagger.api.factories.AdvisorsApiServiceFactory;

import com.wordnik.swagger.annotations.ApiParam;

import com.sun.jersey.multipart.FormDataParam;

import io.swagger.model.Advisor;

import java.util.List;
import io.swagger.api.NotFoundException;

import java.io.InputStream;

import com.sun.jersey.core.header.FormDataContentDisposition;
import com.sun.jersey.multipart.FormDataParam;

import javax.ws.rs.core.Response;
import javax.ws.rs.*;

@Path("/advisors")


@com.wordnik.swagger.annotations.Api(value = "/advisors", description = "the advisors API")
public class AdvisorsApi  {

   private final AdvisorsApiService delegate = AdvisorsApiServiceFactory.getAdvisorsApi();

    @GET
    @Path("/{id}")
    
    
    @com.wordnik.swagger.annotations.ApiOperation(value = "", notes = "Returns a single advisor given their ID", response = Advisor.class)
    @com.wordnik.swagger.annotations.ApiResponses(value = { 
        @com.wordnik.swagger.annotations.ApiResponse(code = 200, message = "Advisor response") })

    public Response findAdvisorByID(@ApiParam(value = "Vestorly Auth Token",required=true) @QueryParam("vestorly_auth") String vestorlyAuth,
    @ApiParam(value = "Advisor Id to fetch",required=true ) @PathParam("id") String id)
    throws NotFoundException {
    return delegate.findAdvisorByID(vestorlyAuth,id);
    }
}

