require "uri"

module Vestorly
  class PostsApi
    basePath = "https://staging.vestorly.com/api/v2"
    # apiInvoker = APIInvoker

    # 
    # Query all posts
    # @param vestorly_auth Vestorly Auth Token
    # @param [Hash] opts the optional parameters
    # @option opts [string] :text_query Filter post by parameters
    # @option opts [string] :external_url Filter by External URL
    # @option opts [string] :is_published Filter by is_published boolean
    # @return [Posts]
    def self.find_posts(vestorly_auth, opts = {})
      
      # verify the required parameter 'vestorly_auth' is set
      raise "Missing the required parameter 'vestorly_auth' when calling find_posts" if vestorly_auth.nil?
      

      # resource path
      path = "/posts".sub('{format}','json')

      # query parameters
      query_params = {}
      query_params[:'vestorly_auth'] = vestorly_auth
      query_params[:'text_query'] = opts[:'text_query'] if opts[:'text_query']
      query_params[:'external_url'] = opts[:'external_url'] if opts[:'external_url']
      query_params[:'is_published'] = opts[:'is_published'] if opts[:'is_published']

      # header parameters
      header_params = {}

      # HTTP header 'Accept' (if needed)
      _header_accept = []
      _header_accept_result = Swagger::Request.select_header_accept(_header_accept) and header_params['Accept'] = _header_accept_result

      # HTTP header 'Content-Type'
      _header_content_type = []
      header_params['Content-Type'] = Swagger::Request.select_header_content_type(_header_content_type)

      # form parameters
      form_params = {}

      # http body (model)
      post_body = nil
      

      response = Swagger::Request.new(:GET, path, {:params => query_params, :headers => header_params, :form_params => form_params, :body => post_body}).make.body
      obj = Posts.new() and obj.build_from_hash(response)
    end

    # 
    # Create a new post in the Vestorly Platform
    # @param vestorly_auth Vestorly Auth Token
    # @param post Post you want to create
    # @param [Hash] opts the optional parameters
    # @return [Postresponse]
    def self.create_post(vestorly_auth, post, opts = {})
      
      # verify the required parameter 'vestorly_auth' is set
      raise "Missing the required parameter 'vestorly_auth' when calling create_post" if vestorly_auth.nil?
      
      # verify the required parameter 'post' is set
      raise "Missing the required parameter 'post' when calling create_post" if post.nil?
      

      # resource path
      path = "/posts".sub('{format}','json')

      # query parameters
      query_params = {}
      query_params[:'vestorly_auth'] = vestorly_auth

      # header parameters
      header_params = {}

      # HTTP header 'Accept' (if needed)
      _header_accept = []
      _header_accept_result = Swagger::Request.select_header_accept(_header_accept) and header_params['Accept'] = _header_accept_result

      # HTTP header 'Content-Type'
      _header_content_type = []
      header_params['Content-Type'] = Swagger::Request.select_header_content_type(_header_content_type)

      # form parameters
      form_params = {}

      # http body (model)
      post_body = Swagger::Request.object_to_http_body(post)
      

      response = Swagger::Request.new(:POST, path, {:params => query_params, :headers => header_params, :form_params => form_params, :body => post_body}).make.body
      obj = Postresponse.new() and obj.build_from_hash(response)
    end

    # 
    # Query all posts
    # @param vestorly_auth Vestorly Auth Token
    # @param id ID of post to fetch
    # @param [Hash] opts the optional parameters
    # @return [Postresponse]
    def self.get_post_by_id(vestorly_auth, id, opts = {})
      
      # verify the required parameter 'vestorly_auth' is set
      raise "Missing the required parameter 'vestorly_auth' when calling get_post_by_id" if vestorly_auth.nil?
      
      # verify the required parameter 'id' is set
      raise "Missing the required parameter 'id' when calling get_post_by_id" if id.nil?
      

      # resource path
      path = "/posts/{id}".sub('{format}','json').sub('{' + 'id' + '}', id.to_s)

      # query parameters
      query_params = {}
      query_params[:'vestorly_auth'] = vestorly_auth

      # header parameters
      header_params = {}

      # HTTP header 'Accept' (if needed)
      _header_accept = []
      _header_accept_result = Swagger::Request.select_header_accept(_header_accept) and header_params['Accept'] = _header_accept_result

      # HTTP header 'Content-Type'
      _header_content_type = []
      header_params['Content-Type'] = Swagger::Request.select_header_content_type(_header_content_type)

      # form parameters
      form_params = {}

      # http body (model)
      post_body = nil
      

      response = Swagger::Request.new(:GET, path, {:params => query_params, :headers => header_params, :form_params => form_params, :body => post_body}).make.body
      obj = Postresponse.new() and obj.build_from_hash(response)
    end

    # 
    # Update A Post
    # @param vestorly_auth Vestorly Auth Token
    # @param id id of post to update
    # @param post Post you want to update
    # @param [Hash] opts the optional parameters
    # @return [Postresponse]
    def self.update_post_by_id(vestorly_auth, id, post, opts = {})
      
      # verify the required parameter 'vestorly_auth' is set
      raise "Missing the required parameter 'vestorly_auth' when calling update_post_by_id" if vestorly_auth.nil?
      
      # verify the required parameter 'id' is set
      raise "Missing the required parameter 'id' when calling update_post_by_id" if id.nil?
      
      # verify the required parameter 'post' is set
      raise "Missing the required parameter 'post' when calling update_post_by_id" if post.nil?
      

      # resource path
      path = "/posts/{id}".sub('{format}','json').sub('{' + 'id' + '}', id.to_s)

      # query parameters
      query_params = {}
      query_params[:'vestorly_auth'] = vestorly_auth

      # header parameters
      header_params = {}

      # HTTP header 'Accept' (if needed)
      _header_accept = []
      _header_accept_result = Swagger::Request.select_header_accept(_header_accept) and header_params['Accept'] = _header_accept_result

      # HTTP header 'Content-Type'
      _header_content_type = []
      header_params['Content-Type'] = Swagger::Request.select_header_content_type(_header_content_type)

      # form parameters
      form_params = {}

      # http body (model)
      post_body = Swagger::Request.object_to_http_body(post)
      

      response = Swagger::Request.new(:PUT, path, {:params => query_params, :headers => header_params, :form_params => form_params, :body => post_body}).make.body
      obj = Postresponse.new() and obj.build_from_hash(response)
    end
  end
end
