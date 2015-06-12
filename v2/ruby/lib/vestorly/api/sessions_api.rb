require "uri"

module Vestorly
  class SessionsApi
    basePath = "https://staging.vestorly.com/api/v2"
    # apiInvoker = APIInvoker

    # 
    # Login To Vestorly Platform
    # @param username Username in the vestorly platform
    # @param password Password in Vestorly Platform
    # @param [Hash] opts the optional parameters
    # @return [Session]
    def self.login(username, password, opts = {})
      
      # verify the required parameter 'username' is set
      raise "Missing the required parameter 'username' when calling login" if username.nil?
      
      # verify the required parameter 'password' is set
      raise "Missing the required parameter 'password' when calling login" if password.nil?
      

      # resource path
      path = "/sessions".sub('{format}','json')

      # query parameters
      query_params = {}
      query_params[:'username'] = username
      query_params[:'password'] = password

      # header parameters
      header_params = {}

      # HTTP header 'Accept' (if needed)
      _header_accept = []
      _header_accept_result = Swagger::Request.select_header_accept(_header_accept) and header_params['Accept'] = _header_accept_result

      # HTTP header 'Content-Type'
      _header_content_type = ['application/x-www-form-urlencoded']
      header_params['Content-Type'] = Swagger::Request.select_header_content_type(_header_content_type)

      # form parameters
      form_params = {}

      # http body (model)
      post_body = nil
      

      response = Swagger::Request.new(:POST, path, {:params => query_params, :headers => header_params, :form_params => form_params, :body => post_body}).make.body
      obj = Session.new() and obj.build_from_hash(response)
    end

    # 
    # Logout of the vestorly platform
    # @param vestorly_auth Authenication token
    # @param id ID of pet to session
    # @param [Hash] opts the optional parameters
    # @return [SessionLogoutResponse]
    def self.logout(vestorly_auth, id, opts = {})
      
      # verify the required parameter 'vestorly_auth' is set
      raise "Missing the required parameter 'vestorly_auth' when calling logout" if vestorly_auth.nil?
      
      # verify the required parameter 'id' is set
      raise "Missing the required parameter 'id' when calling logout" if id.nil?
      

      # resource path
      path = "/sessions/{id}".sub('{format}','json').sub('{' + 'id' + '}', id.to_s)

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
      

      response = Swagger::Request.new(:DELETE, path, {:params => query_params, :headers => header_params, :form_params => form_params, :body => post_body}).make.body
      obj = SessionLogoutResponse.new() and obj.build_from_hash(response)
    end
  end
end
