module Vestorly
  # 
  class Groupresponse < BaseObject
    attr_accessor :group
    # attribute mapping from ruby-style variable name to JSON key
    def self.attribute_map
      {
        
        # 
        :'group' => :'group'
        
      }
    end

    # attribute type
    def self.swagger_types
      {
        :'group' => :'Group'
        
      }
    end

    def initialize(attributes = {})
      return if !attributes.is_a?(Hash) || attributes.empty?

      # convert string to symbol for hash key
      attributes = attributes.inject({}){|memo,(k,v)| memo[k.to_sym] = v; memo}

      
      if attributes[:'group']
        @group = attributes[:'group']
      end
      
    end
  end
end
