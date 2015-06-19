require "uri"

module Vestorly
  class MembersApi
    basePath = "https://staging.vestorly.com/api/v2"
    # apiInvoker = APIInvoker

    # 
    # Returns all members
    # @param vestorly_auth Vestorly Auth Token
    # @param [Hash] opts the optional parameters
    # @return [Members]
    def self.find_members(vestorly_auth, opts = {})
      
      # verify the required parameter 'vestorly_auth' is set
      raise "Missing the required parameter 'vestorly_auth' when calling find_members" if vestorly_auth.nil?
      

      # resource path
      path = "/members".sub('{format}','json')

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
      obj = Members.new() and obj.build_from_hash(response)
    end

    # 
    # Create a new member in the Vestorly Platform
    # @param vestorly_auth Vestorly Auth Token
    # @param member Member you want to create
    # @param [Hash] opts the optional parameters
    # @return [Memberresponse]
    def self.create_member(vestorly_auth, member, opts = {})
      
      # verify the required parameter 'vestorly_auth' is set
      raise "Missing the required parameter 'vestorly_auth' when calling create_member" if vestorly_auth.nil?
      
      # verify the required parameter 'member' is set
      raise "Missing the required parameter 'member' when calling create_member" if member.nil?
      

      # resource path
      path = "/members".sub('{format}','json')

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
      post_body = Swagger::Request.object_to_http_body(member)
      

      response = Swagger::Request.new(:POST, path, {:params => query_params, :headers => header_params, :form_params => form_params, :body => post_body}).make.body
      obj = Memberresponse.new() and obj.build_from_hash(response)
    end

    # 
    # Returns a single member
    # @param id Mongo ID of member to fetch
    # @param vestorly_auth Vestorly Auth Token
    # @param [Hash] opts the optional parameters
    # @return [Memberresponse]
    def self.find_member_by_id(id, vestorly_auth, opts = {})
      
      # verify the required parameter 'id' is set
      raise "Missing the required parameter 'id' when calling find_member_by_id" if id.nil?
      
      # verify the required parameter 'vestorly_auth' is set
      raise "Missing the required parameter 'vestorly_auth' when calling find_member_by_id" if vestorly_auth.nil?
      

      # resource path
      path = "/members/{id}".sub('{format}','json').sub('{' + 'id' + '}', id.to_s)

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
      obj = Memberresponse.new() and obj.build_from_hash(response)
    end

    # 
    # Updates a single member
    # @param id Mongo ID of member to fetch
    # @param vestorly_auth Vestorly Auth Token
    # @param member Member you want to update
    # @param [Hash] opts the optional parameters
    # @return [Memberresponse]
    def self.update_member_by_id(id, vestorly_auth, member, opts = {})
      
      # verify the required parameter 'id' is set
      raise "Missing the required parameter 'id' when calling update_member_by_id" if id.nil?
      
      # verify the required parameter 'vestorly_auth' is set
      raise "Missing the required parameter 'vestorly_auth' when calling update_member_by_id" if vestorly_auth.nil?
      
      # verify the required parameter 'member' is set
      raise "Missing the required parameter 'member' when calling update_member_by_id" if member.nil?
      

      # resource path
      path = "/members/{id}".sub('{format}','json').sub('{' + 'id' + '}', id.to_s)

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
      post_body = Swagger::Request.object_to_http_body(member)
      

      response = Swagger::Request.new(:PUT, path, {:params => query_params, :headers => header_params, :form_params => form_params, :body => post_body}).make.body
      obj = Memberresponse.new() and obj.build_from_hash(response)
    end
  end
end
