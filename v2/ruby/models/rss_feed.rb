
class RSSFeed
  attr_accessor :_id, :name, :category, :url, :logo_url, :needs_sanitize
  # :internal => :external
  def self.attribute_map
    {
      :_id => :'_id',
      :name => :'name',
      :category => :'category',
      :url => :'url',
      :logo_url => :'logo_url',
      :needs_sanitize => :'needs_sanitize'
      
    }
  end

  def initialize(attributes = {})
    return if attributes.empty?
    # Morph attribute keys into undescored rubyish style
    
    if self.class.attribute_map[:"_id"]
      @_id = attributes["_id"]
    end
    
    if self.class.attribute_map[:"name"]
      @name = attributes["name"]
    end
    
    if self.class.attribute_map[:"category"]
      @category = attributes["category"]
    end
    
    if self.class.attribute_map[:"url"]
      @url = attributes["url"]
    end
    
    if self.class.attribute_map[:"logo_url"]
      @logo_url = attributes["logo_url"]
    end
    
    if self.class.attribute_map[:"needs_sanitize"]
      @needs_sanitize = attributes["needs_sanitize"]
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
