module Vestorly
  # 
  class Eventresponse < BaseObject
    attr_accessor :event
    # attribute mapping from ruby-style variable name to JSON key
    def self.attribute_map
      {
        
        # 
        :'event' => :'event'
        
      }
    end

    # attribute type
    def self.swagger_types
      {
        :'event' => :'Event'
        
      }
    end

    def initialize(attributes = {})
      return if !attributes.is_a?(Hash) || attributes.empty?

      # convert string to symbol for hash key
      attributes = attributes.inject({}){|memo,(k,v)| memo[k.to_sym] = v; memo}

      
      if attributes[:'event']
        @event = attributes[:'event']
      end
      
    end
  end
end
