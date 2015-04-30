
class Article
  attr_accessor :_id, :created_at, :title, :open_calais_topics, :open_calais_keywords, :vestorly_topics, :categories, :summary, :unparsed_html, :logo_url, :image_url, :url, :external_url, :tags
  # :internal => :external
  def self.attribute_map
    {
      :_id => :'_id',
      :created_at => :'created_at',
      :title => :'title',
      :open_calais_topics => :'open_calais_topics',
      :open_calais_keywords => :'open_calais_keywords',
      :vestorly_topics => :'vestorly_topics',
      :categories => :'categories',
      :summary => :'summary',
      :unparsed_html => :'unparsed_html',
      :logo_url => :'logo_url',
      :image_url => :'image_url',
      :url => :'url',
      :external_url => :'external_url',
      :tags => :'tags'
      
    }
  end

  def initialize(attributes = {})
    return if attributes.empty?
    # Morph attribute keys into undescored rubyish style
    
    if self.class.attribute_map[:"_id"]
      @_id = attributes["_id"]
    end
    
    if self.class.attribute_map[:"created_at"]
      @created_at = attributes["created_at"]
    end
    
    if self.class.attribute_map[:"title"]
      @title = attributes["title"]
    end
    
    if self.class.attribute_map[:"open_calais_topics"]
      @open_calais_topics = attributes["open_calais_topics"]
    end
    
    if self.class.attribute_map[:"open_calais_keywords"]
      @open_calais_keywords = attributes["open_calais_keywords"]
    end
    
    if self.class.attribute_map[:"vestorly_topics"]
      @vestorly_topics = attributes["vestorly_topics"]
    end
    
    if self.class.attribute_map[:"categories"]
      @categories = attributes["categories"]
    end
    
    if self.class.attribute_map[:"summary"]
      @summary = attributes["summary"]
    end
    
    if self.class.attribute_map[:"unparsed_html"]
      @unparsed_html = attributes["unparsed_html"]
    end
    
    if self.class.attribute_map[:"logo_url"]
      @logo_url = attributes["logo_url"]
    end
    
    if self.class.attribute_map[:"image_url"]
      @image_url = attributes["image_url"]
    end
    
    if self.class.attribute_map[:"url"]
      @url = attributes["url"]
    end
    
    if self.class.attribute_map[:"external_url"]
      @external_url = attributes["external_url"]
    end
    
    if self.class.attribute_map[:"tags"]
      @tags = attributes["tags"]
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
