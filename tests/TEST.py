import vestorly
import time

client = vestorly.ApiClient(host="http://dev.vestorly.com/api/v2", header_name='x-vestorly-auth', header_value="")


################################ SessionsApi Tests ################################ 
print "\nSessionsApi Tests\n"
api = vestorly.SessionsApi(api_client=client)

# /sessions POST
response =  api.login(**{'username':"EMAIL", 'password':"PASSWORD"})
auth = response.vestorly_auth
print "AUTH: " + auth + "\n"

# /sessions/{id} DELETE
##response = api.logout(vestorly_auth=auth, id=response.current_user._id)
##print response.message
print "\n" + ("#" * 50) + "\n"

################################## AdvisorsApi Tests ################################ 
print "\n" + "AdvisorsApi Tests"
api = vestorly.AdvisorsApi(api_client=client)

# /advisors GET
response = api.find_advisor_by_id(vestorly_auth=auth, id=response.current_user._id)
attrs = vars(response)
for item in attrs.items():
    print item

print "\n All AdvisorsApi Tests Passed!"
print "\n" + ("#" * 50)

################################ PostsApi Tests ################################ 
print "\nPostsApi Tests\n"
api = vestorly.PostsApi(api_client=client)

########## /posts GET
response = api.find_posts(vestorly_auth=auth)

######## /posts/{id} GET
for post in response.posts:
    print "\n"
    response2 = api.get_post_by_id(vestorly_auth=auth, id=post._id)
    attrs = vars(response2.post)
    for item in attrs.items():
        print item

########## /posts/ POST
postInput = vestorly.PostInput()
postInput.title = "MY TITLE"
postInput.post_date = "MY POSTDATE"
response = api.create_post(vestorly_auth=auth, post=postInput)
myID = response.post._id
attrs = vars(response.post)
for item in attrs.items():
    print item

######## /posts/{id} PUT
postUpdate = vestorly.Post()
postUpdate.title = "MY UPDATED TITLE"
postUpdate.post_date = "MY UPDATED POSTDATE"
response = api.update_post_by_id(vestorly_auth=auth, id=myID, post=postUpdate)
attrs = vars(response.post)
print "\n"
for item in attrs.items():
    print item

print "\n All PostsApi Tests Passed!"
print "\n" + ("#" * 50) + "\n"


################################ ArticlesApi Tests ################################ 
print "\n" + "ArticlesApi Tests "
api = vestorly.ArticlesApi(api_client=client)

########## /articles GET
response = api.find_articles(vestorly_auth=auth, limit = 10)

########## /articles/{id} GET
for article in response.articles:
    print "\n"
    response2 = api.find_article_by_id(vestorly_auth=auth, id=article._id)
    attrs = vars(response2.article)
    for item in attrs.items():
        print item

print "\nAll ArticlesApi Tests have passed!"
print "\n" + ("#" * 50)

############################## SourcesApi Tests ################################
print "\nSourcesApi Tests\n"
api = vestorly.SourcesApi(api_client=client)

########## /sources GET
response = api.find_sources(vestorly_auth=auth)

########## /sources/{id} GET
for source in response.sources:
    print "\n"
    response2 = api.get_source_by_id(vestorly_auth=auth, id=source._id)
    attrs = vars(response2.source)
    for item in attrs.items():
        print item

########## /sources/ POST
sourceInput = vestorly.SourceInput()
sourceInput.name = "MY NAME" + str(time.time())
sourceInput.rss_publisher = "MY RSS PUBLISHER" + str(time.time())
sourceInput.url = "MY URL" + str(time.time())

response = api.create_source(vestorly_auth=auth, source=sourceInput)
myID = response.source._id
attrs = vars(response.source)
for item in attrs.items():
    print item
print "\n"

########## /sources/{id} PUT
sourceUpdate = vestorly.SourceInput()
sourceUpdate.name = "MY UPDATED NAME"
sourceUpdate.rss_publisher = "MY UPDATED RSS PUBLISHER"
sourceUpdate.url = "MY UPDATED URL"
response = api.update_source_by_id(vestorly_auth=auth, id=myID, source=sourceUpdate)
attrs = vars(response.source)
for item in attrs.items():
    print item

print "\nAll SourcesAPI tests have passed!\n"
print "\n" + ("#" * 50) + "\n"

############################## NewlettersApi Tests ################################
print "\nNewslettersApi Tests\n"
api = vestorly.NewslettersApi(api_client=client)

########## /newsletters GET
response = api.find_newsletters(vestorly_auth=auth)

########## /newsletters/{id} GET
for newsletter in response.newsletters:
    print "\n"
    response2 = api.get_newsletter_by_id(vestorly_auth=auth, id=newsletter._id)
    attrs = vars(response2.newsletter)
    for item in attrs.items():
        print item

########## /newsletters/{id} PUT
newsletterUpdate = vestorly.NewsletterInput()
newsletterUpdate.click_count = 4

response = api.update_newsletter_by_id(vestorly_auth=auth, id="ID", newsletter=newsletterUpdate)
attrs = vars(response.newsletter)
print "\n"
for item in attrs.items():
    print item

print "\nAll NewslettersApi tests have passed!\n"
print "\n" + ("#" * 50) + "\n"

############################## NewletterSettingsApi Tests ################################
print "\nNewsletterSettingsApi Tests\n"
api = vestorly.NewslettersettingsApi(api_client=client)

########## /newsletterSettings GET
response = api.find_newsletter_settings(vestorly_auth=auth)

########## /newsletterSettings/{id} GET
for newslettersetting in response.newsletter_settings:
    print "\n"
    response2 = api.find_newsletter_settings_by_id(vestorly_auth=auth, id=newslettersetting._id)
    attrs = vars(response2.newsletter_setting)
    for item in attrs.items():
        print item

########## /newsletterSettings/{id} PUT
newsletterSettingsUpdate = vestorly.NewsletterSettingsInput()
newsletterSettingsUpdate.newsletter_setting = api.find_newsletter_settings_by_id(vestorly_auth=auth, id="ID").newsletter_setting
##newsletterSettingsUpdate.newsletter_setting.email_day_of_week = 1
##newsletterSettingsUpdate.newsletter_setting.email_hour = 10
##newsletterSettingsUpdate.newsletter_setting.email_status = "off"
##newsletterSettingsUpdate.newsletter_setting.facebook_day_of_week = 1
##newsletterSettingsUpdate.newsletter_setting.facebook_hour = 10
##newsletterSettingsUpdate.newsletter_setting.facebook_status = "off"
##newsletterSettingsUpdate.newsletter_setting.group_id = "ID"
##newsletterSettingsUpdate.newsletter_setting.linkedin_day_of_week = 1
##newsletterSettingsUpdate.newsletter_setting.linkedin_hour = 10
##newsletterSettingsUpdate.newsletter_setting.linkedin_status = "off"
##newsletterSettingsUpdate.newsletter_setting.twitter_day_of_week = 1
##newsletterSettingsUpdate.newsletter_setting.twitter_hour = 10
##newsletterSettingsUpdate.newsletter_setting.twitter_status = "off"
##newsletterSettingsUpdate.newsletter_setting.newsletter_type = "manual"

response = api.update_newsletter_settings_by_id(vestorly_auth=auth, id="ID", newsletter_setting=newsletterSettingsUpdate)
attrs = vars(response.newsletter_setting)
for item in attrs.items():
    print item

print "\nAll NewsletterSettingsApi tests have passed!\n"
print "\n" + ("#" * 50) + "\n"

############################## EventsApi Tests ################################
print "\nEventsApi Tests\n"
api = vestorly.EventsApi(api_client=client)

########## /events GET
response = api.find_events(vestorly_auth=auth)

########## /events/{id} GET
for event in response.events:
    print "\n"
    response2 = api.find_event_by_id(vestorly_auth=auth, id=event._id)
    attrs = vars(response2.event)
    for item in attrs.items():
        print item

########## /events/ POST
eventInput = vestorly.EventInput()
response = api.create_event(vestorly_auth=auth, event=eventInput)
print response

print "\nAll EventsApi tests have passed!\n"
print "\n" + ("#" * 50) + "\n"

################################ GroupsApi Tests ################################ 
print "\nGroupsApi Tests\n"
api = vestorly.GroupsApi(api_client=client)

########## /groups GET
response = api.find_groups(vestorly_auth=auth)

########## /groups/{id} GET
for group in response.groups:
    print "\n"
    response2 = api.find_group_by_id(vestorly_auth=auth, id=group._id)
    attrs = vars(response2.group)
    for item in attrs.items():
        print item

########## /groups/ POST
groupInput = vestorly.GroupInput()
groupInput.name = "MY NAMEytasdfhdf"

response = api.create_group(vestorly_auth=auth, group=groupInput)
myID = response.group._id
attrs = vars(response.group)
print "\n"
for item in attrs.items():
    print item
    

########## /groups/{id} PUT
groupUpdate = vestorly.GroupInput()
groupUpdate.name = "MY UPDATED NAMEadfgsdf"
groupUpdate._id = myID
response = api.update_group_by_id(vestorly_auth=auth, id=myID, group=groupUpdate)
attrs = vars(response.group)
print "\n"
for item in attrs.items():
    print item

########## /groups/{id} DELETE
deletedGroup = api.delete_group(vestorly_auth=auth, id=myID)
attrs = vars(deletedGroup.group)
print "\n"
for item in attrs.items():
    print item

print "\nAll GroupsAPI tests have passed!"
print "\n" + ("#" * 50) + "\n"

############################## MembersApi Tests ################################ 
print "\nMembersApi Tests\n"
api = vestorly.MembersApi(api_client=client)

########## /members GET
response = api.find_members(vestorly_auth=auth)

########## /members/{id} GET
for member in response.members:
    print "\n"
    response2 = api.find_member_by_id(vestorly_auth=auth, id=member._id)
    attrs = vars(response2.member)
    for item in attrs.items():
        print item

########## /members/ POST
memberInput = vestorly.Member()
memberInput.email = "gmail@gmail.com"
memberInput.first_name = "Gmail"
memberInput.last_name = "Last"
##attrs = vars(memberInput)
##for item in attrs.items():
##    print item
    
response = api.create_member(vestorly_auth=auth, member=memberInput)
myID = response.member._id
print response

########## /members/{id} PUT
memberInput.email = "another@email.com" + str(time.time())
response = api.update_member_by_id(vestorly_auth=auth, id=myID, member=memberInput)
attrs = vars(response.member)
for item in attrs.items():
    print item

print "\nAll MembersApi tests have passed!\n"
print "\n" + ("#" * 50) + "\n"

############################## MemberEventsApi Tests ################################ 
print "\nMemberEventsApi Tests\n"
api = vestorly.MembereventsApi(api_client=client)

########## /memberevents GET
response = api.find_member_events(vestorly_auth=auth)
for memberevent in response.member_events:
    print "\n"
    attrs = vars(memberevent)
    for item in attrs.items():
        print item

print "\nAll MemberEventsApi tests have passed!\n"
print "\n" + ("#" * 50) + "\n"

############################## MemberReportsApi Tests ################################ 
print "\nMemberReports Tests\n"
api = vestorly.MemberreportsApi(api_client=client)

########## /memberreports GET
response = api.find_member_reports(vestorly_auth=auth)
for memberreport in response.member_reports:
    print "\n"
    attrs = vars(memberreport)
    for item in attrs.items():
        print item

print "\nAll MemberReportsApi tests have passed!\n"
print "\n" + ("#" * 50) + "\n"

