
class Groups
  attr_accessor :groups
  # :internal => :external
  def self.attribute_map
    {
      :groups => :'groups'
      
    }
  end

  def initialize(attributes = {})
    return if attributes.empty?
    # Morph attribute keys into undescored rubyish style
    
    if self.class.attribute_map[:"groups"]
      if (value = attributes["groups"]).is_a?(Array)
        @groups = value.map{ |v| Group.new(v) }
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
