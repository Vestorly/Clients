
class EventInput
  attr_accessor :type, :referer, :original_url, :originator_email, :subject_email, :parent_event_id, :originator_id, :advisor_id, :subject_id, :event_content, :created_at
  # :internal => :external
  def self.attribute_map
    {
      :type => :'type',
      :referer => :'referer',
      :original_url => :'original_url',
      :originator_email => :'originator_email',
      :subject_email => :'subject_email',
      :parent_event_id => :'parent_event_id',
      :originator_id => :'originator_id',
      :advisor_id => :'advisor_id',
      :subject_id => :'subject_id',
      :event_content => :'event_content',
      :created_at => :'created_at'
      
    }
  end

  def initialize(attributes = {})
    return if attributes.empty?
    # Morph attribute keys into undescored rubyish style
    
    if self.class.attribute_map[:"type"]
      @type = attributes["type"]
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
    
    if self.class.attribute_map[:"subject_email"]
      @subject_email = attributes["subject_email"]
    end
    
    if self.class.attribute_map[:"parent_event_id"]
      @parent_event_id = attributes["parent_event_id"]
    end
    
    if self.class.attribute_map[:"originator_id"]
      @originator_id = attributes["originator_id"]
    end
    
    if self.class.attribute_map[:"advisor_id"]
      @advisor_id = attributes["advisor_id"]
    end
    
    if self.class.attribute_map[:"subject_id"]
      @subject_id = attributes["subject_id"]
    end
    
    if self.class.attribute_map[:"event_content"]
      @event_content = attributes["event_content"]
    end
    
    if self.class.attribute_map[:"created_at"]
      @created_at = attributes["created_at"]
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
