using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Testing
{
    class Test
    {
        static long milliseconds = DateTime.Now.Ticks / TimeSpan.TicksPerMillisecond;
        static String currentTime = milliseconds.ToString();

        static void Main(string[] args)
        {
            String username = "USERNAME";
            String password = "PASSWORD";
            vestorly.api.SessionsApi sessionsApi = new vestorly.api.SessionsApi();
            vestorly.model.Session response = sessionsApi.Login(username, password);
            System.Diagnostics.Debug.WriteLine("MY RESPONSE " + response);
            String auth = response.vestorlyAuth;
            System.Diagnostics.Debug.WriteLine(auth);

            advisorsApiTest(username, password, auth, response);
            postsApiTest(username, password, auth);
            articlesApiTest(username, password, auth);
            sourcesApiTest(username, password, auth);
            newslettersApiTest(username, password, auth);
            newslettersettingsApiTest(username, password, auth);
            eventsApiTest(username, password, auth);
            groupsApiTest(username, password, auth);
            membersApiTest(username, password, auth);
            membereventsApiTest(username, password, auth);
            memberreportsApiTest(username, password, auth);
            sessionsApiTest(username, password, auth, response);
        }

        public static void advisorsApiTest(String username, String password, String auth, vestorly.model.Session mySession)
        {
            vestorly.api.AdvisorsApi advisorsApi = new vestorly.api.AdvisorsApi();

            // GET{ID}
            String myID = mySession.currentUser.id;
            System.Diagnostics.Debug.WriteLine("GET{ID}: " + advisorsApi.FindAdvisorByID(auth, myID));
            System.Diagnostics.Debug.WriteLine("All AdvisorsApi Tests have passed!");
        }

        public static void postsApiTest(String username, String password, String auth)
        {
            System.Diagnostics.Debug.WriteLine("\n\nSTART OF POSTSAPI TEST\n\n");
            vestorly.api.PostsApi postsApi = new vestorly.api.PostsApi();

            // GET
            vestorly.model.Posts myPosts = postsApi.FindPosts(auth, null, null, null);

            // GET{ID}
            foreach (vestorly.model.Post post in myPosts.posts)
            {
                System.Diagnostics.Debug.WriteLine("GET{ID} : " + postsApi.GetPostByID(auth, post.id));
            }

            // Post
            vestorly.model.PostInput postInput = new vestorly.model.PostInput();
            postInput.title = "My title" + currentTime;
            postInput.postDate = "random" + currentTime;
            vestorly.model.Post mycreatedPost = postsApi.CreatePost(auth, postInput).post;
            System.Diagnostics.Debug.WriteLine("POST: " + mycreatedPost);

            // PUT
            vestorly.model.Post myPost = new vestorly.model.Post();
            myPost.title = ("updated!!!");
            myPost.postDate = ("UPDATED!!!!");
            String postID = mycreatedPost.id;
            System.Diagnostics.Debug.WriteLine("PUT: " + postsApi.UpdatePostByID(auth, postID, myPost));
            System.Diagnostics.Debug.WriteLine("\n\nEND OF POSTSAPI TEST\n\n");
        }

        public static void sessionsApiTest(String username, String password, String auth, vestorly.model.Session mySession)
        {
            System.Diagnostics.Debug.WriteLine("\n\nSTART OF SESSIONSAPI TEST\n\n");
            vestorly.api.SessionsApi sessionsApi = new vestorly.api.SessionsApi();

            // POST
            System.Diagnostics.Debug.WriteLine("POST: " + mySession);

            // DELETE
            System.Diagnostics.Debug.WriteLine("DELETE{ID}: " + sessionsApi.Logout(auth, mySession.currentUser.id));

            System.Diagnostics.Debug.WriteLine("All SessionsApi Tests have passed!");
        }

        public static void articlesApiTest(String username, String password, String auth)
        {
            System.Diagnostics.Debug.WriteLine("\n\nSTART OF vestorly.model.ArticlesApi TEST\n\n");
            vestorly.api.ArticlesApi articlesApi = new vestorly.api.ArticlesApi();

            // GET
            vestorly.model.Articles myArticles = articlesApi.FindArticles(auth, null, null, null, null);
            System.Diagnostics.Debug.WriteLine("GET: " + myArticles.articles);

            System.Diagnostics.Debug.WriteLine(myArticles.articles.Count);
            // GET{ID}
            foreach (vestorly.model.Article article in myArticles.articles)
            {
                vestorly.model.Article myArticle = articlesApi.FindArticleByID(auth, article.id).article;
                System.Diagnostics.Debug.WriteLine("GET{ID}: " + myArticle.ToString());
            }

            System.Diagnostics.Debug.WriteLine("\n\nEND OF ArticlesApi TEST\n\n");
        }

        public static void sourcesApiTest(String username, String password, String auth)
        {
            System.Diagnostics.Debug.WriteLine("\n\nSTART OF SOURCESAPI TEST\n\n");
            vestorly.api.SourcesApi sourcesApi = new vestorly.api.SourcesApi();

            // GET
            vestorly.model.Sources mySources = sourcesApi.FindSources(auth);
            System.Diagnostics.Debug.WriteLine("GET: " + mySources);

            // GET{ID}
            foreach (vestorly.model.Source source in mySources.sources)
            {
                System.Diagnostics.Debug.WriteLine(source.id);
                System.Diagnostics.Debug.WriteLine("GET{ID}: " + sourcesApi.GetSourceByID(auth, source.id));
            }

            //// POST
            vestorly.model.SourceInput sourceInput = new vestorly.model.SourceInput();
            sourceInput.name = ("asdfasdf" + currentTime);
            sourceInput.rssPublisher = ("RSS asdfadfdf" + currentTime);
            sourceInput.url = ("asdfdfsdfasfs" + currentTime);
            System.Diagnostics.Debug.WriteLine(sourceInput);
            vestorly.model.Sourceresponse createdPost = sourcesApi.CreateSource(auth, sourceInput);
            System.Diagnostics.Debug.WriteLine("POST: " + createdPost);

            // PUT
            sourceInput.name = ("NAME" + currentTime);
            sourceInput.rssPublisher = ("RSS PUBLISHER" + currentTime);
            sourceInput.url = ("URL" + currentTime);
            System.Diagnostics.Debug.WriteLine("PUT: " + sourcesApi.UpdateSourceByID(auth, "537507517b86a6000200044a", sourceInput));
            System.Diagnostics.Debug.WriteLine("\n\nEND OF SOURCESAPI TEST\n\n");
        }

        public static void newslettersApiTest(String username, String password, String auth)
        {
            System.Diagnostics.Debug.WriteLine("\n\nSTART OF new vestorly.api.SLETTERSAPI TEST\n\n");
            vestorly.api.NewslettersApi newslettersApi = new vestorly.api.NewslettersApi();

            // GET
            vestorly.model.Newsletters myNewsletters = newslettersApi.FindNewsletters(auth);
            System.Diagnostics.Debug.WriteLine("GET: " + myNewsletters);

            // GET{ID}
            foreach (vestorly.model.Newsletter newsletter in myNewsletters.newsletters)
            {
                vestorly.model.Newsletterresponse nlResponse = newslettersApi.GetNewsletterByID(auth, newsletter.id);
                System.Diagnostics.Debug.WriteLine("GET{ID}: " + nlResponse);
            }

            // TODO Add vestorly.model.Post Test and switch the PUT test from a hardcoded id to the one created in vestorly.model.Post

            // PUT
            vestorly.model.NewsletterInput myNLINPUT = new vestorly.model.NewsletterInput();
            myNLINPUT.clickCount = ((long)35);
            myNLINPUT.totalClickCount = (long)4;
            // AN ERROR MIGHT OCCUR HERE CONSIDERING THIS ID IS HARDCODED;
            // IF THAT HAPPENS, COPY PASTE A DIFFERENT ID FROM THE PRINTED ONES IN THE ABOVE TEST
            System.Diagnostics.Debug.WriteLine(myNLINPUT);
            vestorly.model.Newsletterresponse myNLResponse = newslettersApi.UpdateNewsletterByID(auth, "5566a0e02adb5db61b00017c", myNLINPUT);
            System.Diagnostics.Debug.WriteLine("PUT: " + myNLResponse.newsletter);
            System.Diagnostics.Debug.WriteLine("\n\nEND OF NEWSLETTERSAPI TEST\n\n");

        }

        public static void newslettersettingsApiTest(String username, String password, String auth)
        {
            System.Diagnostics.Debug.WriteLine("\n\nSTART OF new vestorly.api.SLETTERSETTINGSAPI TEST\n\n");
            vestorly.api.NewslettersettingsApi newslettersettingsApi = new vestorly.api.NewslettersettingsApi();

            // GET
            vestorly.model.NewsletterSettings myNewslettersettings = newslettersettingsApi.FindNewsletterSettings(auth);
            System.Diagnostics.Debug.WriteLine("GET: " + myNewslettersettings);

            // GET{ID}
            foreach (vestorly.model.NewsletterSetting newsletterSetting in myNewslettersettings.newsletterSettings) {
                vestorly.model.Newslettersettingresponse myNLSettings = newslettersettingsApi.FindNewsletterSettingsByID(newsletterSetting.id, auth);
                System.Diagnostics.Debug.WriteLine("GET{ID}: " + myNLSettings);
            }


            // PUT
            vestorly.model.NewsletterSettingsInput myInput = new vestorly.model.NewsletterSettingsInput();
            myInput.newsletterSetting = (newslettersettingsApi.FindNewsletterSettingsByID("557a08c5e7af0eda95000204", auth).newsletterSetting);
            //myInput.getnew vestorly.api.sletterSetting().setId("532b686ffab10e0002000005");
            //System.Diagnostics.Debug.WriteLine(myInput);
            vestorly.model.Newslettersettingresponse updatedNLSettings = newslettersettingsApi.UpdateNewsletterSettingsByID("557a08c5e7af0eda95000204", auth, myInput);
            System.Diagnostics.Debug.WriteLine("PUT: " + updatedNLSettings);
            System.Diagnostics.Debug.WriteLine("\n\nEND OF new vestorly.api.SLETTERSETTINGSAPI TEST\n\n");
        }

        public static void eventsApiTest(String username, String password, String auth)
        {
            // NB PUT REMOVED FROM API
            System.Diagnostics.Debug.WriteLine("\n\nSTART OF EVENTSAPI TEST\n\n");

            vestorly.api.EventsApi eventsApi = new vestorly.api.EventsApi();

            // TEST GET
            vestorly.model.Events myEvents = eventsApi.FindEvents(auth);
            System.Diagnostics.Debug.WriteLine("GET: " + myEvents);

            // TEST GET{ID}
            foreach (vestorly.model.Event Event in myEvents.events) {
                System.Diagnostics.Debug.WriteLine("GET{ID} : " + eventsApi.FindEventByID(Event.id, auth));
            }

            // TEST Post
            vestorly.model.EventInput eventInput = new vestorly.model.EventInput();
            eventInput.originalUrl = ("");
            eventInput.originatorEmail = ("");
            eventInput.subjectEmail = ("");
            eventInput.type = "bounce";

            vestorly.model.Eventcreateresponse response = eventsApi.CreateEvent(auth, eventInput);
            System.Diagnostics.Debug.WriteLine("Post: " + response);
            System.Diagnostics.Debug.WriteLine("\n\nEND OF EVENTSAPI TEST\n\n");
        }

        public static void groupsApiTest(String username, String password, String auth)
        {
            System.Diagnostics.Debug.WriteLine("\n\nSTART OF GROUPSAPI TEST\n\n");
            vestorly.api.GroupsApi groupsApi = new vestorly.api.GroupsApi();

            // GET
            vestorly.model.Groups myGroups = groupsApi.FindGroups(auth);
            System.Diagnostics.Debug.WriteLine("GET: " + myGroups);

            // GET{ID}
            foreach (vestorly.model.Group group in myGroups.groups) {
                vestorly.model.Groupresponse newGroup = groupsApi.FindGroupByID(auth, group.id);
                System.Diagnostics.Debug.WriteLine("GET{ID}: " + newGroup);
            }

            // vestorly.model.Post
            vestorly.model.GroupInput groupInput = new vestorly.model.GroupInput();
            groupInput.name = ("NAME" + currentTime);
            vestorly.model.Groupresponse createdGroup = groupsApi.CreateGroup(auth, groupInput);
            System.Diagnostics.Debug.WriteLine("POST: " + createdGroup);

            // PUT
            groupInput.name = ("NAME" + currentTime);
            groupInput.id = (createdGroup.group.id);
            vestorly.model.Groupresponse updatedGroup = groupsApi.UpdateGroupById(auth, createdGroup.group.id, groupInput);
            System.Diagnostics.Debug.WriteLine("PUT: " + updatedGroup);

            // DELETE
            vestorly.model.Groupresponse deletedGroup = groupsApi.DeleteGroup(auth, updatedGroup.group.id);
            System.Diagnostics.Debug.WriteLine("DELETE: " + deletedGroup);


            System.Diagnostics.Debug.WriteLine("\n\nEND OF GROUPSAPI TEST\n\n");
        }

        public static void membersApiTest(String username, String password, String auth)
        {
            vestorly.api.MembersApi membersApi = new vestorly.api.MembersApi();
            System.Diagnostics.Debug.WriteLine("\n\nSTART OF MEMBERSAPI TEST\n\n");

            // GET
            vestorly.model.Members myMembers = membersApi.FindMembers(auth);
            System.Diagnostics.Debug.WriteLine("GET: " + myMembers);


            // GET{ID}
            foreach (vestorly.model.Member currentMember in myMembers.members) {
                vestorly.model.Memberresponse getIdMember = membersApi.FindMemberByID(currentMember.id, auth);
                System.Diagnostics.Debug.WriteLine("GET{ID}: " + getIdMember);
            }

            // Post
            vestorly.model.Member member = new vestorly.model.Member();
            member.email = (currentTime + "fahim.fadl@gmail.com");
            vestorly.model.Memberresponse createdMember = membersApi.CreateMember(auth, member);
            System.Diagnostics.Debug.WriteLine("POST: " + createdMember);

            // PUT{ID}
            member.firstName = ("Fahim");
            System.Diagnostics.Debug.WriteLine("PUT: " + membersApi.UpdateMemberByID(createdMember.member.id, auth, member));

            System.Diagnostics.Debug.WriteLine("\n\nEND OF MEMBERSAPI TEST\n\n");

        }

        public static void membereventsApiTest(String username, String password, String auth)
        {
            System.Diagnostics.Debug.WriteLine("\n\nSTART OF MEMBEREVENTSAPI TEST\n\n");
            vestorly.api.MembereventsApi membereventsApi = new vestorly.api.MembereventsApi();

            // GET
            vestorly.model.MemberEvents memberEvents = membereventsApi.FindMemberEvents(auth);
            foreach(vestorly.model.MemberEvent memberEvent in memberEvents.memberEvents)
            {
                System.Diagnostics.Debug.WriteLine("GET: ");
                System.Diagnostics.Debug.WriteLine(memberEvent);
            }
            System.Diagnostics.Debug.WriteLine("\n\nEND OF MEMBEREVENTSAPI TEST\n\n");
        }

        public static void memberreportsApiTest(String username, String password, String auth)
        {
            System.Diagnostics.Debug.WriteLine("\n\nSTART OF MEMBERREPORTSAPI TEST\n\n");
            vestorly.api.MemberreportsApi memberreportsApi = new vestorly.api.MemberreportsApi();

            // GET
            vestorly.model.MemberReports myMemberReports = memberreportsApi.FindMemberReports(auth);
            foreach (vestorly.model.MemberReport memberReport in myMemberReports.memberReports)
            {
                System.Diagnostics.Debug.WriteLine("GET: ");
                System.Diagnostics.Debug.WriteLine(memberReport);
            }
            System.Diagnostics.Debug.WriteLine("\n\nEND OF MEMBERREPORTSAPI TEST\n\n");
        }

        //public static vestorly.model.Postresponse CreatePost(string VestorlyAuth, vestorly.model.PostInput Post)
        //{
        //    RestSharp.RestClient restClient = new RestSharp.RestClient("https://staging.vestorly.com/api/v2");            
        //    var _request = new RestSharp.RestRequest("/posts", RestSharp.Method.POST);


        //    // verify the required parameter 'VestorlyAuth' is set
        //    if (VestorlyAuth == null) throw new vestorly.client.ApiException(400, "Missing required parameter 'VestorlyAuth' when calling CreatePost");

        //    // verify the required parameter 'Post' is set
        //    if (Post == null) throw new vestorly.client.ApiException(400, "Missing required parameter 'Post' when calling CreatePost");


        //    // add default header, if any
        //    foreach (KeyValuePair<string, string> defaultHeader in vestorly.client.ApiInvoker.GetDefaultHeader())
        //    {
        //        _request.AddHeader(defaultHeader.Key, defaultHeader.Value);
        //    }

        //    _request.AddUrlSegment("format", "json"); // set format to json by default

        //    if (VestorlyAuth != null) _request.AddParameter("vestorly_auth", vestorly.client.ApiInvoker.ParameterToString(VestorlyAuth)); // query parameter
        //    restClient.ClearHandlers();
        //    restClient.AddHandler("application/json", new RestSharp.Deserializers.JsonDeserializer());
        //    _request.AddParameter("application/json", vestorly.client.ApiInvoker.Serialize(Post), RestSharp.ParameterType.RequestBody); // http body (model) parameter


        //    // make the HTTP request
        //    RestSharp.IRestResponse response = restClient.Execute(_request);
        //    if (((int)response.StatusCode) >= 400)
        //    {
        //        throw new vestorly.client.ApiException((int)response.StatusCode, "Error calling CreatePost: " + response.Content);
        //    }
        //    return (vestorly.model.Postresponse)vestorly.client.ApiInvoker.Deserialize(response.Content, typeof(vestorly.model.Postresponse));
        //}
    }
}

