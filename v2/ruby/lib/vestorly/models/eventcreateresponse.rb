module Vestorly
  # 
  class Eventcreateresponse < BaseObject
    attr_accessor :meta
    # attribute mapping from ruby-style variable name to JSON key
    def self.attribute_map
      {
        
        # 
        :'meta' => :'meta'
        
      }
    end

    # attribute type
    def self.swagger_types
      {
        :'meta' => :'Meta'
        
      }
    end

    def initialize(attributes = {})
      return if !attributes.is_a?(Hash) || attributes.empty?

      # convert string to symbol for hash key
      attributes = attributes.inject({}){|memo,(k,v)| memo[k.to_sym] = v; memo}

      
      if attributes[:'meta']
        @meta = attributes[:'meta']
      end
      
    end
  end
end
