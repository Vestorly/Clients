require "uri"

class SourcesApi
  basePath = "http://staging.vestorly.com/"
  # apiInvoker = APIInvoker


  # Read a list of sources
  # This retrieves a list of sources objects
  # @param vestorly_auth Authentication token
  # @param ids Return sources with list of IDs provided
  # @return void
  def self.index (vestorly_auth, ids, opts={})
    query_param_keys = [:vestorly_auth,:ids]
    headerParams = {}

    
    
    # set default values and merge with input
    options = {
      :'vestorly_auth' => vestorly_auth,
      :'ids' => ids
      
    }.merge(opts)

    #resource path
    path = "api/v2/sources.json".sub('{format}','json')
    
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
    
    
    
    Swagger::Request.new(:GET, path, {:params=>queryopts,:headers=>headers, :body=>post_body, :form_params => form_parameter_hash }).make
    
  
  end

  # Read a specific source
  # This retrieves a specific source document
  # @param vestorly_auth Authentication token
  # @param id Id of source
  # @return void
  def self.show (vestorly_auth, id, opts={})
    query_param_keys = [:vestorly_auth]
    headerParams = {}

    
    
    # set default values and merge with input
    options = {
      :'vestorly_auth' => vestorly_auth,
      :'id' => id
      
    }.merge(opts)

    #resource path
    path = "api/v2/sources/{id}.json".sub('{format}','json').sub('{' + 'id' + '}', id.to_s)
    
    
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
    
    
    
    Swagger::Request.new(:GET, path, {:params=>queryopts,:headers=>headers, :body=>post_body, :form_params => form_parameter_hash }).make
    
  
  end

  # Create a source
  # This creates an source in the database
  # @param id Id of g
  # @param source JSON block of source data
  # @return Source
  def self.update (id, source, opts={})
    query_param_keys = []
    headerParams = {}

    
    
    # set default values and merge with input
    options = {
      :'id' => id,
      :'source' => source
      
    }.merge(opts)

    #resource path
    path = "api/v2/sources/{id}.json".sub('{format}','json').sub('{' + 'id' + '}', id.to_s)
    
    
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
    
    form_parameter_hash["source"] = source
    
    response = Swagger::Request.new(:PUT, path, {:params=>queryopts,:headers=>headers, :body=>post_body, :form_params => form_parameter_hash }).make.body
     Source.new(response)
    
    
  
  end
end
