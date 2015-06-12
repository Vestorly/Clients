require "uri"

module Vestorly
  class NewslettersettingsApi
    basePath = "https://staging.vestorly.com/api/v2"
    # apiInvoker = APIInvoker

    # 
    # Returns all newsletter settings
    # @param vestorly_auth Vestorly Auth Token
    # @param [Hash] opts the optional parameters
    # @return [NewsletterSettings]
    def self.find_newsletter_settings(vestorly_auth, opts = {})
      
      # verify the required parameter 'vestorly_auth' is set
      raise "Missing the required parameter 'vestorly_auth' when calling find_newsletter_settings" if vestorly_auth.nil?
      

      # resource path
      path = "/newsletter_settings".sub('{format}','json')

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
      obj = NewsletterSettings.new() and obj.build_from_hash(response)
    end

    # 
    # Returns a single newsletter settings if the user has access
    # @param id Mongo ID of newsletter settings to fetch
    # @param vestorly_auth Vestorly Auth Token
    # @param [Hash] opts the optional parameters
    # @return [Newslettersettingresponse]
    def self.find_newsletter_settings_by_id(id, vestorly_auth, opts = {})
      
      # verify the required parameter 'id' is set
      raise "Missing the required parameter 'id' when calling find_newsletter_settings_by_id" if id.nil?
      
      # verify the required parameter 'vestorly_auth' is set
      raise "Missing the required parameter 'vestorly_auth' when calling find_newsletter_settings_by_id" if vestorly_auth.nil?
      

      # resource path
      path = "/newsletter_settings/{id}".sub('{format}','json').sub('{' + 'id' + '}', id.to_s)

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
      obj = Newslettersettingresponse.new() and obj.build_from_hash(response)
    end

    # 
    # Update a single newsletter setting by ID
    # @param id Mongo ID of newsletter settings to update
    # @param vestorly_auth Vestorly Auth Token
    # @param newsletter_setting newsletter settings
    # @param [Hash] opts the optional parameters
    # @return [Newslettersettingresponse]
    def self.update_newsletter_settings_by_id(id, vestorly_auth, newsletter_setting, opts = {})
      
      # verify the required parameter 'id' is set
      raise "Missing the required parameter 'id' when calling update_newsletter_settings_by_id" if id.nil?
      
      # verify the required parameter 'vestorly_auth' is set
      raise "Missing the required parameter 'vestorly_auth' when calling update_newsletter_settings_by_id" if vestorly_auth.nil?
      
      # verify the required parameter 'newsletter_setting' is set
      raise "Missing the required parameter 'newsletter_setting' when calling update_newsletter_settings_by_id" if newsletter_setting.nil?
      

      # resource path
      path = "/newsletter_settings/{id}".sub('{format}','json').sub('{' + 'id' + '}', id.to_s)

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
      post_body = Swagger::Request.object_to_http_body(newsletter_setting)
      

      response = Swagger::Request.new(:PUT, path, {:params => query_params, :headers => header_params, :form_params => form_params, :body => post_body}).make.body
      obj = Newslettersettingresponse.new() and obj.build_from_hash(response)
    end
  end
end
