package io.swagger.api;

import io.swagger.api.*;
import io.swagger.model.*;

import com.sun.jersey.multipart.FormDataParam;

import io.swagger.model.Session;
import io.swagger.model.SessionLogoutResponse;

import java.util.List;
import io.swagger.api.NotFoundException;

import java.io.InputStream;

import com.sun.jersey.core.header.FormDataContentDisposition;
import com.sun.jersey.multipart.FormDataParam;

import javax.ws.rs.core.Response;

public abstract class SessionsApiService {
  
      public abstract Response login(String username,String password)
      throws NotFoundException;
  
      public abstract Response logout(String vestorlyAuth,String id)
      throws NotFoundException;
  
}
