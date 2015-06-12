package io.swagger.api;

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

public abstract class SourcesApiService {
  
      public abstract Response findSources(String vestorlyAuth)
      throws NotFoundException;
  
      public abstract Response createSource(String vestorlyAuth,SourceInput source)
      throws NotFoundException;
  
      public abstract Response getSourceByID(String vestorlyAuth,String id)
      throws NotFoundException;
  
      public abstract Response updateSourceByID(String vestorlyAuth,String id,SourceInput source)
      throws NotFoundException;
  
}
