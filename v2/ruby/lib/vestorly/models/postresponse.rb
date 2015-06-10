module Vestorly
  # 
  class Postresponse < BaseObject
    attr_accessor :post
    # attribute mapping from ruby-style variable name to JSON key
    def self.attribute_map
      {
        
        # 
        :'post' => :'post'
        
      }
    end

    # attribute type
    def self.swagger_types
      {
        :'post' => :'Post'
        
      }
    end

    def initialize(attributes = {})
      return if !attributes.is_a?(Hash) || attributes.empty?

      # convert string to symbol for hash key
      attributes = attributes.inject({}){|memo,(k,v)| memo[k.to_sym] = v; memo}

      
      if attributes[:'post']
        @post = attributes[:'post']
      end
      
    end
  end
end
