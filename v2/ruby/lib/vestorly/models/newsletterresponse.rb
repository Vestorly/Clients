module Vestorly
  # 
  class Newsletterresponse < BaseObject
    attr_accessor :newsletter
    # attribute mapping from ruby-style variable name to JSON key
    def self.attribute_map
      {
        
        # 
        :'newsletter' => :'newsletter'
        
      }
    end

    # attribute type
    def self.swagger_types
      {
        :'newsletter' => :'Newsletter'
        
      }
    end

    def initialize(attributes = {})
      return if !attributes.is_a?(Hash) || attributes.empty?

      # convert string to symbol for hash key
      attributes = attributes.inject({}){|memo,(k,v)| memo[k.to_sym] = v; memo}

      
      if attributes[:'newsletter']
        @newsletter = attributes[:'newsletter']
      end
      
    end
  end
end
