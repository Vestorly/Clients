package io.swagger.api.factories;

import io.swagger.api.NewslettersApiService;
import io.swagger.api.impl.NewslettersApiServiceImpl;

public class NewslettersApiServiceFactory {

   private final static NewslettersApiService service = new NewslettersApiServiceImpl();

   public static NewslettersApiService getNewslettersApi()
   {
      return service;
   }
}
