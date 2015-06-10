module Vestorly
  # 
  class Groups < BaseObject
    attr_accessor :groups
    # attribute mapping from ruby-style variable name to JSON key
    def self.attribute_map
      {
        
        # 
        :'groups' => :'groups'
        
      }
    end

    # attribute type
    def self.swagger_types
      {
        :'groups' => :'array[Group]'
        
      }
    end

    def initialize(attributes = {})
      return if !attributes.is_a?(Hash) || attributes.empty?

      # convert string to symbol for hash key
      attributes = attributes.inject({}){|memo,(k,v)| memo[k.to_sym] = v; memo}

      
      if attributes[:'groups']
        if (value = attributes[:'groups']).is_a?(Array)
          @groups = value
        end
      end
      
    end
  end
end
