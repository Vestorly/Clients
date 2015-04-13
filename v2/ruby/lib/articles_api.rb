require "uri"

class ArticlesApi
  basePath = "http://staging.vestorly.com/"
  # apiInvoker = APIInvoker


  # Read a list of articles
  # This retrieves a list of articles objects
  # @param vestorly_auth Authentication token
  # @param is_published Filter by published articles
  # @param external_url_source Filter by posts with external URL source
  # @param ids Return posts with list of IDs provided
  # @return Article
  def self.index (vestorly_auth, is_published, external_url_source, ids, opts={})
    query_param_keys = [:vestorly_auth,:is_published,:external_url_source,:ids]
    headerParams = {}

    
    
    # set default values and merge with input
    options = {
      :'vestorly_auth' => vestorly_auth,
      :'is_published' => is_published,
      :'external_url_source' => external_url_source,
      :'ids' => ids
      
    }.merge(opts)

    #resource path
    path = "api/v2/articles.json".sub('{format}','json')
    
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
     Article.new(response)
    
    
  
  end

  # Read a specific article
  # This retrieves a specific article document
  # @param vestorly_auth Authentication token
  # @param id Id of article
  # @return Article
  def self.show (vestorly_auth, id, opts={})
    query_param_keys = [:vestorly_auth]
    headerParams = {}

    
    
    # set default values and merge with input
    options = {
      :'vestorly_auth' => vestorly_auth,
      :'id' => id
      
    }.merge(opts)

    #resource path
    path = "api/v2/articles/{id}.json".sub('{format}','json').sub('{' + 'id' + '}', id.to_s)
    
    
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
     Article.new(response)
    
    
  
  end

  # Update an article
  # This updates an article in the database
  # @param vestorly_auth Authentication token
  # @param article JSON block of article data
  # @return Article
  def self.update (vestorly_auth, article, opts={})
    query_param_keys = [:vestorly_auth]
    headerParams = {}

    
    
    # set default values and merge with input
    options = {
      :'vestorly_auth' => vestorly_auth,
      :'article' => article
      
    }.merge(opts)

    #resource path
    path = "api/v2/articles/{id}.json".sub('{format}','json')
    
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
    
    form_parameter_hash["article"] = article
    
    response = Swagger::Request.new(:PUT, path, {:params=>queryopts,:headers=>headers, :body=>post_body, :form_params => form_parameter_hash }).make.body
     Article.new(response)
    
    
  
  end
end
