package io.swagger.api;

import io.swagger.api.*;
import io.swagger.model.*;

import com.sun.jersey.multipart.FormDataParam;

import io.swagger.model.NewsletterSettings;
import io.swagger.model.Newslettersettingresponse;
import io.swagger.model.NewsletterSettingsInput;

import java.util.List;
import io.swagger.api.NotFoundException;

import java.io.InputStream;

import com.sun.jersey.core.header.FormDataContentDisposition;
import com.sun.jersey.multipart.FormDataParam;

import javax.ws.rs.core.Response;

public abstract class Newsletter_settingsApiService {
  
      public abstract Response findNewsletterSettings(String vestorlyAuth)
      throws NotFoundException;
  
      public abstract Response findNewsletterSettingsByID(String id,String vestorlyAuth)
      throws NotFoundException;
  
      public abstract Response updateNewsletterSettingsByID(String id,String vestorlyAuth,NewsletterSettingsInput newsletterSetting)
      throws NotFoundException;
  
}
