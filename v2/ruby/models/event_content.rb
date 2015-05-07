
class EventContent
  attr_accessor :_id, :content_field, :content_id, :content_type, :created_at, :slug, :updated_at
  # :internal => :external
  def self.attribute_map
    {
      :_id => :'_id',
      :content_field => :'content_field',
      :content_id => :'content_id',
      :content_type => :'content_type',
      :created_at => :'created_at',
      :slug => :'slug',
      :updated_at => :'updated_at'
      
    }
  end

  def initialize(attributes = {})
    return if attributes.empty?
    # Morph attribute keys into undescored rubyish style
    
    if self.class.attribute_map[:"_id"]
      @_id = attributes["_id"]
    end
    
    if self.class.attribute_map[:"content_field"]
      @content_field = attributes["content_field"]
    end
    
    if self.class.attribute_map[:"content_id"]
      @content_id = attributes["content_id"]
    end
    
    if self.class.attribute_map[:"content_type"]
      @content_type = attributes["content_type"]
    end
    
    if self.class.attribute_map[:"created_at"]
      @created_at = attributes["created_at"]
    end
    
    if self.class.attribute_map[:"slug"]
      @slug = attributes["slug"]
    end
    
    if self.class.attribute_map[:"updated_at"]
      @updated_at = attributes["updated_at"]
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
