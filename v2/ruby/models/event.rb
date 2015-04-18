
class Event
  attr_accessor :_id, :referrer, :original_url, :originator_email, :subject_email, :advisor_email, :originator_group_name, :newsletter
  # :internal => :external
  def self.attribute_map
    {
      :_id => :'_id',
      :referrer => :'referrer',
      :original_url => :'original_url',
      :originator_email => :'originator_email',
      :subject_email => :'subject_email',
      :advisor_email => :'advisor_email',
      :originator_group_name => :'originator_group_name',
      :newsletter => :'newsletter'
      
    }
  end

  def initialize(attributes = {})
    return if attributes.empty?
    # Morph attribute keys into undescored rubyish style
    
    if self.class.attribute_map[:"_id"]
      @_id = attributes["_id"]
    end
    
    if self.class.attribute_map[:"referrer"]
      @referrer = attributes["referrer"]
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
    
    if self.class.attribute_map[:"advisor_email"]
      @advisor_email = attributes["advisor_email"]
    end
    
    if self.class.attribute_map[:"originator_group_name"]
      @originator_group_name = attributes["originator_group_name"]
    end
    
    if self.class.attribute_map[:"newsletter"]
      @newsletter = attributes["newsletter"]
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
