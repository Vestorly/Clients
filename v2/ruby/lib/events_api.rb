require "uri"

class EventsApi
  basePath = "https://staging.vestorly.com/api/v2"
  # apiInvoker = APIInvoker


  # 
  # Returns all events
  # @param vestorly_auth Vestorly Auth Token
  # @return Events
  def self.findEvents (vestorly_auth, opts={})
    query_param_keys = [:vestorly_auth]
    headerParams = {}

    
    
    # set default values and merge with input
    options = {
      :'vestorly_auth' => vestorly_auth
      
    }.merge(opts)

    #resource path
    path = "/events".sub('{format}','json')
    
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
     Events.new(response)
    
    
  
  end

  # 
  # Returns a single event if the user has access
  # @param id Mongo ID of event to fetch
  # @param vestorly_auth Vestorly Auth Token
  # @return Event
  def self.findEventByID (id, vestorly_auth, opts={})
    query_param_keys = [:vestorly_auth]
    headerParams = {}

    
    
    # set default values and merge with input
    options = {
      :'id' => id,
      :'vestorly_auth' => vestorly_auth
      
    }.merge(opts)

    #resource path
    path = "/events/{id}".sub('{format}','json').sub('{' + 'id' + '}', id.to_s)
    
    
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
     Event.new(response)
    
    
  
  end

  # 
  # Updates a single event by mongo id
  # @param id Mongo ID of event to update
  # @param vestorly_auth Vestorly Auth Token
  # @param event Event
  # @return Event
  def self.updateEventByID (id, vestorly_auth, event, opts={})
    query_param_keys = [:vestorly_auth]
    headerParams = {}

    
    
    # set default values and merge with input
    options = {
      :'id' => id,
      :'vestorly_auth' => vestorly_auth,
      :'event' => event
      
    }.merge(opts)

    #resource path
    path = "/events/{id}".sub('{format}','json').sub('{' + 'id' + '}', id.to_s)
    
    
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
    
    form_parameter_hash["Event"] = event
    
    response = Swagger::Request.new(:PUT, path, {:params=>queryopts,:headers=>headers, :body=>post_body, :form_params => form_parameter_hash }).make.body
     Event.new(response)
    
    
  
  end
end
