module Vestorly
  # 
  class Posts < BaseObject
    attr_accessor :posts
    # attribute mapping from ruby-style variable name to JSON key
    def self.attribute_map
      {
        
        # 
        :'posts' => :'posts'
        
      }
    end

    # attribute type
    def self.swagger_types
      {
        :'posts' => :'array[Post]'
        
      }
    end

    def initialize(attributes = {})
      return if !attributes.is_a?(Hash) || attributes.empty?

      # convert string to symbol for hash key
      attributes = attributes.inject({}){|memo,(k,v)| memo[k.to_sym] = v; memo}

      
      if attributes[:'posts']
        if (value = attributes[:'posts']).is_a?(Array)
          @posts = value
        end
      end
      
    end
  end
end
