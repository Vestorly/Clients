module Vestorly
  # 
  class NewsletterInput < BaseObject
    attr_accessor :is_sent, :is_default, :click_count, :unique_click_count, :total_click_count
    # attribute mapping from ruby-style variable name to JSON key
    def self.attribute_map
      {
        
        # 
        :'is_sent' => :'is_sent',
        
        # 
        :'is_default' => :'is_default',
        
        # 
        :'click_count' => :'click_count',
        
        # 
        :'unique_click_count' => :'unique_click_count',
        
        # 
        :'total_click_count' => :'total_click_count'
        
      }
    end

    # attribute type
    def self.swagger_types
      {
        :'is_sent' => :'boolean',
        :'is_default' => :'boolean',
        :'click_count' => :'int',
        :'unique_click_count' => :'int',
        :'total_click_count' => :'int'
        
      }
    end

    def initialize(attributes = {})
      return if !attributes.is_a?(Hash) || attributes.empty?

      # convert string to symbol for hash key
      attributes = attributes.inject({}){|memo,(k,v)| memo[k.to_sym] = v; memo}

      
      if attributes[:'is_sent']
        @is_sent = attributes[:'is_sent']
      end
      
      if attributes[:'is_default']
        @is_default = attributes[:'is_default']
      end
      
      if attributes[:'click_count']
        @click_count = attributes[:'click_count']
      end
      
      if attributes[:'unique_click_count']
        @unique_click_count = attributes[:'unique_click_count']
      end
      
      if attributes[:'total_click_count']
        @total_click_count = attributes[:'total_click_count']
      end
      
    end
  end
end
