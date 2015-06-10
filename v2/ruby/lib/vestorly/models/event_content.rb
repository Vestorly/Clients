module Vestorly
  # 
  class EventContent < BaseObject
    attr_accessor :_id, :content_field, :content_id, :content_type, :created_at, :slug, :updated_at
    # attribute mapping from ruby-style variable name to JSON key
    def self.attribute_map
      {
        
        # Mongo id of event
        :'_id' => :'_id',
        
        # 
        :'content_field' => :'content_field',
        
        # 
        :'content_id' => :'content_id',
        
        # 
        :'content_type' => :'content_type',
        
        # 
        :'created_at' => :'created_at',
        
        # 
        :'slug' => :'slug',
        
        # 
        :'updated_at' => :'updated_at'
        
      }
    end

    # attribute type
    def self.swagger_types
      {
        :'_id' => :'string',
        :'content_field' => :'string',
        :'content_id' => :'string',
        :'content_type' => :'string',
        :'created_at' => :'string',
        :'slug' => :'string',
        :'updated_at' => :'string'
        
      }
    end

    def initialize(attributes = {})
      return if !attributes.is_a?(Hash) || attributes.empty?

      # convert string to symbol for hash key
      attributes = attributes.inject({}){|memo,(k,v)| memo[k.to_sym] = v; memo}

      
      if attributes[:'_id']
        @_id = attributes[:'_id']
      end
      
      if attributes[:'content_field']
        @content_field = attributes[:'content_field']
      end
      
      if attributes[:'content_id']
        @content_id = attributes[:'content_id']
      end
      
      if attributes[:'content_type']
        @content_type = attributes[:'content_type']
      end
      
      if attributes[:'created_at']
        @created_at = attributes[:'created_at']
      end
      
      if attributes[:'slug']
        @slug = attributes[:'slug']
      end
      
      if attributes[:'updated_at']
        @updated_at = attributes[:'updated_at']
      end
      
    end
  end
end
