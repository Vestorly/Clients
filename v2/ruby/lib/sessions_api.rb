require "uri"

class SessionsApi
  basePath = "https://staging.vestorly.com/api/v2"
  # apiInvoker = APIInvoker


  # 
  # Login To Vestorly Platform
  # @param username Username in the vestorly platform
  # @param password Password in Vestorly Platform
  # @return Session
  def self.login (username, password, opts={})
    query_param_keys = []
    headerParams = {}

    
    
    # set default values and merge with input
    options = {
      :'username' => username,
      :'password' => password
      
    }.merge(opts)

    #resource path
    path = "/sessions".sub('{format}','json')
    
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
    _header_content_type = ['application/x-www-form-urlencoded', ]
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

  # 
  # Logout of the vestorly platform
  # @param vestorly_auth Authenication token
  # @param id ID of pet to session
  # @return Session
  def self.logout (vestorly_auth, id, opts={})
    query_param_keys = []
    headerParams = {}

    
    
    # set default values and merge with input
    options = {
      :'vestorly_auth' => vestorly_auth,
      :'id' => id
      
    }.merge(opts)

    #resource path
    path = "/sessions/{id}".sub('{format}','json').sub('{' + 'id' + '}', id.to_s)
    
    
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
    
    form_parameter_hash["vestorly-auth"] = vestorly_auth
    
    response = Swagger::Request.new(:DELETE, path, {:params=>queryopts,:headers=>headers, :body=>post_body, :form_params => form_parameter_hash }).make.body
     Session.new(response)
    
    
  
  end
end
