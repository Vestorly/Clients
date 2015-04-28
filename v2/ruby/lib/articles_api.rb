require "uri"

class ArticlesApi
  basePath = "https://staging.vestorly.com/api/v2"
  # apiInvoker = APIInvoker


  # 
  # Returns all articles
  # @param vestorly_auth Vestorly Auth Token
  # @param limit Limit on the number of articles to return
  # @param text_query Search query parameter
  # @param sort_direction Direction of sort (used with sort_by parameter)
  # @param sort_by Field on model to sort by
  # @return Articles
  def self.findArticles (vestorly_auth, limit, text_query, sort_direction, sort_by, opts={})
    query_param_keys = [:vestorly_auth,:limit,:text_query,:sort_direction,:sort_by]
    headerParams = {}

    
    
    # set default values and merge with input
    options = {
      :'vestorly_auth' => vestorly_auth,
      :'limit' => limit,
      :'text_query' => text_query,
      :'sort_direction' => sort_direction,
      :'sort_by' => sort_by
      
    }.merge(opts)

    #resource path
    path = "/articles".sub('{format}','json')
    
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
     Articles.new(response)
    
    
  
  end

  # 
  # Returns a single article
  # @param id Article Id to fetch
  # @return Articleresponse
  def self.findArticleByID (id, opts={})
    query_param_keys = []
    headerParams = {}

    
    
    # set default values and merge with input
    options = {
      :'id' => id
      
    }.merge(opts)

    #resource path
    path = "/articles/{id}".sub('{format}','json').sub('{' + 'id' + '}', id.to_s)
    
    
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
     Articleresponse.new(response)
    
    
  
  end
end
