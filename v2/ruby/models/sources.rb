
class Sources
  attr_accessor :sources
  # :internal => :external
  def self.attribute_map
    {
      :sources => :'sources'
      
    }
  end

  def initialize(attributes = {})
    return if attributes.empty?
    # Morph attribute keys into undescored rubyish style
    
    if self.class.attribute_map[:"sources"]
      if (value = attributes["sources"]).is_a?(Array)
        @sources = value.map{ |v| Source.new(v) }
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
