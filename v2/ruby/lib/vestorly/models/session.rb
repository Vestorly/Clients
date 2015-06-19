module Vestorly
  # 
  class Session < BaseObject
    attr_accessor :_id, :vestorly_auth, :new_user, :current_user, :settings
    # attribute mapping from ruby-style variable name to JSON key
    def self.attribute_map
      {
        
        # 
        :'_id' => :'_id',
        
        # 
        :'vestorly_auth' => :'vestorly-auth',
        
        # 
        :'new_user' => :'new_user',
        
        # 
        :'current_user' => :'current_user',
        
        # 
        :'settings' => :'settings'
        
      }
    end

    # attribute type
    def self.swagger_types
      {
        :'_id' => :'string',
        :'vestorly_auth' => :'string',
        :'new_user' => :'boolean',
        :'current_user' => :'User',
        :'settings' => :'Settings'
        
      }
    end

    def initialize(attributes = {})
      return if !attributes.is_a?(Hash) || attributes.empty?

      # convert string to symbol for hash key
      attributes = attributes.inject({}){|memo,(k,v)| memo[k.to_sym] = v; memo}

      
      if attributes[:'_id']
        @_id = attributes[:'_id']
      end
      
      if attributes[:'vestorly-auth']
        @vestorly_auth = attributes[:'vestorly-auth']
      end
      
      if attributes[:'new_user']
        @new_user = attributes[:'new_user']
      end
      
      if attributes[:'current_user']
        @current_user = attributes[:'current_user']
      end
      
      if attributes[:'settings']
        @settings = attributes[:'settings']
      end
      
    end
  end
end
