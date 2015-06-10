package io.swagger.api;

import io.swagger.api.*;
import io.swagger.model.*;

import com.sun.jersey.multipart.FormDataParam;

import io.swagger.model.Posts;
import io.swagger.model.PostInput;
import io.swagger.model.Postresponse;
import io.swagger.model.Post;

import java.util.List;
import io.swagger.api.NotFoundException;

import java.io.InputStream;

import com.sun.jersey.core.header.FormDataContentDisposition;
import com.sun.jersey.multipart.FormDataParam;

import javax.ws.rs.core.Response;

public abstract class PostsApiService {
  
      public abstract Response findPosts(String vestorlyAuth,String textQuery,String externalUrl,String isPublished)
      throws NotFoundException;
  
      public abstract Response createPost(String vestorlyAuth,PostInput post)
      throws NotFoundException;
  
      public abstract Response getPostByID(String vestorlyAuth,String id)
      throws NotFoundException;
  
      public abstract Response updatePostByID(String vestorlyAuth,String id,Post post)
      throws NotFoundException;
  
}
