
class Events
  attr_accessor :events
  # :internal => :external
  def self.attribute_map
    {
      :events => :'events'
      
    }
  end

  def initialize(attributes = {})
    return if attributes.empty?
    # Morph attribute keys into undescored rubyish style
    
    if self.class.attribute_map[:"events"]
      if (value = attributes["events"]).is_a?(Array)
        @events = value.map{ |v| Event.new(v) }
      end
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
