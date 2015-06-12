module Vestorly
  # 
  class Memberresponse < BaseObject
    attr_accessor :member
    # attribute mapping from ruby-style variable name to JSON key
    def self.attribute_map
      {
        
        # 
        :'member' => :'member'
        
      }
    end

    # attribute type
    def self.swagger_types
      {
        :'member' => :'Member'
        
      }
    end

    def initialize(attributes = {})
      return if !attributes.is_a?(Hash) || attributes.empty?

      # convert string to symbol for hash key
      attributes = attributes.inject({}){|memo,(k,v)| memo[k.to_sym] = v; memo}

      
      if attributes[:'member']
        @member = attributes[:'member']
      end
      
    end
  end
end
