require "uri"

class NewslettersettingsApi
  basePath = "https://staging.vestorly.com/api/v2"
  # apiInvoker = APIInvoker


  # 
  # Returns all newsletter settings
  # @param vestorly_auth Vestorly Auth Token
  # @return NewsletterSettings
  def self.findNewsletterSettings (vestorly_auth, opts={})
    query_param_keys = [:vestorly_auth]
    headerParams = {}

    
    
    # set default values and merge with input
    options = {
      :'vestorly_auth' => vestorly_auth
      
    }.merge(opts)

    #resource path
    path = "/newsletter_settings".sub('{format}','json')
    
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
     NewsletterSettings.new(response)
    
    
  
  end

  # 
  # Update a single newsletter setting by ID
  # @param vestorly_auth Vestorly Auth Token
  # @param newsletter_settings newsletter settings
  # @return NewsletterSettings
  def self.updateNewsletterSettingsByID (vestorly_auth, newsletter_settings, opts={})
    query_param_keys = [:vestorly_auth]
    headerParams = {}

    
    
    # set default values and merge with input
    options = {
      :'vestorly_auth' => vestorly_auth,
      :'newsletter_settings' => newsletter_settings
      
    }.merge(opts)

    #resource path
    path = "/newsletter_settings".sub('{format}','json')
    
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
    
    form_parameter_hash["newsletter_settings"] = newsletter_settings
    
    response = Swagger::Request.new(:PUT, path, {:params=>queryopts,:headers=>headers, :body=>post_body, :form_params => form_parameter_hash }).make.body
     NewsletterSettings.new(response)
    
    
  
  end

  # 
  # Returns a single newsletter settings if the user has access
  # @param id Mongo ID of newsletter settings to fetch
  # @param vestorly_auth Vestorly Auth Token
  # @return NewsletterSettings
  def self.findNewsletterSettingsByID (id, vestorly_auth, opts={})
    query_param_keys = [:vestorly_auth]
    headerParams = {}

    
    
    # set default values and merge with input
    options = {
      :'id' => id,
      :'vestorly_auth' => vestorly_auth
      
    }.merge(opts)

    #resource path
    path = "/newsletter_settings/{id}".sub('{format}','json').sub('{' + 'id' + '}', id.to_s)
    
    
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
     NewsletterSettings.new(response)
    
    
  
  end
end
