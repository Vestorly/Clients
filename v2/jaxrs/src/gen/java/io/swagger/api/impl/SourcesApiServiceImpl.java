package io.swagger.api.impl;

import io.swagger.api.*;
import io.swagger.model.*;

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

public class SourcesApiServiceImpl extends SourcesApiService {
  
      @Override
      public Response findSources(String vestorlyAuth)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }
  
      @Override
      public Response createSource(String vestorlyAuth,SourceInput source)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }
  
      @Override
      public Response getSourceByID(String vestorlyAuth,String id)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }
  
      @Override
      public Response updateSourceByID(String vestorlyAuth,String id,SourceInput source)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }
  
}
