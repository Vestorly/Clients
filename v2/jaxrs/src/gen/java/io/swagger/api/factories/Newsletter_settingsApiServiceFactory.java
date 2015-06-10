package io.swagger.api.factories;

import io.swagger.api.Newsletter_settingsApiService;
import io.swagger.api.impl.Newsletter_settingsApiServiceImpl;

public class Newsletter_settingsApiServiceFactory {

   private final static Newsletter_settingsApiService service = new Newsletter_settingsApiServiceImpl();

   public static Newsletter_settingsApiService getNewsletter_settingsApi()
   {
      return service;
   }
}
