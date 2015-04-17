import com.wordnik.client.api._
import akka.actor.ActorSystem
import com.wordnik.swagger.app.{ResourcesApp, SwaggerApp}
import javax.servlet.ServletContext
import org.scalatra.LifeCycle

class ScalatraBootstrap extends LifeCycle {
  implicit val swagger = new SwaggerApp

  override def init(context: ServletContext) {
    implicit val system = ActorSystem("appActorSystem")
    try {
      context mount (new NewsletttersApi, "/Newslettters/*")
      context mount (new ArticlesApi, "/Articles/*")
      context mount (new ArticleApi, "/Article/*")
      context mount (new PostsApi, "/Posts/*")
      context mount (new AdvisorApi, "/Advisor/*")
      context mount (new SourcesApi, "/Sources/*")
      context mount (new SessionApi, "/Session/*")
      
      context mount (new ResourcesApp, "/api-docs/*")
    } catch {
      case e: Throwable => e.printStackTrace()
    }
  }
}