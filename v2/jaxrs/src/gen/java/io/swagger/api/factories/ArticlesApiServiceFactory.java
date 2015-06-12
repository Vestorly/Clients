package io.swagger.api.factories;

import io.swagger.api.ArticlesApiService;
import io.swagger.api.impl.ArticlesApiServiceImpl;

public class ArticlesApiServiceFactory {

   private final static ArticlesApiService service = new ArticlesApiServiceImpl();

   public static ArticlesApiService getArticlesApi()
   {
      return service;
   }
}
