require "uri"

module Vestorly
  class AdvisorsApi
    basePath = "https://staging.vestorly.com/api/v2"
    # apiInvoker = APIInvoker

    # 
    # Returns a single advisor given their ID
    # @param vestorly_auth Vestorly Auth Token
    # @param id Advisor Id to fetch
    # @param [Hash] opts the optional parameters
    # @return [Advisor]
    def self.find_advisor_by_id(vestorly_auth, id, opts = {})
      
      # verify the required parameter 'vestorly_auth' is set
      raise "Missing the required parameter 'vestorly_auth' when calling find_advisor_by_id" if vestorly_auth.nil?
      
      # verify the required parameter 'id' is set
      raise "Missing the required parameter 'id' when calling find_advisor_by_id" if id.nil?
      

      # resource path
      path = "/advisors/{id}".sub('{format}','json').sub('{' + 'id' + '}', id.to_s)

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
      obj = Advisor.new() and obj.build_from_hash(response)
    end
  end
end
