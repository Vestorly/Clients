module Vestorly
  # 
  class Articleresponse < BaseObject
    attr_accessor :article
    # attribute mapping from ruby-style variable name to JSON key
    def self.attribute_map
      {
        
        # 
        :'article' => :'article'
        
      }
    end

    # attribute type
    def self.swagger_types
      {
        :'article' => :'Article'
        
      }
    end

    def initialize(attributes = {})
      return if !attributes.is_a?(Hash) || attributes.empty?

      # convert string to symbol for hash key
      attributes = attributes.inject({}){|memo,(k,v)| memo[k.to_sym] = v; memo}

      
      if attributes[:'article']
        @article = attributes[:'article']
      end
      
    end
  end
end
