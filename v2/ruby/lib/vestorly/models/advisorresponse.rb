module Vestorly
  # 
  class Advisorresponse < BaseObject
    attr_accessor :advisor
    # attribute mapping from ruby-style variable name to JSON key
    def self.attribute_map
      {
        
        # 
        :'advisor' => :'advisor'
        
      }
    end

    # attribute type
    def self.swagger_types
      {
        :'advisor' => :'Advisor'
        
      }
    end

    def initialize(attributes = {})
      return if !attributes.is_a?(Hash) || attributes.empty?

      # convert string to symbol for hash key
      attributes = attributes.inject({}){|memo,(k,v)| memo[k.to_sym] = v; memo}

      
      if attributes[:'advisor']
        @advisor = attributes[:'advisor']
      end
      
    end
  end
end
