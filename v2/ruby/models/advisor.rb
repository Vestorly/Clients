
class Advisor
  attr_accessor :client_only, :img_compressed, :img_changed
  # :internal => :external
  def self.attribute_map
    {
      :client_only => :'client_only',
      :img_compressed => :'img_compressed',
      :img_changed => :'img_changed'
      
    }
  end

  def initialize(attributes = {})
    return if attributes.empty?
    # Morph attribute keys into undescored rubyish style
    
    if self.class.attribute_map[:"client_only"]
      @client_only = attributes["client_only"]
    end
    
    if self.class.attribute_map[:"img_compressed"]
      @img_compressed = attributes["img_compressed"]
    end
    
    if self.class.attribute_map[:"img_changed"]
      @img_changed = attributes["img_changed"]
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
