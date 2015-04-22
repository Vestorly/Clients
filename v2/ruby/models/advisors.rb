
class Advisors
  attr_accessor :advisors
  # :internal => :external
  def self.attribute_map
    {
      :advisors => :'advisors'
      
    }
  end

  def initialize(attributes = {})
    return if attributes.empty?
    # Morph attribute keys into undescored rubyish style
    
    if self.class.attribute_map[:"advisors"]
      if (value = attributes["advisors"]).is_a?(Array)
        @advisors = value.map{ |v| Advisor.new(v) }
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
