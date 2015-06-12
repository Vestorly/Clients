require 'vestorly'
require 'pp'

puts "\nStart of tests\n"
api = Vestorly::SessionsApi

# POST
response = api.login("EMAIL", "PASSWORD")
auth = response.vestorly_auth
current_id = response.current_user._id
pp response

puts "\nLogin Successful!\n"
puts "#" * 50

##########################################################################
puts "\nStart of AdvisorsApi tests\n"
api = Vestorly::AdvisorsApi

# GET{id}
response = api.find_advisor_by_id(auth, current_id)
pp response

puts "\nAll AdvisorsApi tests have passed!\n"
puts "#" * 50

##########################################################################

puts "\nStart of PostsApi tests\n"
api = Vestorly::PostsApi

# GET
response = api.find_posts(auth)

# GET{id}
for post in response.posts do
	response2 = api.get_post_by_id(auth, post._id)
	puts "\n"
	pp response2
end

# POST
postInput = Vestorly::Post.new
postInput.title = "MY TITLE"
postInput.post_date = "MY POST DATE"
response = api.create_post(auth, postInput)
myID = response.post._id

pp response

# PUT
postUpdate = Vestorly::Post.new
postUpdate.title = "MY UPDATED TITLE"
postUpdate.post_date = "MY UPDATE POST DATE"
response = api.update_post_by_id(auth, myID, postUpdate)

pp response

puts "\nAll PostsApi tests have passed!\n"
puts "#" * 50

##########################################################################
puts "\nStart of ArticlesApi tests\n"
api = Vestorly::ArticlesApi

# GET
response = api.find_articles(auth)

# GET{id}
for article in response.articles do
	response2 = api.find_article_by_id(auth, article._id)
	puts "\n"
	pp response2
end

puts "\nAll ArticlesApi tests have passed!\n"
puts "#" * 50

##########################################################################

puts "\nStart of SourcesApi tests\n"
api = Vestorly::SourcesApi

# GET
response = api.find_sources(auth)

# GET{id}
for source in response.sources do
	response2 = api.get_source_by_id(auth, source._id)
	puts "\n"
	pp response2
end

# POST
sourceInput = Vestorly::SourceInput.new
sourceInput.name = "MY NAME" + Time.now.to_s
sourceInput.rss_publisher = "MY RSS PUBLISHER" + Time.now.to_s
sourceInput.url = "MY URL" + Time.now.to_s

response = api.create_source(auth, sourceInput)
myID = response.source._id

pp response

# PUT
sourceUpdate = Vestorly::SourceInput.new
sourceUpdate.name = "MY UPDATED NAME" + Time.now.to_s
sourceUpdate.rss_publisher = "MY UPDATE RSS PUBLISHER" + Time.now.to_s
sourceUpdate.url = "MY UPDATED URL" + Time.now.to_s
response = api.update_source_by_id(auth, myID, sourceUpdate)

pp response

puts "\nAll SourcesApi tests have passed!\n"
puts "#" * 50

##########################################################################

puts "\nStart of NewslettersApi tests\n"
api = Vestorly::NewslettersApi

# GET
response = api.find_newsletters(auth)

# GET{id}
for newsletter in response.newsletters do
	response2 = api.get_newsletter_by_id(auth, newsletter._id)
	puts "\n"
	pp response2
end

# PUT
newsletterUpdate = Vestorly::NewsletterInput.new
newsletterUpdate.click_count = 14

response = api.update_newsletter_by_id(auth, "ID", newsletterUpdate)

pp response

puts "\nAll NewslettersApi tests have passed!\n"
puts "#" * 50

##########################################################################
puts "\nStart of NewsletterSettingsApi tests\n"
api = Vestorly::NewslettersettingsApi

# GET
response = api.find_newsletter_settings(auth)

# GET{id}
for newslettersetting in response.newsletter_settings do
	response2 = api.find_newsletter_settings_by_id(newslettersetting._id, auth)
	puts "\n"
	pp response2
end

# PUT
newsletterSettingsUpdate = Vestorly::NewsletterSettingsInput.new
newsletterSettingsUpdate.newsletter_setting = api.find_newsletter_settings_by_id("ID", auth).newsletter_setting

response = api.update_newsletter_settings_by_id("ID", auth, newsletterSettingsUpdate)

pp response

puts "\nAll NewsletterSettingsApi tests have passed!\n"
puts "#" * 50

##########################################################################
puts "\nStart of EventsApi tests\n"
api = Vestorly::EventsApi

# GET
response = api.find_events(auth)

# GET{id}
for event in response.events do
	response2 = api.find_event_by_id(event._id, auth)
	puts "\n"
	pp response2
end

# POST
eventInput = Vestorly::EventInput.new
response = api.create_event(auth, eventInput)
pp response

puts "\nAll EventsApi tests have passed!\n"
puts "#" * 50

##########################################################################
puts "\nStart of GroupsApi tests\n"
api = Vestorly::GroupsApi

# GET
response = api.find_groups(auth)

# GET{id}
for group in response.groups do
	response2 = api.find_group_by_id(auth, group._id)
	puts "\n"
	pp response2
end

# POST
groupInput = Vestorly::GroupInput.new
groupInput.name = "MY NAMEasdfdasdfasdf"

response = api.create_group(auth, groupInput)
myID = response.group._id

pp response

# PUT
groupUpdate = Vestorly::GroupInput.new
groupUpdate.name = "MY UPDATED NAMEadsfasdfa"
groupUpdate._id = myID
response = api.update_group_by_id(auth, myID, groupUpdate)

pp response

# DELETE
deletedGroup = api.delete_group(auth, myID)

pp deletedGroup

puts "\nAll GroupsApi tests have passed!\n"
puts "#" * 50

##########################################################################
puts "\nStart of MembersApi tests\n"
api = Vestorly::MembersApi

# GET
response = api.find_members(auth)

# GET{id}
for member in response.members do
	response2 = api.find_member_by_id(member._id, auth)
	puts "\n"
	pp response2
end

# POST
memberInput = Vestorly::Member.new
memberInput.email = "MY EMAIL" + Time.now.to_s
memberInput.first_name = "MY FIRST NAME" + Time.now.to_s
memberInput.last_name = "MY LAST NAME" + Time.now.to_s

response = api.create_member(auth, memberInput)
myID = response.member._id

pp response

# PUT
memberInput.email = "MY EMAIL" + Time.now.to_s
memberInput.first_name = "MY FIRST NAME" + Time.now.to_s
memberInput.last_name = "MY LAST NAME" + Time.now.to_s
response = api.update_member_by_id(myID, auth, memberInput)

pp response

puts "\nAll MembersApi tests have passed!\n"
puts "#" * 50

##########################################################################
puts "\nStart of MemberEventsApi tests\n"
api = Vestorly::MembereventsApi

# GET
response = api.find_member_events(auth)
pp response

puts "\nAll MemberEventsApi tests have passed!\n"
puts "#" * 50
##########################################################################
puts "\nStart of MemberReportsApi tests\n"
api = Vestorly::MemberreportsApi

# GET
response = api.find_member_reports(auth)
pp response

puts "\nAll MemberReportsApi tests have passed!\n"
puts "#" * 50
##########################################################################
api = Vestorly::SessionsApi

# DELETE
response = api.logout(vestorly_auth=auth, id=current_id)
pp response

puts "\nLogout Successful!\n"
puts "\nAll tests have passed!\n"
puts "#" * 50

##########################################################################
