module Vestorly
  # 
  class EventInput < BaseObject
    attr_accessor :type, :referer, :original_url, :originator_email, :subject_email, :parent_event_id, :originator_id, :advisor_id, :subject_id, :event_content, :created_at
    # attribute mapping from ruby-style variable name to JSON key
    def self.attribute_map
      {
        
        # 
        :'type' => :'type',
        
        # 
        :'referer' => :'referer',
        
        # 
        :'original_url' => :'original_url',
        
        # 
        :'originator_email' => :'originator_email',
        
        # 
        :'subject_email' => :'subject_email',
        
        # 
        :'parent_event_id' => :'parent_event_id',
        
        # 
        :'originator_id' => :'originator_id',
        
        # 
        :'advisor_id' => :'advisor_id',
        
        # 
        :'subject_id' => :'subject_id',
        
        # 
        :'event_content' => :'event_content',
        
        # 
        :'created_at' => :'created_at'
        
      }
    end

    # attribute type
    def self.swagger_types
      {
        :'type' => :'string',
        :'referer' => :'string',
        :'original_url' => :'string',
        :'originator_email' => :'string',
        :'subject_email' => :'string',
        :'parent_event_id' => :'string',
        :'originator_id' => :'string',
        :'advisor_id' => :'string',
        :'subject_id' => :'string',
        :'event_content' => :'EventContent',
        :'created_at' => :'string'
        
      }
    end

    def initialize(attributes = {})
      return if !attributes.is_a?(Hash) || attributes.empty?

      # convert string to symbol for hash key
      attributes = attributes.inject({}){|memo,(k,v)| memo[k.to_sym] = v; memo}

      
      if attributes[:'type']
        @type = attributes[:'type']
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
      
      if attributes[:'subject_email']
        @subject_email = attributes[:'subject_email']
      end
      
      if attributes[:'parent_event_id']
        @parent_event_id = attributes[:'parent_event_id']
      end
      
      if attributes[:'originator_id']
        @originator_id = attributes[:'originator_id']
      end
      
      if attributes[:'advisor_id']
        @advisor_id = attributes[:'advisor_id']
      end
      
      if attributes[:'subject_id']
        @subject_id = attributes[:'subject_id']
      end
      
      if attributes[:'event_content']
        @event_content = attributes[:'event_content']
      end
      
      if attributes[:'created_at']
        @created_at = attributes[:'created_at']
      end
      
    end
  end
end
