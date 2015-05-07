
class MemberReport
  attr_accessor :day, :event_count, :originator_group_id, :parent_originator_id, :source, :type, :year
  # :internal => :external
  def self.attribute_map
    {
      :day => :'day',
      :event_count => :'event_count',
      :originator_group_id => :'originator_group_id',
      :parent_originator_id => :'parent_originator_id',
      :source => :'source',
      :type => :'type',
      :year => :'year'
      
    }
  end

  def initialize(attributes = {})
    return if attributes.empty?
    # Morph attribute keys into undescored rubyish style
    
    if self.class.attribute_map[:"day"]
      @day = attributes["day"]
    end
    
    if self.class.attribute_map[:"event_count"]
      @event_count = attributes["event_count"]
    end
    
    if self.class.attribute_map[:"originator_group_id"]
      @originator_group_id = attributes["originator_group_id"]
    end
    
    if self.class.attribute_map[:"parent_originator_id"]
      @parent_originator_id = attributes["parent_originator_id"]
    end
    
    if self.class.attribute_map[:"source"]
      @source = attributes["source"]
    end
    
    if self.class.attribute_map[:"type"]
      @type = attributes["type"]
    end
    
    if self.class.attribute_map[:"year"]
      @year = attributes["year"]
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
