require "uri"

module Vestorly
  class MembereventsApi
    basePath = "https://staging.vestorly.com/api/v2"
    # apiInvoker = APIInvoker

    # 
    # Returns all MemberEvents
    # @param vestorly_auth Vestorly Auth Token
    # @param [Hash] opts the optional parameters
    # @return [MemberEvents]
    def self.find_member_events(vestorly_auth, opts = {})
      
      # verify the required parameter 'vestorly_auth' is set
      raise "Missing the required parameter 'vestorly_auth' when calling find_member_events" if vestorly_auth.nil?
      

      # resource path
      path = "/member_events".sub('{format}','json')

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
      obj = MemberEvents.new() and obj.build_from_hash(response)
    end
  end
end
