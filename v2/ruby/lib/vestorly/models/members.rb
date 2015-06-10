module Vestorly
  # 
  class Members < BaseObject
    attr_accessor :members, :more_results, :meta
    # attribute mapping from ruby-style variable name to JSON key
    def self.attribute_map
      {
        
        # 
        :'members' => :'members',
        
        # 
        :'more_results' => :'more_results',
        
        # 
        :'meta' => :'meta'
        
      }
    end

    # attribute type
    def self.swagger_types
      {
        :'members' => :'array[Member]',
        :'more_results' => :'boolean',
        :'meta' => :'Meta'
        
      }
    end

    def initialize(attributes = {})
      return if !attributes.is_a?(Hash) || attributes.empty?

      # convert string to symbol for hash key
      attributes = attributes.inject({}){|memo,(k,v)| memo[k.to_sym] = v; memo}

      
      if attributes[:'members']
        if (value = attributes[:'members']).is_a?(Array)
          @members = value
        end
      end
      
      if attributes[:'more_results']
        @more_results = attributes[:'more_results']
      end
      
      if attributes[:'meta']
        @meta = attributes[:'meta']
      end
      
    end
  end
end
