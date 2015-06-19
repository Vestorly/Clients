package io.swagger.api;

import io.swagger.api.*;
import io.swagger.model.*;

import com.sun.jersey.multipart.FormDataParam;

import io.swagger.model.Groups;
import io.swagger.model.GroupInput;
import io.swagger.model.Groupresponse;

import java.util.List;
import io.swagger.api.NotFoundException;

import java.io.InputStream;

import com.sun.jersey.core.header.FormDataContentDisposition;
import com.sun.jersey.multipart.FormDataParam;

import javax.ws.rs.core.Response;

public abstract class GroupsApiService {
  
      public abstract Response findGroups(String vestorlyAuth)
      throws NotFoundException;
  
      public abstract Response createGroup(String vestorlyAuth,GroupInput group)
      throws NotFoundException;
  
      public abstract Response findGroupByID(String vestorlyAuth,String id)
      throws NotFoundException;
  
      public abstract Response updateGroupById(String vestorlyAuth,String id,GroupInput group)
      throws NotFoundException;
  
      public abstract Response deleteGroup(String vestorlyAuth,String id)
      throws NotFoundException;
  
}
