
class Article
  attr_accessor :_id, :created_at, :title, :body, :is_responsive, :is_proxy_needed, :is_mobile_proxy_needed, :needs_sanitize, :proxy_url, :topic, :suitability_score, :summary, :image_path, :image_url, :image_height, :image_width, :logo_url, :square_logo_url, :url, :external_url, :external_url_source, :external_url_type
  # :internal => :external
  def self.attribute_map
    {
      :_id => :'_id',
      :created_at => :'created_at',
      :title => :'title',
      :body => :'body',
      :is_responsive => :'is_responsive',
      :is_proxy_needed => :'is_proxy_needed',
      :is_mobile_proxy_needed => :'is_mobile_proxy_needed',
      :needs_sanitize => :'needs_sanitize',
      :proxy_url => :'proxy_url',
      :topic => :'topic',
      :suitability_score => :'suitability_score',
      :summary => :'summary',
      :image_path => :'image_path',
      :image_url => :'image_url',
      :image_height => :'image_height',
      :image_width => :'image_width',
      :logo_url => :'logo_url',
      :square_logo_url => :'square_logo_url',
      :url => :'url',
      :external_url => :'external_url',
      :external_url_source => :'external_url_source',
      :external_url_type => :'external_url_type'
      
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
    
    if self.class.attribute_map[:"body"]
      @body = attributes["body"]
    end
    
    if self.class.attribute_map[:"is_responsive"]
      @is_responsive = attributes["is_responsive"]
    end
    
    if self.class.attribute_map[:"is_proxy_needed"]
      @is_proxy_needed = attributes["is_proxy_needed"]
    end
    
    if self.class.attribute_map[:"is_mobile_proxy_needed"]
      @is_mobile_proxy_needed = attributes["is_mobile_proxy_needed"]
    end
    
    if self.class.attribute_map[:"needs_sanitize"]
      @needs_sanitize = attributes["needs_sanitize"]
    end
    
    if self.class.attribute_map[:"proxy_url"]
      @proxy_url = attributes["proxy_url"]
    end
    
    if self.class.attribute_map[:"topic"]
      @topic = attributes["topic"]
    end
    
    if self.class.attribute_map[:"suitability_score"]
      @suitability_score = attributes["suitability_score"]
    end
    
    if self.class.attribute_map[:"summary"]
      @summary = attributes["summary"]
    end
    
    if self.class.attribute_map[:"image_path"]
      @image_path = attributes["image_path"]
    end
    
    if self.class.attribute_map[:"image_url"]
      @image_url = attributes["image_url"]
    end
    
    if self.class.attribute_map[:"image_height"]
      @image_height = attributes["image_height"]
    end
    
    if self.class.attribute_map[:"image_width"]
      @image_width = attributes["image_width"]
    end
    
    if self.class.attribute_map[:"logo_url"]
      @logo_url = attributes["logo_url"]
    end
    
    if self.class.attribute_map[:"square_logo_url"]
      @square_logo_url = attributes["square_logo_url"]
    end
    
    if self.class.attribute_map[:"url"]
      @url = attributes["url"]
    end
    
    if self.class.attribute_map[:"external_url"]
      @external_url = attributes["external_url"]
    end
    
    if self.class.attribute_map[:"external_url_source"]
      @external_url_source = attributes["external_url_source"]
    end
    
    if self.class.attribute_map[:"external_url_type"]
      @external_url_type = attributes["external_url_type"]
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
