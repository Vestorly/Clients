
class Advisor
  attr_accessor :new_user
  # :internal => :external
  def self.attribute_map
    {
      :new_user => :'new_user'
      
    }
  end

  def initialize(attributes = {})
    return if attributes.empty?
    # Morph attribute keys into undescored rubyish style
    
    if self.class.attribute_map[:"new_user"]
      @new_user = attributes["new_user"]
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
