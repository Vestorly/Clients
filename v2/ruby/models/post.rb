
class Post
  attr_accessor :_id, :title, :body, :comment, :video, :img
  # :internal => :external
  def self.attribute_map
    {
      :_id => :'_id',
      :title => :'title',
      :body => :'body',
      :comment => :'comment',
      :video => :'video',
      :img => :'img'
      
    }
  end

  def initialize(attributes = {})
    return if attributes.empty?
    # Morph attribute keys into undescored rubyish style
    
    if self.class.attribute_map[:"_id"]
      @_id = attributes["_id"]
    end
    
    if self.class.attribute_map[:"title"]
      @title = attributes["title"]
    end
    
    if self.class.attribute_map[:"body"]
      @body = attributes["body"]
    end
    
    if self.class.attribute_map[:"comment"]
      @comment = attributes["comment"]
    end
    
    if self.class.attribute_map[:"video"]
      @video = attributes["video"]
    end
    
    if self.class.attribute_map[:"img"]
      @img = attributes["img"]
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
