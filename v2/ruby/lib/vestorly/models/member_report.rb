module Vestorly
  # 
  class MemberReport < BaseObject
    attr_accessor :day, :event_count, :originator_group_id, :parent_originator_id, :source, :type, :year
    # attribute mapping from ruby-style variable name to JSON key
    def self.attribute_map
      {
        
        # 
        :'day' => :'day',
        
        # 
        :'event_count' => :'event_count',
        
        # 
        :'originator_group_id' => :'originator_group_id',
        
        # 
        :'parent_originator_id' => :'parent_originator_id',
        
        # 
        :'source' => :'source',
        
        # 
        :'type' => :'type',
        
        # 
        :'year' => :'year'
        
      }
    end

    # attribute type
    def self.swagger_types
      {
        :'day' => :'int',
        :'event_count' => :'int',
        :'originator_group_id' => :'string',
        :'parent_originator_id' => :'string',
        :'source' => :'string',
        :'type' => :'string',
        :'year' => :'int'
        
      }
    end

    def initialize(attributes = {})
      return if !attributes.is_a?(Hash) || attributes.empty?

      # convert string to symbol for hash key
      attributes = attributes.inject({}){|memo,(k,v)| memo[k.to_sym] = v; memo}

      
      if attributes[:'day']
        @day = attributes[:'day']
      end
      
      if attributes[:'event_count']
        @event_count = attributes[:'event_count']
      end
      
      if attributes[:'originator_group_id']
        @originator_group_id = attributes[:'originator_group_id']
      end
      
      if attributes[:'parent_originator_id']
        @parent_originator_id = attributes[:'parent_originator_id']
      end
      
      if attributes[:'source']
        @source = attributes[:'source']
      end
      
      if attributes[:'type']
        @type = attributes[:'type']
      end
      
      if attributes[:'year']
        @year = attributes[:'year']
      end
      
    end
  end
end
