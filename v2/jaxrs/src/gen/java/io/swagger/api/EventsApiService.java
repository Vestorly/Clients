package io.swagger.api;

import io.swagger.api.*;
import io.swagger.model.*;

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

public abstract class EventsApiService {
  
      public abstract Response findEvents(String vestorlyAuth)
      throws NotFoundException;
  
      public abstract Response createEvent(String vestorlyAuth,EventInput event)
      throws NotFoundException;
  
      public abstract Response findEventByID(String id,String vestorlyAuth)
      throws NotFoundException;
  
}
