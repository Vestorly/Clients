
class Members
  attr_accessor :members
  # :internal => :external
  def self.attribute_map
    {
      :members => :'members'
      
    }
  end

  def initialize(attributes = {})
    return if attributes.empty?
    # Morph attribute keys into undescored rubyish style
    
    if self.class.attribute_map[:"members"]
      if (value = attributes["members"]).is_a?(Array)
        @members = value.map{ |v| Member.new(v) }
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
