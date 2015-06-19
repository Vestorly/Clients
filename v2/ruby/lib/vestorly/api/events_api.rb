require "uri"

module Vestorly
  class EventsApi
    basePath = "https://staging.vestorly.com/api/v2"
    # apiInvoker = APIInvoker

    # 
    # Returns all events
    # @param vestorly_auth Vestorly Auth Token
    # @param [Hash] opts the optional parameters
    # @return [Events]
    def self.find_events(vestorly_auth, opts = {})
      
      # verify the required parameter 'vestorly_auth' is set
      raise "Missing the required parameter 'vestorly_auth' when calling find_events" if vestorly_auth.nil?
      

      # resource path
      path = "/events".sub('{format}','json')

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
      obj = Events.new() and obj.build_from_hash(response)
    end

    # 
    # Creates a new event in the system
    # @param vestorly_auth Vestorly Auth Token
    # @param event Event
    # @param [Hash] opts the optional parameters
    # @return [Eventcreateresponse]
    def self.create_event(vestorly_auth, event, opts = {})
      
      # verify the required parameter 'vestorly_auth' is set
      raise "Missing the required parameter 'vestorly_auth' when calling create_event" if vestorly_auth.nil?
      
      # verify the required parameter 'event' is set
      raise "Missing the required parameter 'event' when calling create_event" if event.nil?
      

      # resource path
      path = "/events".sub('{format}','json')

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
      post_body = Swagger::Request.object_to_http_body(event)
      

      response = Swagger::Request.new(:POST, path, {:params => query_params, :headers => header_params, :form_params => form_params, :body => post_body}).make.body
      obj = Eventcreateresponse.new() and obj.build_from_hash(response)
    end

    # 
    # Returns a single event if the user has access
    # @param id Mongo ID of event to fetch
    # @param vestorly_auth Vestorly Auth Token
    # @param [Hash] opts the optional parameters
    # @return [Eventresponse]
    def self.find_event_by_id(id, vestorly_auth, opts = {})
      
      # verify the required parameter 'id' is set
      raise "Missing the required parameter 'id' when calling find_event_by_id" if id.nil?
      
      # verify the required parameter 'vestorly_auth' is set
      raise "Missing the required parameter 'vestorly_auth' when calling find_event_by_id" if vestorly_auth.nil?
      

      # resource path
      path = "/events/{id}".sub('{format}','json').sub('{' + 'id' + '}', id.to_s)

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
      obj = Eventresponse.new() and obj.build_from_hash(response)
    end
  end
end
