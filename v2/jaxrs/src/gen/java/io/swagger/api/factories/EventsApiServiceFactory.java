package io.swagger.api.factories;

import io.swagger.api.EventsApiService;
import io.swagger.api.impl.EventsApiServiceImpl;

public class EventsApiServiceFactory {

   private final static EventsApiService service = new EventsApiServiceImpl();

   public static EventsApiService getEventsApi()
   {
      return service;
   }
}
