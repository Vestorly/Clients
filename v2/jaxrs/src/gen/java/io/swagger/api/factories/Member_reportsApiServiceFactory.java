package io.swagger.api.factories;

import io.swagger.api.Member_reportsApiService;
import io.swagger.api.impl.Member_reportsApiServiceImpl;

public class Member_reportsApiServiceFactory {

   private final static Member_reportsApiService service = new Member_reportsApiServiceImpl();

   public static Member_reportsApiService getMember_reportsApi()
   {
      return service;
   }
}
