module Vestorly
  # 
  class MemberEvents < BaseObject
    attr_accessor :members, :member_events
    # attribute mapping from ruby-style variable name to JSON key
    def self.attribute_map
      {
        
        # 
        :'members' => :'members',
        
        # 
        :'member_events' => :'member_events'
        
      }
    end

    # attribute type
    def self.swagger_types
      {
        :'members' => :'array[TruncatedMember]',
        :'member_events' => :'array[MemberEvent]'
        
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
      
      if attributes[:'member_events']
        if (value = attributes[:'member_events']).is_a?(Array)
          @member_events = value
        end
      end
      
    end
  end
end
