package io.swagger.api;

import io.swagger.api.*;
import io.swagger.model.*;

import com.sun.jersey.multipart.FormDataParam;

import io.swagger.model.Articles;
import io.swagger.model.Articleresponse;

import java.util.List;
import io.swagger.api.NotFoundException;

import java.io.InputStream;

import com.sun.jersey.core.header.FormDataContentDisposition;
import com.sun.jersey.multipart.FormDataParam;

import javax.ws.rs.core.Response;

public abstract class ArticlesApiService {
  
      public abstract Response findArticles(String vestorlyAuth,Integer limit,String textQuery,String sortDirection,String sortBy)
      throws NotFoundException;
  
      public abstract Response findArticleByID(String vestorlyAuth,String id)
      throws NotFoundException;
  
}
