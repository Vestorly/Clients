
class Newsletters
  attr_accessor :newletters
  # :internal => :external
  def self.attribute_map
    {
      :newletters => :'newletters'
      
    }
  end

  def initialize(attributes = {})
    return if attributes.empty?
    # Morph attribute keys into undescored rubyish style
    
    if self.class.attribute_map[:"newletters"]
      if (value = attributes["newletters"]).is_a?(Array)
        @newletters = value.map{ |v| Newsletter.new(v) }
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
