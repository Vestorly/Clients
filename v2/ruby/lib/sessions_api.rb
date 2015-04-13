require "uri"

class SessionsApi
  basePath = "http://staging.vestorly.com/"
  # apiInvoker = APIInvoker


  # Login to Vestorly
  # Login to Vestorly
  # @param username Username in Vestorly Platform
  # @param password Password in Vestorly Platform
  # @return Session
  def self.create (username, password, opts={})
    query_param_keys = []
    headerParams = {}

    
    
    # set default values and merge with input
    options = {
      :'username' => username,
      :'password' => password
      
    }.merge(opts)

    #resource path
    path = "api/v2/sessions.json".sub('{format}','json')
    
    # pull querystring keys from options
    queryopts = options.select do |key,value|
      query_param_keys.include? key
    end

    # header parameters
    headers = {}

    _header_accept = ''
    if _header_accept != ''
      headerParams['Accept'] = _header_accept
    end 
    _header_content_type = []
    headerParams['Content-Type'] = _header_content_type.length > 0 ? _header_content_type[0] : 'application/json'

    
    
    # http body (model)
    post_body = nil
    
    # form parameters
    form_parameter_hash = {}
    
    form_parameter_hash["username"] = username
    form_parameter_hash["password"] = password
    
    response = Swagger::Request.new(:POST, path, {:params=>queryopts,:headers=>headers, :body=>post_body, :form_params => form_parameter_hash }).make.body
     Session.new(response)
    
    
  
  end
end
