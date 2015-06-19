require "uri"

module Vestorly
  class ArticlesApi
    basePath = "https://staging.vestorly.com/api/v2"
    # apiInvoker = APIInvoker

    # 
    # Returns all articles
    # @param vestorly_auth Vestorly Auth Token
    # @param [Hash] opts the optional parameters
    # @option opts [int] :limit Limit on the number of articles to return
    # @option opts [string] :text_query Search query parameter
    # @option opts [string] :sort_direction Direction of sort (used with sort_by parameter)
    # @option opts [string] :sort_by Field on model to sort by
    # @return [Articles]
    def self.find_articles(vestorly_auth, opts = {})
      
      # verify the required parameter 'vestorly_auth' is set
      raise "Missing the required parameter 'vestorly_auth' when calling find_articles" if vestorly_auth.nil?
      

      # resource path
      path = "/articles".sub('{format}','json')

      # query parameters
      query_params = {}
      query_params[:'vestorly_auth'] = vestorly_auth
      query_params[:'limit'] = opts[:'limit'] if opts[:'limit']
      query_params[:'text_query'] = opts[:'text_query'] if opts[:'text_query']
      query_params[:'sort_direction'] = opts[:'sort_direction'] if opts[:'sort_direction']
      query_params[:'sort_by'] = opts[:'sort_by'] if opts[:'sort_by']

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
      obj = Articles.new() and obj.build_from_hash(response)
    end

    # 
    # Returns a single article
    # @param vestorly_auth Vestorly Auth Token
    # @param id Article Id to fetch
    # @param [Hash] opts the optional parameters
    # @return [Articleresponse]
    def self.find_article_by_id(vestorly_auth, id, opts = {})
      
      # verify the required parameter 'vestorly_auth' is set
      raise "Missing the required parameter 'vestorly_auth' when calling find_article_by_id" if vestorly_auth.nil?
      
      # verify the required parameter 'id' is set
      raise "Missing the required parameter 'id' when calling find_article_by_id" if id.nil?
      

      # resource path
      path = "/articles/{id}".sub('{format}','json').sub('{' + 'id' + '}', id.to_s)

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
      obj = Articleresponse.new() and obj.build_from_hash(response)
    end
  end
end
