
class MemberEvents
  attr_accessor :members, :member_events
  # :internal => :external
  def self.attribute_map
    {
      :members => :'members',
      :member_events => :'member_events'
      
    }
  end

  def initialize(attributes = {})
    return if attributes.empty?
    # Morph attribute keys into undescored rubyish style
    
    if self.class.attribute_map[:"members"]
      if (value = attributes["members"]).is_a?(Array)
        @members = value.map{ |v| TruncatedMember.new(v) }
      end
    end
    
    if self.class.attribute_map[:"member_events"]
      if (value = attributes["member_events"]).is_a?(Array)
        @member_events = value.map{ |v| MemberEvent.new(v) }
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
