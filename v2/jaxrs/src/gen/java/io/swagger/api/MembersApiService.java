package io.swagger.api;

import io.swagger.api.*;
import io.swagger.model.*;

import com.sun.jersey.multipart.FormDataParam;

import io.swagger.model.Members;
import io.swagger.model.Member;
import io.swagger.model.Memberresponse;

import java.util.List;
import io.swagger.api.NotFoundException;

import java.io.InputStream;

import com.sun.jersey.core.header.FormDataContentDisposition;
import com.sun.jersey.multipart.FormDataParam;

import javax.ws.rs.core.Response;

public abstract class MembersApiService {
  
      public abstract Response findMembers(String vestorlyAuth)
      throws NotFoundException;
  
      public abstract Response createMember(String vestorlyAuth,Member member)
      throws NotFoundException;
  
      public abstract Response findMemberByID(String id,String vestorlyAuth)
      throws NotFoundException;
  
      public abstract Response updateMemberByID(String id,String vestorlyAuth,Member member)
      throws NotFoundException;
  
}
