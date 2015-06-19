module Vestorly
  # 
  class MemberEvent < BaseObject
    attr_accessor :_id, :created_at, :type, :source, :referer, :original_url, :originator_email, :originator_name, :parent_originator_id, :parent_event_id, :originator_type, :originator_group_id, :event_type, :event_source, :content_url, :event_date, :username, :member_id, :originator_id, :subject_id
    # attribute mapping from ruby-style variable name to JSON key
    def self.attribute_map
      {
        
        # 
        :'_id' => :'_id',
        
        # 
        :'created_at' => :'created_at',
        
        # 
        :'type' => :'type',
        
        # 
        :'source' => :'source',
        
        # 
        :'referer' => :'referer',
        
        # 
        :'original_url' => :'original_url',
        
        # 
        :'originator_email' => :'originator_email',
        
        # 
        :'originator_name' => :'originator_name',
        
        # 
        :'parent_originator_id' => :'parent_originator_id',
        
        # 
        :'parent_event_id' => :'parent_event_id',
        
        # 
        :'originator_type' => :'originator_type',
        
        # 
        :'originator_group_id' => :'originator_group_id',
        
        # 
        :'event_type' => :'event_type',
        
        # 
        :'event_source' => :'event_source',
        
        # 
        :'content_url' => :'content_url',
        
        # 
        :'event_date' => :'event_date',
        
        # 
        :'username' => :'username',
        
        # 
        :'member_id' => :'member_id',
        
        # 
        :'originator_id' => :'originator_id',
        
        # 
        :'subject_id' => :'subject_id'
        
      }
    end

    # attribute type
    def self.swagger_types
      {
        :'_id' => :'string',
        :'created_at' => :'string',
        :'type' => :'string',
        :'source' => :'string',
        :'referer' => :'string',
        :'original_url' => :'string',
        :'originator_email' => :'string',
        :'originator_name' => :'string',
        :'parent_originator_id' => :'string',
        :'parent_event_id' => :'string',
        :'originator_type' => :'string',
        :'originator_group_id' => :'string',
        :'event_type' => :'string',
        :'event_source' => :'string',
        :'content_url' => :'string',
        :'event_date' => :'string',
        :'username' => :'string',
        :'member_id' => :'string',
        :'originator_id' => :'string',
        :'subject_id' => :'string'
        
      }
    end

    def initialize(attributes = {})
      return if !attributes.is_a?(Hash) || attributes.empty?

      # convert string to symbol for hash key
      attributes = attributes.inject({}){|memo,(k,v)| memo[k.to_sym] = v; memo}

      
      if attributes[:'_id']
        @_id = attributes[:'_id']
      end
      
      if attributes[:'created_at']
        @created_at = attributes[:'created_at']
      end
      
      if attributes[:'type']
        @type = attributes[:'type']
      end
      
      if attributes[:'source']
        @source = attributes[:'source']
      end
      
      if attributes[:'referer']
        @referer = attributes[:'referer']
      end
      
      if attributes[:'original_url']
        @original_url = attributes[:'original_url']
      end
      
      if attributes[:'originator_email']
        @originator_email = attributes[:'originator_email']
      end
      
      if attributes[:'originator_name']
        @originator_name = attributes[:'originator_name']
      end
      
      if attributes[:'parent_originator_id']
        @parent_originator_id = attributes[:'parent_originator_id']
      end
      
      if attributes[:'parent_event_id']
        @parent_event_id = attributes[:'parent_event_id']
      end
      
      if attributes[:'originator_type']
        @originator_type = attributes[:'originator_type']
      end
      
      if attributes[:'originator_group_id']
        @originator_group_id = attributes[:'originator_group_id']
      end
      
      if attributes[:'event_type']
        @event_type = attributes[:'event_type']
      end
      
      if attributes[:'event_source']
        @event_source = attributes[:'event_source']
      end
      
      if attributes[:'content_url']
        @content_url = attributes[:'content_url']
      end
      
      if attributes[:'event_date']
        @event_date = attributes[:'event_date']
      end
      
      if attributes[:'username']
        @username = attributes[:'username']
      end
      
      if attributes[:'member_id']
        @member_id = attributes[:'member_id']
      end
      
      if attributes[:'originator_id']
        @originator_id = attributes[:'originator_id']
      end
      
      if attributes[:'subject_id']
        @subject_id = attributes[:'subject_id']
      end
      
    end
  end
end
