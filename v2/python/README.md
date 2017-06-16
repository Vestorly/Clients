# swagger_client
Vestorly Developers API

This Python package is automatically generated by the [Swagger Codegen](https://github.com/swagger-api/swagger-codegen) project:

- API version: 1.0.0
- Package version: 1.0.0
- Build package: io.swagger.codegen.languages.PythonClientCodegen

## Requirements.

Python 2.7 and 3.4+

## Installation & Usage
### pip install

If the python package is hosted on Github, you can install directly from Github

```sh
pip install git+https://github.com/GIT_USER_ID/GIT_REPO_ID.git
```
(you may need to run `pip` with root permission: `sudo pip install git+https://github.com/GIT_USER_ID/GIT_REPO_ID.git`)

Then import the package:
```python
import swagger_client 
```

### Setuptools

Install via [Setuptools](http://pypi.python.org/pypi/setuptools).

```sh
python setup.py install --user
```
(or `sudo python setup.py install` to install the package for all users)

Then import the package:
```python
import swagger_client
```

## Getting Started

Please follow the [installation procedure](#installation--usage) and then run the following:

```python
from __future__ import print_function
import time
import swagger_client
from swagger_client.rest import ApiException
from pprint import pprint

# Configure OAuth2 access token for authorization: access_token
swagger_client.configuration.access_token = 'YOUR_ACCESS_TOKEN'
# create an instance of the API class
api_instance = swagger_client.AdvisorsApi()
vestorly_auth = 'vestorly_auth_example' # str | Vestorly Auth Token
id = 'id_example' # str | Advisor Id to fetch
access_token = 'access_token_example' # str | OAuth Token (optional)

try:
    api_response = api_instance.find_advisor_by_id(vestorly_auth, id, access_token=access_token)
    pprint(api_response)
except ApiException as e:
    print("Exception when calling AdvisorsApi->find_advisor_by_id: %s\n" % e)

```

## Documentation for API Endpoints

All URIs are relative to *https://staging.vestorly.com/api/v2*

Class | Method | HTTP request | Description
------------ | ------------- | ------------- | -------------
*AdvisorsApi* | [**find_advisor_by_id**](docs/AdvisorsApi.md#find_advisor_by_id) | **GET** /advisors/{id} | 
*ArticlesApi* | [**find_article_by_id**](docs/ArticlesApi.md#find_article_by_id) | **GET** /articles/{id} | 
*ArticlesApi* | [**find_articles**](docs/ArticlesApi.md#find_articles) | **GET** /articles | 
*EventsApi* | [**create_event**](docs/EventsApi.md#create_event) | **POST** /events | 
*EventsApi* | [**find_event_by_id**](docs/EventsApi.md#find_event_by_id) | **GET** /events/{id} | 
*EventsApi* | [**find_events**](docs/EventsApi.md#find_events) | **GET** /events | 
*GroupsApi* | [**create_group**](docs/GroupsApi.md#create_group) | **POST** /groups | 
*GroupsApi* | [**delete_group**](docs/GroupsApi.md#delete_group) | **DELETE** /groups/{id} | 
*GroupsApi* | [**find_group_by_id**](docs/GroupsApi.md#find_group_by_id) | **GET** /groups/{id} | 
*GroupsApi* | [**find_groups**](docs/GroupsApi.md#find_groups) | **GET** /groups | 
*GroupsApi* | [**update_group_by_id**](docs/GroupsApi.md#update_group_by_id) | **PUT** /groups/{id} | 
*MemberEventsApi* | [**find_member_events**](docs/MemberEventsApi.md#find_member_events) | **GET** /member_events | 
*MemberReportsApi* | [**find_member_reports**](docs/MemberReportsApi.md#find_member_reports) | **GET** /member_reports | 
*MembersApi* | [**create_member**](docs/MembersApi.md#create_member) | **POST** /members | 
*MembersApi* | [**find_member_by_id**](docs/MembersApi.md#find_member_by_id) | **GET** /members/{id} | 
*MembersApi* | [**find_members**](docs/MembersApi.md#find_members) | **GET** /members | 
*MembersApi* | [**update_member_by_id**](docs/MembersApi.md#update_member_by_id) | **PUT** /members/{id} | 
*NewsletterSettingsApi* | [**find_newsletter_settings**](docs/NewsletterSettingsApi.md#find_newsletter_settings) | **GET** /newsletter_settings | 
*NewsletterSettingsApi* | [**find_newsletter_settings_by_id**](docs/NewsletterSettingsApi.md#find_newsletter_settings_by_id) | **GET** /newsletter_settings/{id} | 
*NewsletterSettingsApi* | [**update_newsletter_settings_by_id**](docs/NewsletterSettingsApi.md#update_newsletter_settings_by_id) | **PUT** /newsletter_settings/{id} | 
*NewslettersApi* | [**find_newsletters**](docs/NewslettersApi.md#find_newsletters) | **GET** /newsletters | 
*NewslettersApi* | [**get_newsletter_by_id**](docs/NewslettersApi.md#get_newsletter_by_id) | **GET** /newsletters/{id} | 
*NewslettersApi* | [**update_newsletter_by_id**](docs/NewslettersApi.md#update_newsletter_by_id) | **PUT** /newsletters/{id} | 
*PostsApi* | [**create_post**](docs/PostsApi.md#create_post) | **POST** /posts | 
*PostsApi* | [**find_posts**](docs/PostsApi.md#find_posts) | **GET** /posts | 
*PostsApi* | [**get_post_by_id**](docs/PostsApi.md#get_post_by_id) | **GET** /posts/{id} | 
*PostsApi* | [**update_post_by_id**](docs/PostsApi.md#update_post_by_id) | **PUT** /posts/{id} | 
*SessionsApi* | [**login**](docs/SessionsApi.md#login) | **POST** /sessions | 
*SessionsApi* | [**logout**](docs/SessionsApi.md#logout) | **DELETE** /sessions/{id} | 
*SourcesApi* | [**create_source**](docs/SourcesApi.md#create_source) | **POST** /sources | 
*SourcesApi* | [**find_sources**](docs/SourcesApi.md#find_sources) | **GET** /sources | 
*SourcesApi* | [**get_source_by_id**](docs/SourcesApi.md#get_source_by_id) | **GET** /sources/{id} | 
*SourcesApi* | [**update_source_by_id**](docs/SourcesApi.md#update_source_by_id) | **PUT** /sources/{id} | 


## Documentation For Models

 - [Advisor](docs/Advisor.md)
 - [Advisorresponse](docs/Advisorresponse.md)
 - [Advisors](docs/Advisors.md)
 - [Article](docs/Article.md)
 - [Articleresponse](docs/Articleresponse.md)
 - [Articles](docs/Articles.md)
 - [Event](docs/Event.md)
 - [EventContent](docs/EventContent.md)
 - [EventInput](docs/EventInput.md)
 - [Eventcreateresponse](docs/Eventcreateresponse.md)
 - [Eventresponse](docs/Eventresponse.md)
 - [Events](docs/Events.md)
 - [Features](docs/Features.md)
 - [Group](docs/Group.md)
 - [GroupInput](docs/GroupInput.md)
 - [Groupresponse](docs/Groupresponse.md)
 - [Groups](docs/Groups.md)
 - [Member](docs/Member.md)
 - [MemberEvent](docs/MemberEvent.md)
 - [MemberEvents](docs/MemberEvents.md)
 - [MemberReport](docs/MemberReport.md)
 - [MemberReports](docs/MemberReports.md)
 - [Memberresponse](docs/Memberresponse.md)
 - [Members](docs/Members.md)
 - [Meta](docs/Meta.md)
 - [Newsletter](docs/Newsletter.md)
 - [NewsletterInput](docs/NewsletterInput.md)
 - [NewsletterSetting](docs/NewsletterSetting.md)
 - [NewsletterSettings](docs/NewsletterSettings.md)
 - [NewsletterSettingsInput](docs/NewsletterSettingsInput.md)
 - [Newsletterresponse](docs/Newsletterresponse.md)
 - [Newsletters](docs/Newsletters.md)
 - [Newslettersettingresponse](docs/Newslettersettingresponse.md)
 - [OrgSetting](docs/OrgSetting.md)
 - [PersonalSettings](docs/PersonalSettings.md)
 - [Post](docs/Post.md)
 - [PostInput](docs/PostInput.md)
 - [Postrequest](docs/Postrequest.md)
 - [Postresponse](docs/Postresponse.md)
 - [Posts](docs/Posts.md)
 - [Session](docs/Session.md)
 - [SessionLogoutResponse](docs/SessionLogoutResponse.md)
 - [Settings](docs/Settings.md)
 - [Source](docs/Source.md)
 - [SourceInput](docs/SourceInput.md)
 - [Sourceresponse](docs/Sourceresponse.md)
 - [Sources](docs/Sources.md)
 - [TruncatedMember](docs/TruncatedMember.md)
 - [User](docs/User.md)


## Documentation For Authorization


## access_token

- **Type**: OAuth
- **Flow**: implicit
- **Authorization URL**: https://dev.vestorly.com/oauth/authorize
- **Scopes**: 
 - **default**: read and write data to your account


## Author


