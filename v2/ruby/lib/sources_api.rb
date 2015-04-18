require "uri"

class SourcesApi
  basePath = "https://staging.vestorly.com/api/v2"
  # apiInvoker = APIInvoker


  # 
  # Returns all sources
  # @param vestorly_auth Vestorly Auth Token
  # @return Sources
  def self.findSources (vestorly_auth, opts={})
    query_param_keys = [:vestorly_auth]
    headerParams = {}

    
    
    # set default values and merge with input
    options = {
      :'vestorly_auth' => vestorly_auth
      
    }.merge(opts)

    #resource path
    path = "/sources".sub('{format}','json')
    
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
    
    
    response = Swagger::Request.new(:GET, path, {:params=>queryopts,:headers=>headers, :body=>post_body, :form_params => form_parameter_hash }).make.body
     Sources.new(response)
    
    
  
  end

  # 
  # Create source
  # @param vestorly_auth Vestorly Auth Token
  # @param source Source
  # @return Source
  def self.createSource (vestorly_auth, source, opts={})
    query_param_keys = [:vestorly_auth]
    headerParams = {}

    
    
    # set default values and merge with input
    options = {
      :'vestorly_auth' => vestorly_auth,
      :'source' => source
      
    }.merge(opts)

    #resource path
    path = "/sources/".sub('{format}','json')
    
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
    
    form_parameter_hash["Source"] = source
    
    response = Swagger::Request.new(:POST, path, {:params=>queryopts,:headers=>headers, :body=>post_body, :form_params => form_parameter_hash }).make.body
     Source.new(response)
    
    
  
  end

  # 
  # Get Source By ID
  # @param vestorly_auth Vestorly Auth Token
  # @param id ID of source to fetch
  # @return Source
  def self.getSourceByID (vestorly_auth, id, opts={})
    query_param_keys = [:vestorly_auth]
    headerParams = {}

    
    
    # set default values and merge with input
    options = {
      :'vestorly_auth' => vestorly_auth,
      :'id' => id
      
    }.merge(opts)

    #resource path
    path = "/sources/{id}".sub('{format}','json').sub('{' + 'id' + '}', id.to_s)
    
    
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
    
    
    response = Swagger::Request.new(:GET, path, {:params=>queryopts,:headers=>headers, :body=>post_body, :form_params => form_parameter_hash }).make.body
     Source.new(response)
    
    
  
  end

  # 
  # Update Source By ID
  # @param vestorly_auth Vestorly Auth Token
  # @param id ID of source to fetch
  # @param source Source
  # @return Source
  def self.UpdateSourceByID (vestorly_auth, id, source, opts={})
    query_param_keys = [:vestorly_auth]
    headerParams = {}

    
    
    # set default values and merge with input
    options = {
      :'vestorly_auth' => vestorly_auth,
      :'id' => id,
      :'source' => source
      
    }.merge(opts)

    #resource path
    path = "/sources/{id}".sub('{format}','json').sub('{' + 'id' + '}', id.to_s)
    
    
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
    
    form_parameter_hash["Source"] = source
    
    response = Swagger::Request.new(:PUT, path, {:params=>queryopts,:headers=>headers, :body=>post_body, :form_params => form_parameter_hash }).make.body
     Source.new(response)
    
    
  
  end
end
