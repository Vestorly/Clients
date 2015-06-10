module Vestorly
  # 
  class Sourceresponse < BaseObject
    attr_accessor :source
    # attribute mapping from ruby-style variable name to JSON key
    def self.attribute_map
      {
        
        # 
        :'source' => :'source'
        
      }
    end

    # attribute type
    def self.swagger_types
      {
        :'source' => :'Source'
        
      }
    end

    def initialize(attributes = {})
      return if !attributes.is_a?(Hash) || attributes.empty?

      # convert string to symbol for hash key
      attributes = attributes.inject({}){|memo,(k,v)| memo[k.to_sym] = v; memo}

      
      if attributes[:'source']
        @source = attributes[:'source']
      end
      
    end
  end
end
