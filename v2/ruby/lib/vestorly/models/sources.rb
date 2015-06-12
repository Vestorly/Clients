module Vestorly
  # 
  class Sources < BaseObject
    attr_accessor :sources
    # attribute mapping from ruby-style variable name to JSON key
    def self.attribute_map
      {
        
        # 
        :'sources' => :'sources'
        
      }
    end

    # attribute type
    def self.swagger_types
      {
        :'sources' => :'array[Source]'
        
      }
    end

    def initialize(attributes = {})
      return if !attributes.is_a?(Hash) || attributes.empty?

      # convert string to symbol for hash key
      attributes = attributes.inject({}){|memo,(k,v)| memo[k.to_sym] = v; memo}

      
      if attributes[:'sources']
        if (value = attributes[:'sources']).is_a?(Array)
          @sources = value
        end
      end
      
    end
  end
end
