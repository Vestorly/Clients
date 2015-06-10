package io.swagger.api;

import io.swagger.api.*;
import io.swagger.model.*;

import com.sun.jersey.multipart.FormDataParam;

import io.swagger.model.Newsletters;
import io.swagger.model.Newsletterresponse;
import io.swagger.model.NewsletterInput;

import java.util.List;
import io.swagger.api.NotFoundException;

import java.io.InputStream;

import com.sun.jersey.core.header.FormDataContentDisposition;
import com.sun.jersey.multipart.FormDataParam;

import javax.ws.rs.core.Response;

public abstract class NewslettersApiService {
  
      public abstract Response findNewsletters(String vestorlyAuth)
      throws NotFoundException;
  
      public abstract Response getNewsletterByID(String vestorlyAuth,String id)
      throws NotFoundException;
  
      public abstract Response updateNewsletterByID(String vestorlyAuth,String id,NewsletterInput newsletter)
      throws NotFoundException;
  
}
