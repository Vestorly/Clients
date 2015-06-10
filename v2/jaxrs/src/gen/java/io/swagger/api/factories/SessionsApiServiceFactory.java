package io.swagger.api.factories;

import io.swagger.api.SessionsApiService;
import io.swagger.api.impl.SessionsApiServiceImpl;

public class SessionsApiServiceFactory {

   private final static SessionsApiService service = new SessionsApiServiceImpl();

   public static SessionsApiService getSessionsApi()
   {
      return service;
   }
}
