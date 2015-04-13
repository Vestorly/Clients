require "uri"

class RssfeedsApi
  basePath = "http://staging.vestorly.com/"
  # apiInvoker = APIInvoker


  # Read a list of rss feed
  # This retrieves a list of rss feed objects
  # @param vestorly_auth Authentication token
  # @param ids Return rss feed with list of IDs provided
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
    path = "api/v2/rss_feeds.json".sub('{format}','json')
    
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

  # Create an post
  # This creates an post in the database
  # @param rss_feed JSON block of rss feed data
  # @return void
  def self.create (rss_feed, opts={})
    query_param_keys = []
    headerParams = {}

    
    
    # set default values and merge with input
    options = {
      :'rss_feed' => rss_feed
      
    }.merge(opts)

    #resource path
    path = "api/v2/rss_feeds.json".sub('{format}','json')
    
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
    
    form_parameter_hash["rss_feed"] = rss_feed
    
    
    Swagger::Request.new(:POST, path, {:params=>queryopts,:headers=>headers, :body=>post_body, :form_params => form_parameter_hash }).make
    
  
  end

  # Retreive a single rss feed
  # Retrieve a single rss feed from the database
  # @param vestorly_auth Authentication token
  # @param id Id of rss feed
  # @return RSSFeed
  def self.show (vestorly_auth, id, opts={})
    query_param_keys = [:vestorly_auth]
    headerParams = {}

    
    
    # set default values and merge with input
    options = {
      :'vestorly_auth' => vestorly_auth,
      :'id' => id
      
    }.merge(opts)

    #resource path
    path = "api/v2/rss_feeds/{id}.json".sub('{format}','json').sub('{' + 'id' + '}', id.to_s)
    
    
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
     RSSFeed.new(response)
    
    
  
  end

  # Create an advisor
  # This creates an advisor in the database
  # @param id Id of post
  # @param rss_feed JSON block of rss feed data
  # @return RSSFeed
  def self.update (id, rss_feed, opts={})
    query_param_keys = []
    headerParams = {}

    
    
    # set default values and merge with input
    options = {
      :'id' => id,
      :'rss_feed' => rss_feed
      
    }.merge(opts)

    #resource path
    path = "api/v2/rss_feeds/{id}.json".sub('{format}','json').sub('{' + 'id' + '}', id.to_s)
    
    
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
    
    form_parameter_hash["rss_feed"] = rss_feed
    
    response = Swagger::Request.new(:PUT, path, {:params=>queryopts,:headers=>headers, :body=>post_body, :form_params => form_parameter_hash }).make.body
     RSSFeed.new(response)
    
    
  
  end

  # Destroy a post
  # This destroys a post in the database
  # @param id Id of pow5
  # @return void
  def self.destroy (id, opts={})
    query_param_keys = []
    headerParams = {}

    
    
    # set default values and merge with input
    options = {
      :'id' => id
      
    }.merge(opts)

    #resource path
    path = "api/v2/rss_feeds/{id}.json".sub('{format}','json').sub('{' + 'id' + '}', id.to_s)
    
    
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
    
    
    
    Swagger::Request.new(:DELETE, path, {:params=>queryopts,:headers=>headers, :body=>post_body, :form_params => form_parameter_hash }).make
    
  
  end
end
