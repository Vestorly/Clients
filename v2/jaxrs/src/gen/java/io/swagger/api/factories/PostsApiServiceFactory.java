package io.swagger.api.factories;

import io.swagger.api.PostsApiService;
import io.swagger.api.impl.PostsApiServiceImpl;

public class PostsApiServiceFactory {

   private final static PostsApiService service = new PostsApiServiceImpl();

   public static PostsApiService getPostsApi()
   {
      return service;
   }
}
