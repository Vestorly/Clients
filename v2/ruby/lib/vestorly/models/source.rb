module Vestorly
  # 
  class Source < BaseObject
    attr_accessor :_id, :name, :url, :logo_url, :enabled, :custom_rss_feed, :rss_publisher
    # attribute mapping from ruby-style variable name to JSON key
    def self.attribute_map
      {
        
        # 
        :'_id' => :'_id',
        
        # 
        :'name' => :'name',
        
        # 
        :'url' => :'url',
        
        # 
        :'logo_url' => :'logo_url',
        
        # 
        :'enabled' => :'enabled',
        
        # 
        :'custom_rss_feed' => :'custom_rss_feed',
        
        # 
        :'rss_publisher' => :'rss_publisher'
        
      }
    end

    # attribute type
    def self.swagger_types
      {
        :'_id' => :'string',
        :'name' => :'string',
        :'url' => :'string',
        :'logo_url' => :'string',
        :'enabled' => :'boolean',
        :'custom_rss_feed' => :'boolean',
        :'rss_publisher' => :'string'
        
      }
    end

    def initialize(attributes = {})
      return if !attributes.is_a?(Hash) || attributes.empty?

      # convert string to symbol for hash key
      attributes = attributes.inject({}){|memo,(k,v)| memo[k.to_sym] = v; memo}

      
      if attributes[:'_id']
        @_id = attributes[:'_id']
      end
      
      if attributes[:'name']
        @name = attributes[:'name']
      end
      
      if attributes[:'url']
        @url = attributes[:'url']
      end
      
      if attributes[:'logo_url']
        @logo_url = attributes[:'logo_url']
      end
      
      if attributes[:'enabled']
        @enabled = attributes[:'enabled']
      end
      
      if attributes[:'custom_rss_feed']
        @custom_rss_feed = attributes[:'custom_rss_feed']
      end
      
      if attributes[:'rss_publisher']
        @rss_publisher = attributes[:'rss_publisher']
      end
      
    end
  end
end
