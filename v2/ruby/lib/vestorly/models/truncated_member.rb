module Vestorly
  # 
  class TruncatedMember < BaseObject
    attr_accessor :_id, :first_name, :last_name, :email, :picture_url, :added_on
    # attribute mapping from ruby-style variable name to JSON key
    def self.attribute_map
      {
        
        # 
        :'_id' => :'_id',
        
        # 
        :'first_name' => :'first_name',
        
        # 
        :'last_name' => :'last_name',
        
        # 
        :'email' => :'email',
        
        # 
        :'picture_url' => :'picture_url',
        
        # 
        :'added_on' => :'added_on'
        
      }
    end

    # attribute type
    def self.swagger_types
      {
        :'_id' => :'string',
        :'first_name' => :'string',
        :'last_name' => :'string',
        :'email' => :'string',
        :'picture_url' => :'string',
        :'added_on' => :'string'
        
      }
    end

    def initialize(attributes = {})
      return if !attributes.is_a?(Hash) || attributes.empty?

      # convert string to symbol for hash key
      attributes = attributes.inject({}){|memo,(k,v)| memo[k.to_sym] = v; memo}

      
      if attributes[:'_id']
        @_id = attributes[:'_id']
      end
      
      if attributes[:'first_name']
        @first_name = attributes[:'first_name']
      end
      
      if attributes[:'last_name']
        @last_name = attributes[:'last_name']
      end
      
      if attributes[:'email']
        @email = attributes[:'email']
      end
      
      if attributes[:'picture_url']
        @picture_url = attributes[:'picture_url']
      end
      
      if attributes[:'added_on']
        @added_on = attributes[:'added_on']
      end
      
    end
  end
end
