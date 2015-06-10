require "uri"

module Vestorly
  class GroupsApi
    basePath = "https://staging.vestorly.com/api/v2"
    # apiInvoker = APIInvoker

    # 
    # Returns all groups
    # @param vestorly_auth Vestorly Auth Token
    # @param [Hash] opts the optional parameters
    # @return [Groups]
    def self.find_groups(vestorly_auth, opts = {})
      
      # verify the required parameter 'vestorly_auth' is set
      raise "Missing the required parameter 'vestorly_auth' when calling find_groups" if vestorly_auth.nil?
      

      # resource path
      path = "/groups".sub('{format}','json')

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
      obj = Groups.new() and obj.build_from_hash(response)
    end

    # 
    # Creates a new Group
    # @param vestorly_auth Vestorly Auth Token
    # @param group Group to add
    # @param [Hash] opts the optional parameters
    # @return [Groupresponse]
    def self.create_group(vestorly_auth, group, opts = {})
      
      # verify the required parameter 'vestorly_auth' is set
      raise "Missing the required parameter 'vestorly_auth' when calling create_group" if vestorly_auth.nil?
      
      # verify the required parameter 'group' is set
      raise "Missing the required parameter 'group' when calling create_group" if group.nil?
      

      # resource path
      path = "/groups".sub('{format}','json')

      # query parameters
      query_params = {}
      query_params[:'vestorly_auth'] = vestorly_auth

      # header parameters
      header_params = {}

      # HTTP header 'Accept' (if needed)
      _header_accept = ['application/json']
      _header_accept_result = Swagger::Request.select_header_accept(_header_accept) and header_params['Accept'] = _header_accept_result

      # HTTP header 'Content-Type'
      _header_content_type = []
      header_params['Content-Type'] = Swagger::Request.select_header_content_type(_header_content_type)

      # form parameters
      form_params = {}

      # http body (model)
      post_body = Swagger::Request.object_to_http_body(group)
      

      response = Swagger::Request.new(:POST, path, {:params => query_params, :headers => header_params, :form_params => form_params, :body => post_body}).make.body
      obj = Groupresponse.new() and obj.build_from_hash(response)
    end

    # 
    # Returns a single group if user has access
    # @param vestorly_auth Vestorly Auth Token
    # @param id Mongo ID of group to fetch
    # @param [Hash] opts the optional parameters
    # @return [Groupresponse]
    def self.find_group_by_id(vestorly_auth, id, opts = {})
      
      # verify the required parameter 'vestorly_auth' is set
      raise "Missing the required parameter 'vestorly_auth' when calling find_group_by_id" if vestorly_auth.nil?
      
      # verify the required parameter 'id' is set
      raise "Missing the required parameter 'id' when calling find_group_by_id" if id.nil?
      

      # resource path
      path = "/groups/{id}".sub('{format}','json').sub('{' + 'id' + '}', id.to_s)

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
      obj = Groupresponse.new() and obj.build_from_hash(response)
    end

    # 
    # Updates a Group
    # @param vestorly_auth Vestorly Auth Token
    # @param id id of group to update
    # @param group Group to update
    # @param [Hash] opts the optional parameters
    # @return [Groupresponse]
    def self.update_group_by_id(vestorly_auth, id, group, opts = {})
      
      # verify the required parameter 'vestorly_auth' is set
      raise "Missing the required parameter 'vestorly_auth' when calling update_group_by_id" if vestorly_auth.nil?
      
      # verify the required parameter 'id' is set
      raise "Missing the required parameter 'id' when calling update_group_by_id" if id.nil?
      
      # verify the required parameter 'group' is set
      raise "Missing the required parameter 'group' when calling update_group_by_id" if group.nil?
      

      # resource path
      path = "/groups/{id}".sub('{format}','json').sub('{' + 'id' + '}', id.to_s)

      # query parameters
      query_params = {}
      query_params[:'vestorly_auth'] = vestorly_auth

      # header parameters
      header_params = {}

      # HTTP header 'Accept' (if needed)
      _header_accept = ['application/json']
      _header_accept_result = Swagger::Request.select_header_accept(_header_accept) and header_params['Accept'] = _header_accept_result

      # HTTP header 'Content-Type'
      _header_content_type = []
      header_params['Content-Type'] = Swagger::Request.select_header_content_type(_header_content_type)

      # form parameters
      form_params = {}

      # http body (model)
      post_body = Swagger::Request.object_to_http_body(group)
      

      response = Swagger::Request.new(:PUT, path, {:params => query_params, :headers => header_params, :form_params => form_params, :body => post_body}).make.body
      obj = Groupresponse.new() and obj.build_from_hash(response)
    end

    # 
    # Deletes a Group
    # @param vestorly_auth Vestorly Auth Token
    # @param id id of group to delete
    # @param [Hash] opts the optional parameters
    # @return [Groupresponse]
    def self.delete_group(vestorly_auth, id, opts = {})
      
      # verify the required parameter 'vestorly_auth' is set
      raise "Missing the required parameter 'vestorly_auth' when calling delete_group" if vestorly_auth.nil?
      
      # verify the required parameter 'id' is set
      raise "Missing the required parameter 'id' when calling delete_group" if id.nil?
      

      # resource path
      path = "/groups/{id}".sub('{format}','json').sub('{' + 'id' + '}', id.to_s)

      # query parameters
      query_params = {}
      query_params[:'vestorly_auth'] = vestorly_auth

      # header parameters
      header_params = {}

      # HTTP header 'Accept' (if needed)
      _header_accept = ['application/json']
      _header_accept_result = Swagger::Request.select_header_accept(_header_accept) and header_params['Accept'] = _header_accept_result

      # HTTP header 'Content-Type'
      _header_content_type = []
      header_params['Content-Type'] = Swagger::Request.select_header_content_type(_header_content_type)

      # form parameters
      form_params = {}

      # http body (model)
      post_body = nil
      

      response = Swagger::Request.new(:DELETE, path, {:params => query_params, :headers => header_params, :form_params => form_params, :body => post_body}).make.body
      obj = Groupresponse.new() and obj.build_from_hash(response)
    end
  end
end
