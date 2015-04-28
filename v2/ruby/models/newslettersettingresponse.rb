
class Newslettersettingresponse
  attr_accessor :newsletter_setting
  # :internal => :external
  def self.attribute_map
    {
      :newsletter_setting => :'newsletter_setting'
      
    }
  end

  def initialize(attributes = {})
    return if attributes.empty?
    # Morph attribute keys into undescored rubyish style
    
    if self.class.attribute_map[:"newsletter_setting"]
      @newsletter_setting = attributes["newsletter_setting"]
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
