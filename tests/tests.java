
import vestorly.client.*;
import vestorly.client.api.*;
import vestorly.client.model.*;
import vestorly.client.model.EventInput.TypeEnum;

public class tests {

	public static void main(String[] args) throws ApiException {
		String username = "EMAIL";
		String password = "PASSWORD";
		
		// Login (/sessions/POST)
		SessionsApi sessionsApi = new SessionsApi();
		Session mySession = sessionsApi.login(username, password);
		//System.out.println(mySession);
		String auth = mySession.getVestorlyAuth();
		System.out.println(auth);
		advisorsApiTest(username, password, auth, mySession);
		articlesApiTest(username, password, auth);
		eventsApiTest(username, password, auth);
		groupsApiTest(username, password, auth);		
		membereventsApiTest(username, password, auth);
		memberreportsApiTest(username, password, auth);
		newslettersApiTest(username, password, auth);
		postsApiTest(username, password, auth);
		sessionsApiTest(username, password, auth, mySession);
		sourcesApiTest(username, password, auth);
		newslettersettingsApiTest(username, password, auth);
		membersApiTest(username, password, auth);
		
		System.out.println("ALL TESTS HAVE PASSED!!");
	}
	

	
	public static void advisorsApiTest(String username, String password, String auth, Session mySession) throws ApiException {
		AdvisorsApi advisorsApi = new AdvisorsApi();

		// GET{ID}
		String myID = mySession.getCurrentUser().getId();
		System.out.println("GET{ID}: " + advisorsApi.findAdvisorByID(auth, myID));
	}
	
	public static void postsApiTest(String username, String password, String auth) throws ApiException {
		System.out.println("\n\nSTART OF POSTSAPI TEST\n\n");
		PostsApi postsApi = new PostsApi();
		
		// GET
		Posts myPosts = postsApi.findPosts(auth, null, null, null);
		System.out.println("GET: " + myPosts);
		
		// GET{ID}
		for (Post post : myPosts.getPosts()) {
			System.out.println("GET{ID} : " + postsApi.getPostByID(auth, post.getId()));
		}
		
		// POST
		PostInput postInput = new PostInput();
		postInput.setTitle("My title");
		postInput.setPostDate("random");
		Postresponse myCreatedPost = postsApi.createPost(auth, postInput);
		System.out.println("POST: " + myCreatedPost);
		
		// PUT
		Post myPost = new Post();
		myPost.setTitle("Updated!!!");
		myPost.setPostDate("UPDATED!!!!");
		String postID = myCreatedPost.getPost().getId();
		System.out.println("PUT: " + postsApi.updatePostByID(auth, postID, myPost));
		
		System.out.println("\n\nEND OF POSTSAPI TEST\n\n");
	}
	
	public static void sessionsApiTest(String username, String password, String auth, Session mySession) throws ApiException {
		System.out.println("\n\nSTART OF SESSIONSAPI TEST\n\n");
		SessionsApi sessionsApi = new SessionsApi();
		
		// POST
		System.out.println("POST: " + mySession);
		
		// DELETE
		System.out.println("DELETE{ID}: " + sessionsApi.logout(auth, mySession.getCurrentUser().getId()));
	}
	
	public static void articlesApiTest(String username, String password, String auth) throws ApiException {
		System.out.println("\n\nSTART OF ARTICLESAPI TEST\n\n");
		ArticlesApi articlesApi = new ArticlesApi();
		
		// GET
		Articles myArticles = articlesApi.findArticles(auth, null, null, null, null);
		System.out.println("GET: " + myArticles.getArticles().toString());
		
		// GET{ID}
		for (Article article : myArticles.getArticles()) {
			Article myArticle = articlesApi.findArticleByID(auth, article.getId()).getArticle();
			System.out.println("GET{ID}: " + myArticle.toString());
		}
		System.out.println("\n\nEND OF ARTICLESAPI TEST\n\n");
	}
	
	public static void sourcesApiTest(String username, String password, String auth) throws ApiException {
		System.out.println("\n\nSTART OF SOURCESAPI TEST\n\n");
		
		// GET
		SourcesApi sourcesApi = new SourcesApi();
		Sources mySources = sourcesApi.findSources(auth);
		System.out.println("GET: " + mySources);
		
		// GET{ID}
		for (Source source : mySources.getSources()) {
			System.out.println(source.getId());
			System.out.println("GET{ID}: " + sourcesApi.getSourceByID(auth, source.getId()));
		}
		
		// POST
		SourceInput source = new SourceInput();
		source.setName("NAME" + System.currentTimeMillis());
		source.setRssPublisher("RSS PUBLISHER" + System.currentTimeMillis());
		source.setUrl("URL" + System.currentTimeMillis());
		Sourceresponse createdPost = sourcesApi.createSource(auth, source);
		System.out.println("POST: " + createdPost);
		
		// PUT
		source.setName("NAME" + System.currentTimeMillis());
		source.setRssPublisher("RSS PUBLISHER" + System.currentTimeMillis());
		source.setUrl("URL" + System.currentTimeMillis());
		System.out.println("PUT: " + sourcesApi.updateSourceByID(auth, createdPost.getSource().getId(), source));
		System.out.println("\n\nEND OF SOURCESAPI TEST\n\n");
	}
	
	public static void newslettersApiTest(String username, String password, String auth) throws ApiException {
		System.out.println("\n\nSTART OF NEWSLETTERSAPI TEST\n\n");
		NewslettersApi newslettersApi = new NewslettersApi();
		
		// GET
		Newsletters myNewsletters = newslettersApi.findNewsletters(auth);
		System.out.println("GET: " + myNewsletters);
		
		// GET{ID}
		for (Newsletter newsletter : myNewsletters.getNewsletters()) {
			Newsletterresponse nlResponse = newslettersApi.getNewsletterByID(auth, newsletter.getId());
			System.out.println("GET{ID}: " + nlResponse);
		}
		
		// TODO Add POST Test and switch the PUT test from a hardcoded id to the one created in POST
		
		// PUT
		NewsletterInput myNLINPUT = new NewsletterInput();
		myNLINPUT.setClickCount((long) 5);
		// AN ERROR MIGHT OCCUR HERE CONSIDERING THIS ID IS HARDCODED;
		// IF THAT HAPPENS, COPY PASTE A DIFFERENT ID FROM THE PRINTED ONES IN THE ABOVE TEST
		System.out.println("PUT: " + newslettersApi.updateNewsletterByID(auth, "ID", myNLINPUT));
		System.out.println("\n\nEND OF NEWSLETTERSAPI TEST\n\n");
		
	}
	
	public static void newslettersettingsApiTest(String username, String password, String auth) throws ApiException {
		System.out.println("\n\nSTART OF NEWSLETTERSETTINGSAPI TEST\n\n");
		NewslettersettingsApi newslettersettingsApi = new NewslettersettingsApi();
		
		
		// GET
		NewsletterSettings myNewslettersettings = newslettersettingsApi.findNewsletterSettings(auth);
		System.out.println("GET: " + myNewslettersettings);
		
		// GET{ID}
		for (NewsletterSetting newsletterSetting : myNewslettersettings.getNewsletterSettings()) {
			Newslettersettingresponse myNLSettings = newslettersettingsApi.findNewsletterSettingsByID(newsletterSetting.getId(), auth);
			System.out.println("GET{ID}: " + myNLSettings);
		}
		
		
		// PUT
		NewsletterSettingsInput myInput = new NewsletterSettingsInput();
		myInput.setNewsletterSetting(newslettersettingsApi.findNewsletterSettingsByID("ID", auth).getNewsletterSetting());
		//myInput.getNewsletterSetting().setId("ID");
		//System.out.println(myInput);
		Newslettersettingresponse updatedNLSettings = newslettersettingsApi.updateNewsletterSettingsByID("ID", auth, myInput);
		System.out.println("PUT: " + updatedNLSettings);
		System.out.println("\n\nEND OF NEWSLETTERSETTINGSAPI TEST\n\n");
	}
	
	public static void eventsApiTest(String username, String password, String auth) throws ApiException {		
		// NB PUT REMOVED FROM API
		System.out.println("\n\nSTART OF EVENTSAPI TEST\n\n");

		EventsApi eventsApi = new EventsApi();
		
		// TEST GET
		Events myEvents = eventsApi.findEvents(auth);
		System.out.println("GET: " + myEvents.toString());

		// TEST GET{ID}
		for (Event event : myEvents.getEvents()) {
				System.out.println("GET{ID} : " + eventsApi.findEventByID(event.getId(), auth).toString());
		}
		
		// TEST POST
		
		EventInput eventInput = new EventInput();
		eventInput.setOriginalUrl("");
		eventInput.setOriginatorEmail("");
		eventInput.setSubjectEmail("");
		eventInput.setType(EventInput.TypeEnum.bounce);
		
		Eventcreateresponse response = eventsApi.createEvent(auth, eventInput);
		System.out.println("POST: " + response);
		System.out.println("\n\nEND OF EVENTSAPI TEST\n\n");
		

	}
	
	public static void groupsApiTest(String username, String password, String auth) throws ApiException {
		System.out.println("\n\nSTART OF GROUPSAPI TEST\n\n");
		GroupsApi groupsApi = new GroupsApi();
		
		// GET
		Groups myGroups = groupsApi.findGroups(auth);
		System.out.println("GET: " + myGroups);
		
		// GET{ID}
		for (Group group : myGroups.getGroups()) {
			Groupresponse newGroup = groupsApi.findGroupByID(auth, group.getId());
			System.out.println("GET{ID}: " + newGroup);
		} 
		
		// POST
		GroupInput groupInput = new GroupInput();
		groupInput.setName("NAME" + System.currentTimeMillis());
		Groupresponse createdGroup = groupsApi.createGroup(auth, groupInput);
		System.out.println("POST: " + createdGroup);
		
		// PUT
		groupInput.setName("NAME" + System.currentTimeMillis());
		groupInput.setId(createdGroup.getGroup().getId());
		Groupresponse updatedGroup = groupsApi.updateGroupById(auth, createdGroup.getGroup().getId(), groupInput);
		System.out.println("PUT: " + updatedGroup);
		
		// DELETE
		Groupresponse deletedGroup = groupsApi.deleteGroup(auth, updatedGroup.getGroup().getId());
		System.out.println("DELETE: " + deletedGroup);
		 
		
		System.out.println("\n\nEND OF GROUPSAPI TEST\n\n");
	}
		
	public static void membersApiTest(String username, String password, String auth) throws ApiException {
		MembersApi membersApi = new MembersApi();
		System.out.println("\n\nSTART OF MEMBERSAPI TEST\n\n");
		
		// GET
		Members members = membersApi.findMembers(auth);
		System.out.println("GET: " + members.toString());
		
		
		// GET{ID}
		for (Member member : members.getMembers()) {
			Memberresponse getIdMember = membersApi.findMemberByID(member.getId(), auth);
			System.out.println("GET{ID}: " + getIdMember.toString());
		}
		
		// POST
		Member member = new Member();
		member.setEmail("fahim.fadl@gmail.com");
		Memberresponse createdMember = membersApi.createMember(auth, member);
		System.out.println("POST: " + createdMember.toString());
		
		// PUT{ID}
		member.setFirstName("Fahim");
		System.out.println("PUT: " + membersApi.updateMemberByID(createdMember.getMember().getId(), auth, member).toString());

		System.out.println("\n\nEND OF MEMBERSAPI TEST\n\n");

	}
	
	public static void membereventsApiTest(String username, String password, String auth) throws ApiException {
		System.out.println("\n\nSTART OF MEMBEREVENTSAPI TEST\n\n");
		MembereventsApi membereventsApi = new MembereventsApi();
		
		// GET
		MemberEvents memberEvents = membereventsApi.findMemberEvents(auth);
		System.out.println("GET: " + memberEvents.getMemberEvents().toString());
		System.out.println("\n\nEND OF MEMBEREVENTSAPI TEST\n\n");
	}
	
	public static void memberreportsApiTest(String username, String password, String auth) throws ApiException {
		System.out.println("\n\nSTART OF MEMBERREPORTSAPI TEST\n\n");
		MemberreportsApi memberreportsApi = new MemberreportsApi();
		
		// GET
		MemberReports memberReports = memberreportsApi.findMemberReports(auth);
		System.out.println("GET: " + memberReports.getMemberReports().toString());
		System.out.println("\n\nEND OF MEMBERREPORTSAPI TEST\n\n");
	}
}
