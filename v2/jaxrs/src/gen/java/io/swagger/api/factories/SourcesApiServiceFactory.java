package io.swagger.api.factories;

import io.swagger.api.SourcesApiService;
import io.swagger.api.impl.SourcesApiServiceImpl;

public class SourcesApiServiceFactory {

   private final static SourcesApiService service = new SourcesApiServiceImpl();

   public static SourcesApiService getSourcesApi()
   {
      return service;
   }
}
