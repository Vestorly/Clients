package io.swagger.api;

import io.swagger.model.*;

import com.wordnik.swagger.annotations.ApiParam;

import com.sun.jersey.multipart.FormDataParam;

import io.swagger.model.Articles;
import io.swagger.model.Article;

import java.util.List;
import io.swagger.api.NotFoundException;

import java.io.InputStream;

import com.sun.jersey.core.header.FormDataContentDisposition;
import com.sun.jersey.multipart.FormDataParam;

import javax.ws.rs.core.Response;
import javax.ws.rs.*;

@Path("/articles")
@com.wordnik.swagger.annotations.Api(value = "/articles", description = "the articles API")
public class ArticlesApi {
  
  @GET
  
  
  
  @com.wordnik.swagger.annotations.ApiOperation(value = "", notes = "Returns all articles", response = Articles.class)
  @com.wordnik.swagger.annotations.ApiResponses(value = { 
    @com.wordnik.swagger.annotations.ApiResponse(code = 200, message = "Response") })

  public Response findArticles(@ApiParam(value = "Vestorly Auth Token",required=true) @QueryParam("vestorly-auth") String vestorlyAuth,
    @ApiParam(value = "Limit on the number of articles to return") @QueryParam("limit") Integer limit,
    @ApiParam(value = "Search query parameter") @QueryParam("text_query") String textQuery,
    @ApiParam(value = "Direction of sort (used with sort_by parameter)") @QueryParam("sort_direction") String sortDirection,
    @ApiParam(value = "Field on model to sort by") @QueryParam("sort_by") String sortBy)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }

  
  @GET
  @Path("/{id}")
  
  
  @com.wordnik.swagger.annotations.ApiOperation(value = "", notes = "Returns a single article", response = Article.class)
  @com.wordnik.swagger.annotations.ApiResponses(value = { 
    @com.wordnik.swagger.annotations.ApiResponse(code = 200, message = "Article response") })

  public Response findArticleByID(@ApiParam(value = "Article Id to fetch",required=true ) @PathParam("id") String id)
      throws NotFoundException {
      // do some magic!
      return Response.ok().entity(new ApiResponseMessage(ApiResponseMessage.OK, "magic!")).build();
  }

  
}
