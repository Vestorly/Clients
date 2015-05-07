
class MemberEvent
  attr_accessor :_id, :created_at, :type, :source, :referer, :original_url, :originator_email, :originator_name, :parent_originator_id, :parent_event_id, :originator_type, :originator_group_id, :event_type, :event_source, :content_url, :event_date, :username, :member_id, :originator_id, :subject_id
  # :internal => :external
  def self.attribute_map
    {
      :_id => :'_id',
      :created_at => :'created_at',
      :type => :'type',
      :source => :'source',
      :referer => :'referer',
      :original_url => :'original_url',
      :originator_email => :'originator_email',
      :originator_name => :'originator_name',
      :parent_originator_id => :'parent_originator_id',
      :parent_event_id => :'parent_event_id',
      :originator_type => :'originator_type',
      :originator_group_id => :'originator_group_id',
      :event_type => :'event_type',
      :event_source => :'event_source',
      :content_url => :'content_url',
      :event_date => :'event_date',
      :username => :'username',
      :member_id => :'member_id',
      :originator_id => :'originator_id',
      :subject_id => :'subject_id'
      
    }
  end

  def initialize(attributes = {})
    return if attributes.empty?
    # Morph attribute keys into undescored rubyish style
    
    if self.class.attribute_map[:"_id"]
      @_id = attributes["_id"]
    end
    
    if self.class.attribute_map[:"created_at"]
      @created_at = attributes["created_at"]
    end
    
    if self.class.attribute_map[:"type"]
      @type = attributes["type"]
    end
    
    if self.class.attribute_map[:"source"]
      @source = attributes["source"]
    end
    
    if self.class.attribute_map[:"referer"]
      @referer = attributes["referer"]
    end
    
    if self.class.attribute_map[:"original_url"]
      @original_url = attributes["original_url"]
    end
    
    if self.class.attribute_map[:"originator_email"]
      @originator_email = attributes["originator_email"]
    end
    
    if self.class.attribute_map[:"originator_name"]
      @originator_name = attributes["originator_name"]
    end
    
    if self.class.attribute_map[:"parent_originator_id"]
      @parent_originator_id = attributes["parent_originator_id"]
    end
    
    if self.class.attribute_map[:"parent_event_id"]
      @parent_event_id = attributes["parent_event_id"]
    end
    
    if self.class.attribute_map[:"originator_type"]
      @originator_type = attributes["originator_type"]
    end
    
    if self.class.attribute_map[:"originator_group_id"]
      @originator_group_id = attributes["originator_group_id"]
    end
    
    if self.class.attribute_map[:"event_type"]
      @event_type = attributes["event_type"]
    end
    
    if self.class.attribute_map[:"event_source"]
      @event_source = attributes["event_source"]
    end
    
    if self.class.attribute_map[:"content_url"]
      @content_url = attributes["content_url"]
    end
    
    if self.class.attribute_map[:"event_date"]
      @event_date = attributes["event_date"]
    end
    
    if self.class.attribute_map[:"username"]
      @username = attributes["username"]
    end
    
    if self.class.attribute_map[:"member_id"]
      @member_id = attributes["member_id"]
    end
    
    if self.class.attribute_map[:"originator_id"]
      @originator_id = attributes["originator_id"]
    end
    
    if self.class.attribute_map[:"subject_id"]
      @subject_id = attributes["subject_id"]
    end
    
  end

  def to_body
    body = {}
    self.class.attribute_map.each_pair do |key, value|
      body[value] = self.send(key) unless self.send(key).nil?
    end
    body
  end
end
