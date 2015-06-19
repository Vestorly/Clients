module Vestorly
  # 
  class Article < BaseObject
    attr_accessor :_id, :created_at, :title, :body, :is_responsive, :is_proxy_needed, :is_mobile_proxy_needed, :needs_sanitize, :proxy_url, :topic, :suitability_score, :summary, :image_path, :image_url, :image_height, :image_width, :logo_url, :square_logo_url, :url, :external_url, :external_url_source, :external_url_type
    # attribute mapping from ruby-style variable name to JSON key
    def self.attribute_map
      {
        
        # 
        :'_id' => :'_id',
        
        # 
        :'created_at' => :'created_at',
        
        # 
        :'title' => :'title',
        
        # 
        :'body' => :'body',
        
        # 
        :'is_responsive' => :'is_responsive',
        
        # 
        :'is_proxy_needed' => :'is_proxy_needed',
        
        # 
        :'is_mobile_proxy_needed' => :'is_mobile_proxy_needed',
        
        # 
        :'needs_sanitize' => :'needs_sanitize',
        
        # 
        :'proxy_url' => :'proxy_url',
        
        # 
        :'topic' => :'topic',
        
        # 
        :'suitability_score' => :'suitability_score',
        
        # 
        :'summary' => :'summary',
        
        # 
        :'image_path' => :'image_path',
        
        # 
        :'image_url' => :'image_url',
        
        # 
        :'image_height' => :'image_height',
        
        # 
        :'image_width' => :'image_width',
        
        # 
        :'logo_url' => :'logo_url',
        
        # 
        :'square_logo_url' => :'square_logo_url',
        
        # 
        :'url' => :'url',
        
        # 
        :'external_url' => :'external_url',
        
        # 
        :'external_url_source' => :'external_url_source',
        
        # 
        :'external_url_type' => :'external_url_type'
        
      }
    end

    # attribute type
    def self.swagger_types
      {
        :'_id' => :'string',
        :'created_at' => :'string',
        :'title' => :'string',
        :'body' => :'string',
        :'is_responsive' => :'boolean',
        :'is_proxy_needed' => :'boolean',
        :'is_mobile_proxy_needed' => :'boolean',
        :'needs_sanitize' => :'boolean',
        :'proxy_url' => :'string',
        :'topic' => :'string',
        :'suitability_score' => :'string',
        :'summary' => :'string',
        :'image_path' => :'string',
        :'image_url' => :'string',
        :'image_height' => :'int',
        :'image_width' => :'int',
        :'logo_url' => :'string',
        :'square_logo_url' => :'string',
        :'url' => :'string',
        :'external_url' => :'string',
        :'external_url_source' => :'string',
        :'external_url_type' => :'string'
        
      }
    end

    def initialize(attributes = {})
      return if !attributes.is_a?(Hash) || attributes.empty?

      # convert string to symbol for hash key
      attributes = attributes.inject({}){|memo,(k,v)| memo[k.to_sym] = v; memo}

      
      if attributes[:'_id']
        @_id = attributes[:'_id']
      end
      
      if attributes[:'created_at']
        @created_at = attributes[:'created_at']
      end
      
      if attributes[:'title']
        @title = attributes[:'title']
      end
      
      if attributes[:'body']
        @body = attributes[:'body']
      end
      
      if attributes[:'is_responsive']
        @is_responsive = attributes[:'is_responsive']
      end
      
      if attributes[:'is_proxy_needed']
        @is_proxy_needed = attributes[:'is_proxy_needed']
      end
      
      if attributes[:'is_mobile_proxy_needed']
        @is_mobile_proxy_needed = attributes[:'is_mobile_proxy_needed']
      end
      
      if attributes[:'needs_sanitize']
        @needs_sanitize = attributes[:'needs_sanitize']
      end
      
      if attributes[:'proxy_url']
        @proxy_url = attributes[:'proxy_url']
      end
      
      if attributes[:'topic']
        @topic = attributes[:'topic']
      end
      
      if attributes[:'suitability_score']
        @suitability_score = attributes[:'suitability_score']
      end
      
      if attributes[:'summary']
        @summary = attributes[:'summary']
      end
      
      if attributes[:'image_path']
        @image_path = attributes[:'image_path']
      end
      
      if attributes[:'image_url']
        @image_url = attributes[:'image_url']
      end
      
      if attributes[:'image_height']
        @image_height = attributes[:'image_height']
      end
      
      if attributes[:'image_width']
        @image_width = attributes[:'image_width']
      end
      
      if attributes[:'logo_url']
        @logo_url = attributes[:'logo_url']
      end
      
      if attributes[:'square_logo_url']
        @square_logo_url = attributes[:'square_logo_url']
      end
      
      if attributes[:'url']
        @url = attributes[:'url']
      end
      
      if attributes[:'external_url']
        @external_url = attributes[:'external_url']
      end
      
      if attributes[:'external_url_source']
        @external_url_source = attributes[:'external_url_source']
      end
      
      if attributes[:'external_url_type']
        @external_url_type = attributes[:'external_url_type']
      end
      
    end
  end
end
