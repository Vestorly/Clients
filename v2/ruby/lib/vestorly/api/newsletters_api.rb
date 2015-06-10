require "uri"

module Vestorly
  class NewslettersApi
    basePath = "https://staging.vestorly.com/api/v2"
    # apiInvoker = APIInvoker

    # 
    # Returns all newsletters
    # @param vestorly_auth Vestorly Auth Token
    # @param [Hash] opts the optional parameters
    # @return [Newsletters]
    def self.find_newsletters(vestorly_auth, opts = {})
      
      # verify the required parameter 'vestorly_auth' is set
      raise "Missing the required parameter 'vestorly_auth' when calling find_newsletters" if vestorly_auth.nil?
      

      # resource path
      path = "/newsletters".sub('{format}','json')

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
      obj = Newsletters.new() and obj.build_from_hash(response)
    end

    # 
    # Get a newsletter by ID
    # @param vestorly_auth Vestorly Auth Token
    # @param id Mongo ID of event to get
    # @param [Hash] opts the optional parameters
    # @return [Newsletterresponse]
    def self.get_newsletter_by_id(vestorly_auth, id, opts = {})
      
      # verify the required parameter 'vestorly_auth' is set
      raise "Missing the required parameter 'vestorly_auth' when calling get_newsletter_by_id" if vestorly_auth.nil?
      
      # verify the required parameter 'id' is set
      raise "Missing the required parameter 'id' when calling get_newsletter_by_id" if id.nil?
      

      # resource path
      path = "/newsletters/{id}".sub('{format}','json').sub('{' + 'id' + '}', id.to_s)

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
      obj = Newsletterresponse.new() and obj.build_from_hash(response)
    end

    # 
    # Updates a newsletter
    # @param vestorly_auth Vestorly Auth Token
    # @param id Mongo ID of event to update
    # @param newsletter Newsletter
    # @param [Hash] opts the optional parameters
    # @return [Newsletterresponse]
    def self.update_newsletter_by_id(vestorly_auth, id, newsletter, opts = {})
      
      # verify the required parameter 'vestorly_auth' is set
      raise "Missing the required parameter 'vestorly_auth' when calling update_newsletter_by_id" if vestorly_auth.nil?
      
      # verify the required parameter 'id' is set
      raise "Missing the required parameter 'id' when calling update_newsletter_by_id" if id.nil?
      
      # verify the required parameter 'newsletter' is set
      raise "Missing the required parameter 'newsletter' when calling update_newsletter_by_id" if newsletter.nil?
      

      # resource path
      path = "/newsletters/{id}".sub('{format}','json').sub('{' + 'id' + '}', id.to_s)

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
      post_body = Swagger::Request.object_to_http_body(newsletter)
      

      response = Swagger::Request.new(:PUT, path, {:params => query_params, :headers => header_params, :form_params => form_params, :body => post_body}).make.body
      obj = Newsletterresponse.new() and obj.build_from_hash(response)
    end
  end
end
