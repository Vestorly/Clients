
class PostInput
  attr_accessor :_id, :title, :post_date, :body, :comment, :client_only, :attachment, :video, :img, :image_url, :img_compressed, :img_changed, :topic
  # :internal => :external
  def self.attribute_map
    {
      :_id => :'_id',
      :title => :'title',
      :post_date => :'post_date',
      :body => :'body',
      :comment => :'comment',
      :client_only => :'client_only',
      :attachment => :'attachment',
      :video => :'video',
      :img => :'img',
      :image_url => :'image_url',
      :img_compressed => :'img_compressed',
      :img_changed => :'img_changed',
      :topic => :'topic'
      
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
    
    if self.class.attribute_map[:"post_date"]
      @post_date = attributes["post_date"]
    end
    
    if self.class.attribute_map[:"body"]
      @body = attributes["body"]
    end
    
    if self.class.attribute_map[:"comment"]
      @comment = attributes["comment"]
    end
    
    if self.class.attribute_map[:"client_only"]
      @client_only = attributes["client_only"]
    end
    
    if self.class.attribute_map[:"attachment"]
      @attachment = attributes["attachment"]
    end
    
    if self.class.attribute_map[:"video"]
      @video = attributes["video"]
    end
    
    if self.class.attribute_map[:"img"]
      @img = attributes["img"]
    end
    
    if self.class.attribute_map[:"image_url"]
      @image_url = attributes["image_url"]
    end
    
    if self.class.attribute_map[:"img_compressed"]
      @img_compressed = attributes["img_compressed"]
    end
    
    if self.class.attribute_map[:"img_changed"]
      @img_changed = attributes["img_changed"]
    end
    
    if self.class.attribute_map[:"topic"]
      @topic = attributes["topic"]
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
