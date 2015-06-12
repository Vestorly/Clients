module Vestorly
  # 
  class Articles < BaseObject
    attr_accessor :articles
    # attribute mapping from ruby-style variable name to JSON key
    def self.attribute_map
      {
        
        # 
        :'articles' => :'articles'
        
      }
    end

    # attribute type
    def self.swagger_types
      {
        :'articles' => :'array[Article]'
        
      }
    end

    def initialize(attributes = {})
      return if !attributes.is_a?(Hash) || attributes.empty?

      # convert string to symbol for hash key
      attributes = attributes.inject({}){|memo,(k,v)| memo[k.to_sym] = v; memo}

      
      if attributes[:'articles']
        if (value = attributes[:'articles']).is_a?(Array)
          @articles = value
        end
      end
      
    end
  end
end
