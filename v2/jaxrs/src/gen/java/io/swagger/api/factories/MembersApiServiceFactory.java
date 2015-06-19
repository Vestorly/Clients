package io.swagger.api.factories;

import io.swagger.api.MembersApiService;
import io.swagger.api.impl.MembersApiServiceImpl;

public class MembersApiServiceFactory {

   private final static MembersApiService service = new MembersApiServiceImpl();

   public static MembersApiService getMembersApi()
   {
      return service;
   }
}
