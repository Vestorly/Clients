package io.swagger.api;

import io.swagger.model.*;
import io.swagger.api.Member_reportsApiService;
import io.swagger.api.factories.Member_reportsApiServiceFactory;

import com.wordnik.swagger.annotations.ApiParam;

import com.sun.jersey.multipart.FormDataParam;

import io.swagger.model.MemberReports;

import java.util.List;
import io.swagger.api.NotFoundException;

import java.io.InputStream;

import com.sun.jersey.core.header.FormDataContentDisposition;
import com.sun.jersey.multipart.FormDataParam;

import javax.ws.rs.core.Response;
import javax.ws.rs.*;

@Path("/member_reports")


@com.wordnik.swagger.annotations.Api(value = "/member_reports", description = "the member_reports API")
public class Member_reportsApi  {

   private final Member_reportsApiService delegate = Member_reportsApiServiceFactory.getMember_reportsApi();

    @GET
    
    
    
    @com.wordnik.swagger.annotations.ApiOperation(value = "", notes = "Returns all member reports", response = MemberReports.class)
    @com.wordnik.swagger.annotations.ApiResponses(value = { 
        @com.wordnik.swagger.annotations.ApiResponse(code = 200, message = "member reports response") })

    public Response findMemberReports(@ApiParam(value = "Vestorly Auth Token",required=true) @QueryParam("vestorly_auth") String vestorlyAuth)
    throws NotFoundException {
    return delegate.findMemberReports(vestorlyAuth);
    }
}

