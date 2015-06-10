module Vestorly
  # 
  class Events < BaseObject
    attr_accessor :events
    # attribute mapping from ruby-style variable name to JSON key
    def self.attribute_map
      {
        
        # 
        :'events' => :'events'
        
      }
    end

    # attribute type
    def self.swagger_types
      {
        :'events' => :'array[Event]'
        
      }
    end

    def initialize(attributes = {})
      return if !attributes.is_a?(Hash) || attributes.empty?

      # convert string to symbol for hash key
      attributes = attributes.inject({}){|memo,(k,v)| memo[k.to_sym] = v; memo}

      
      if attributes[:'events']
        if (value = attributes[:'events']).is_a?(Array)
          @events = value
        end
      end
      
    end
  end
end
