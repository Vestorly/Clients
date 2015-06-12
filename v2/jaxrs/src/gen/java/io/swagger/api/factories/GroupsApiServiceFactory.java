package io.swagger.api.factories;

import io.swagger.api.GroupsApiService;
import io.swagger.api.impl.GroupsApiServiceImpl;

public class GroupsApiServiceFactory {

   private final static GroupsApiService service = new GroupsApiServiceImpl();

   public static GroupsApiService getGroupsApi()
   {
      return service;
   }
}
