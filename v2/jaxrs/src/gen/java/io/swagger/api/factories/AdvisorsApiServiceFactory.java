package io.swagger.api.factories;

import io.swagger.api.AdvisorsApiService;
import io.swagger.api.impl.AdvisorsApiServiceImpl;

public class AdvisorsApiServiceFactory {

   private final static AdvisorsApiService service = new AdvisorsApiServiceImpl();

   public static AdvisorsApiService getAdvisorsApi()
   {
      return service;
   }
}
