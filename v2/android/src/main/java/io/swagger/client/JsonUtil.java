package io.swagger.client;

import com.google.gson.Gson;
import com.google.gson.GsonBuilder;
import com.google.gson.reflect.TypeToken;
import java.lang.reflect.Type;
import java.util.List;
import io.swagger.client.model.*;

public class JsonUtil {
  public static GsonBuilder gsonBuilder;

  static {
    gsonBuilder = new GsonBuilder();
    gsonBuilder.serializeNulls();
    gsonBuilder.setDateFormat("yyyy-MM-dd'T'HH:mm:ss.SSSZ");
  }

  public static Gson getGson() {
    return gsonBuilder.create();
  }

  public static String serialize(Object obj){
    return getGson().toJson(obj);
  }

  public static <T> T deserializeToList(String jsonString, Class cls){
    return getGson().fromJson(jsonString, getListTypeForDeserialization(cls));
  }

  public static <T> T deserializeToObject(String jsonString, Class cls){
    return getGson().fromJson(jsonString, getTypeForDeserialization(cls));
  }

  public static Type getListTypeForDeserialization(Class cls) {
    String className = cls.getSimpleName();
    
    if ("Advisorresponse".equalsIgnoreCase(className)) {
      return new TypeToken<List<Advisorresponse>>(){}.getType();
    }
    
    if ("Advisor".equalsIgnoreCase(className)) {
      return new TypeToken<List<Advisor>>(){}.getType();
    }
    
    if ("Advisors".equalsIgnoreCase(className)) {
      return new TypeToken<List<Advisors>>(){}.getType();
    }
    
    if ("Posts".equalsIgnoreCase(className)) {
      return new TypeToken<List<Posts>>(){}.getType();
    }
    
    if ("Postresponse".equalsIgnoreCase(className)) {
      return new TypeToken<List<Postresponse>>(){}.getType();
    }
    
    if ("Postrequest".equalsIgnoreCase(className)) {
      return new TypeToken<List<Postrequest>>(){}.getType();
    }
    
    if ("Post".equalsIgnoreCase(className)) {
      return new TypeToken<List<Post>>(){}.getType();
    }
    
    if ("PostInput".equalsIgnoreCase(className)) {
      return new TypeToken<List<PostInput>>(){}.getType();
    }
    
    if ("SessionLogoutResponse".equalsIgnoreCase(className)) {
      return new TypeToken<List<SessionLogoutResponse>>(){}.getType();
    }
    
    if ("Session".equalsIgnoreCase(className)) {
      return new TypeToken<List<Session>>(){}.getType();
    }
    
    if ("Settings".equalsIgnoreCase(className)) {
      return new TypeToken<List<Settings>>(){}.getType();
    }
    
    if ("OrgSetting".equalsIgnoreCase(className)) {
      return new TypeToken<List<OrgSetting>>(){}.getType();
    }
    
    if ("Features".equalsIgnoreCase(className)) {
      return new TypeToken<List<Features>>(){}.getType();
    }
    
    if ("PersonalSettings".equalsIgnoreCase(className)) {
      return new TypeToken<List<PersonalSettings>>(){}.getType();
    }
    
    if ("User".equalsIgnoreCase(className)) {
      return new TypeToken<List<User>>(){}.getType();
    }
    
    if ("MemberReport".equalsIgnoreCase(className)) {
      return new TypeToken<List<MemberReport>>(){}.getType();
    }
    
    if ("MemberReports".equalsIgnoreCase(className)) {
      return new TypeToken<List<MemberReports>>(){}.getType();
    }
    
    if ("TruncatedMember".equalsIgnoreCase(className)) {
      return new TypeToken<List<TruncatedMember>>(){}.getType();
    }
    
    if ("MemberEvent".equalsIgnoreCase(className)) {
      return new TypeToken<List<MemberEvent>>(){}.getType();
    }
    
    if ("MemberEvents".equalsIgnoreCase(className)) {
      return new TypeToken<List<MemberEvents>>(){}.getType();
    }
    
    if ("Article".equalsIgnoreCase(className)) {
      return new TypeToken<List<Article>>(){}.getType();
    }
    
    if ("Articleresponse".equalsIgnoreCase(className)) {
      return new TypeToken<List<Articleresponse>>(){}.getType();
    }
    
    if ("Articles".equalsIgnoreCase(className)) {
      return new TypeToken<List<Articles>>(){}.getType();
    }
    
    if ("Newsletterresponse".equalsIgnoreCase(className)) {
      return new TypeToken<List<Newsletterresponse>>(){}.getType();
    }
    
    if ("Newsletter".equalsIgnoreCase(className)) {
      return new TypeToken<List<Newsletter>>(){}.getType();
    }
    
    if ("NewsletterInput".equalsIgnoreCase(className)) {
      return new TypeToken<List<NewsletterInput>>(){}.getType();
    }
    
    if ("Newsletters".equalsIgnoreCase(className)) {
      return new TypeToken<List<Newsletters>>(){}.getType();
    }
    
    if ("Memberresponse".equalsIgnoreCase(className)) {
      return new TypeToken<List<Memberresponse>>(){}.getType();
    }
    
    if ("Meta".equalsIgnoreCase(className)) {
      return new TypeToken<List<Meta>>(){}.getType();
    }
    
    if ("Members".equalsIgnoreCase(className)) {
      return new TypeToken<List<Members>>(){}.getType();
    }
    
    if ("Member".equalsIgnoreCase(className)) {
      return new TypeToken<List<Member>>(){}.getType();
    }
    
    if ("EventContent".equalsIgnoreCase(className)) {
      return new TypeToken<List<EventContent>>(){}.getType();
    }
    
    if ("Eventresponse".equalsIgnoreCase(className)) {
      return new TypeToken<List<Eventresponse>>(){}.getType();
    }
    
    if ("Eventcreateresponse".equalsIgnoreCase(className)) {
      return new TypeToken<List<Eventcreateresponse>>(){}.getType();
    }
    
    if ("EventInput".equalsIgnoreCase(className)) {
      return new TypeToken<List<EventInput>>(){}.getType();
    }
    
    if ("Event".equalsIgnoreCase(className)) {
      return new TypeToken<List<Event>>(){}.getType();
    }
    
    if ("Events".equalsIgnoreCase(className)) {
      return new TypeToken<List<Events>>(){}.getType();
    }
    
    if ("Group".equalsIgnoreCase(className)) {
      return new TypeToken<List<Group>>(){}.getType();
    }
    
    if ("GroupInput".equalsIgnoreCase(className)) {
      return new TypeToken<List<GroupInput>>(){}.getType();
    }
    
    if ("Groups".equalsIgnoreCase(className)) {
      return new TypeToken<List<Groups>>(){}.getType();
    }
    
    if ("Groupresponse".equalsIgnoreCase(className)) {
      return new TypeToken<List<Groupresponse>>(){}.getType();
    }
    
    if ("Newslettersettingresponse".equalsIgnoreCase(className)) {
      return new TypeToken<List<Newslettersettingresponse>>(){}.getType();
    }
    
    if ("NewsletterSettings".equalsIgnoreCase(className)) {
      return new TypeToken<List<NewsletterSettings>>(){}.getType();
    }
    
    if ("NewsletterSettingsInput".equalsIgnoreCase(className)) {
      return new TypeToken<List<NewsletterSettingsInput>>(){}.getType();
    }
    
    if ("NewsletterSetting".equalsIgnoreCase(className)) {
      return new TypeToken<List<NewsletterSetting>>(){}.getType();
    }
    
    if ("Sourceresponse".equalsIgnoreCase(className)) {
      return new TypeToken<List<Sourceresponse>>(){}.getType();
    }
    
    if ("Source".equalsIgnoreCase(className)) {
      return new TypeToken<List<Source>>(){}.getType();
    }
    
    if ("SourceInput".equalsIgnoreCase(className)) {
      return new TypeToken<List<SourceInput>>(){}.getType();
    }
    
    if ("Sources".equalsIgnoreCase(className)) {
      return new TypeToken<List<Sources>>(){}.getType();
    }
    
    return new TypeToken<List<Object>>(){}.getType();
  }

  public static Type getTypeForDeserialization(Class cls) {
    String className = cls.getSimpleName();
    
    if ("Advisorresponse".equalsIgnoreCase(className)) {
      return new TypeToken<Advisorresponse>(){}.getType();
    }
    
    if ("Advisor".equalsIgnoreCase(className)) {
      return new TypeToken<Advisor>(){}.getType();
    }
    
    if ("Advisors".equalsIgnoreCase(className)) {
      return new TypeToken<Advisors>(){}.getType();
    }
    
    if ("Posts".equalsIgnoreCase(className)) {
      return new TypeToken<Posts>(){}.getType();
    }
    
    if ("Postresponse".equalsIgnoreCase(className)) {
      return new TypeToken<Postresponse>(){}.getType();
    }
    
    if ("Postrequest".equalsIgnoreCase(className)) {
      return new TypeToken<Postrequest>(){}.getType();
    }
    
    if ("Post".equalsIgnoreCase(className)) {
      return new TypeToken<Post>(){}.getType();
    }
    
    if ("PostInput".equalsIgnoreCase(className)) {
      return new TypeToken<PostInput>(){}.getType();
    }
    
    if ("SessionLogoutResponse".equalsIgnoreCase(className)) {
      return new TypeToken<SessionLogoutResponse>(){}.getType();
    }
    
    if ("Session".equalsIgnoreCase(className)) {
      return new TypeToken<Session>(){}.getType();
    }
    
    if ("Settings".equalsIgnoreCase(className)) {
      return new TypeToken<Settings>(){}.getType();
    }
    
    if ("OrgSetting".equalsIgnoreCase(className)) {
      return new TypeToken<OrgSetting>(){}.getType();
    }
    
    if ("Features".equalsIgnoreCase(className)) {
      return new TypeToken<Features>(){}.getType();
    }
    
    if ("PersonalSettings".equalsIgnoreCase(className)) {
      return new TypeToken<PersonalSettings>(){}.getType();
    }
    
    if ("User".equalsIgnoreCase(className)) {
      return new TypeToken<User>(){}.getType();
    }
    
    if ("MemberReport".equalsIgnoreCase(className)) {
      return new TypeToken<MemberReport>(){}.getType();
    }
    
    if ("MemberReports".equalsIgnoreCase(className)) {
      return new TypeToken<MemberReports>(){}.getType();
    }
    
    if ("TruncatedMember".equalsIgnoreCase(className)) {
      return new TypeToken<TruncatedMember>(){}.getType();
    }
    
    if ("MemberEvent".equalsIgnoreCase(className)) {
      return new TypeToken<MemberEvent>(){}.getType();
    }
    
    if ("MemberEvents".equalsIgnoreCase(className)) {
      return new TypeToken<MemberEvents>(){}.getType();
    }
    
    if ("Article".equalsIgnoreCase(className)) {
      return new TypeToken<Article>(){}.getType();
    }
    
    if ("Articleresponse".equalsIgnoreCase(className)) {
      return new TypeToken<Articleresponse>(){}.getType();
    }
    
    if ("Articles".equalsIgnoreCase(className)) {
      return new TypeToken<Articles>(){}.getType();
    }
    
    if ("Newsletterresponse".equalsIgnoreCase(className)) {
      return new TypeToken<Newsletterresponse>(){}.getType();
    }
    
    if ("Newsletter".equalsIgnoreCase(className)) {
      return new TypeToken<Newsletter>(){}.getType();
    }
    
    if ("NewsletterInput".equalsIgnoreCase(className)) {
      return new TypeToken<NewsletterInput>(){}.getType();
    }
    
    if ("Newsletters".equalsIgnoreCase(className)) {
      return new TypeToken<Newsletters>(){}.getType();
    }
    
    if ("Memberresponse".equalsIgnoreCase(className)) {
      return new TypeToken<Memberresponse>(){}.getType();
    }
    
    if ("Meta".equalsIgnoreCase(className)) {
      return new TypeToken<Meta>(){}.getType();
    }
    
    if ("Members".equalsIgnoreCase(className)) {
      return new TypeToken<Members>(){}.getType();
    }
    
    if ("Member".equalsIgnoreCase(className)) {
      return new TypeToken<Member>(){}.getType();
    }
    
    if ("EventContent".equalsIgnoreCase(className)) {
      return new TypeToken<EventContent>(){}.getType();
    }
    
    if ("Eventresponse".equalsIgnoreCase(className)) {
      return new TypeToken<Eventresponse>(){}.getType();
    }
    
    if ("Eventcreateresponse".equalsIgnoreCase(className)) {
      return new TypeToken<Eventcreateresponse>(){}.getType();
    }
    
    if ("EventInput".equalsIgnoreCase(className)) {
      return new TypeToken<EventInput>(){}.getType();
    }
    
    if ("Event".equalsIgnoreCase(className)) {
      return new TypeToken<Event>(){}.getType();
    }
    
    if ("Events".equalsIgnoreCase(className)) {
      return new TypeToken<Events>(){}.getType();
    }
    
    if ("Group".equalsIgnoreCase(className)) {
      return new TypeToken<Group>(){}.getType();
    }
    
    if ("GroupInput".equalsIgnoreCase(className)) {
      return new TypeToken<GroupInput>(){}.getType();
    }
    
    if ("Groups".equalsIgnoreCase(className)) {
      return new TypeToken<Groups>(){}.getType();
    }
    
    if ("Groupresponse".equalsIgnoreCase(className)) {
      return new TypeToken<Groupresponse>(){}.getType();
    }
    
    if ("Newslettersettingresponse".equalsIgnoreCase(className)) {
      return new TypeToken<Newslettersettingresponse>(){}.getType();
    }
    
    if ("NewsletterSettings".equalsIgnoreCase(className)) {
      return new TypeToken<NewsletterSettings>(){}.getType();
    }
    
    if ("NewsletterSettingsInput".equalsIgnoreCase(className)) {
      return new TypeToken<NewsletterSettingsInput>(){}.getType();
    }
    
    if ("NewsletterSetting".equalsIgnoreCase(className)) {
      return new TypeToken<NewsletterSetting>(){}.getType();
    }
    
    if ("Sourceresponse".equalsIgnoreCase(className)) {
      return new TypeToken<Sourceresponse>(){}.getType();
    }
    
    if ("Source".equalsIgnoreCase(className)) {
      return new TypeToken<Source>(){}.getType();
    }
    
    if ("SourceInput".equalsIgnoreCase(className)) {
      return new TypeToken<SourceInput>(){}.getType();
    }
    
    if ("Sources".equalsIgnoreCase(className)) {
      return new TypeToken<Sources>(){}.getType();
    }
    
    return new TypeToken<Object>(){}.getType();
  }

};
