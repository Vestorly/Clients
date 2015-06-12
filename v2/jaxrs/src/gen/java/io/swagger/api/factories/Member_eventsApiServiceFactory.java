package io.swagger.api.factories;

import io.swagger.api.Member_eventsApiService;
import io.swagger.api.impl.Member_eventsApiServiceImpl;

public class Member_eventsApiServiceFactory {

   private final static Member_eventsApiService service = new Member_eventsApiServiceImpl();

   public static Member_eventsApiService getMember_eventsApi()
   {
      return service;
   }
}
