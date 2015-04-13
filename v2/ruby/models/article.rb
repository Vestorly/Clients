
class Article
  attr_accessor :_id, :url, :title, :open_calais_topics, :open_calais_keywords, :categories, :summary, :unparsed_html, :parsed_html, :content, :vestorly_topics, :override_topic, :published_at, :original_image_url, :small_image_url, :large_image_url, :img, :webpage_mobile_image_url, :webpage_tablet_image_url, :rss_feed_url, :rss_feed_category, :rss_feed_logo_url, :needs_sanitize, :is_responsive, :is_proxy_needed, :is_mobile_proxy_needed, :is_working_url
  # :internal => :external
  def self.attribute_map
    {
      :_id => :'_id',
      :url => :'url',
      :title => :'title',
      :open_calais_topics => :'open_calais_topics',
      :open_calais_keywords => :'open_calais_keywords',
      :categories => :'categories',
      :summary => :'summary',
      :unparsed_html => :'unparsed_html',
      :parsed_html => :'parsed_html',
      :content => :'content',
      :vestorly_topics => :'vestorly_topics',
      :override_topic => :'override_topic',
      :published_at => :'published_at',
      :original_image_url => :'original_image_url',
      :small_image_url => :'small_image_url',
      :large_image_url => :'large_image_url',
      :img => :'img',
      :webpage_mobile_image_url => :'webpage_mobile_image_url',
      :webpage_tablet_image_url => :'webpage_tablet_image_url',
      :rss_feed_url => :'rss_feed_url',
      :rss_feed_category => :'rss_feed_category',
      :rss_feed_logo_url => :'rss_feed_logo_url',
      :needs_sanitize => :'needs_sanitize',
      :is_responsive => :'is_responsive',
      :is_proxy_needed => :'is_proxy_needed',
      :is_mobile_proxy_needed => :'is_mobile_proxy_needed',
      :is_working_url => :'is_working_url'
      
    }
  end

  def initialize(attributes = {})
    return if attributes.empty?
    # Morph attribute keys into undescored rubyish style
    
    if self.class.attribute_map[:"_id"]
      @_id = attributes["_id"]
    end
    
    if self.class.attribute_map[:"url"]
      @url = attributes["url"]
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
    
    if self.class.attribute_map[:"categories"]
      @categories = attributes["categories"]
    end
    
    if self.class.attribute_map[:"summary"]
      @summary = attributes["summary"]
    end
    
    if self.class.attribute_map[:"unparsed_html"]
      @unparsed_html = attributes["unparsed_html"]
    end
    
    if self.class.attribute_map[:"parsed_html"]
      @parsed_html = attributes["parsed_html"]
    end
    
    if self.class.attribute_map[:"content"]
      @content = attributes["content"]
    end
    
    if self.class.attribute_map[:"vestorly_topics"]
      @vestorly_topics = attributes["vestorly_topics"]
    end
    
    if self.class.attribute_map[:"override_topic"]
      @override_topic = attributes["override_topic"]
    end
    
    if self.class.attribute_map[:"published_at"]
      @published_at = attributes["published_at"]
    end
    
    if self.class.attribute_map[:"original_image_url"]
      @original_image_url = attributes["original_image_url"]
    end
    
    if self.class.attribute_map[:"small_image_url"]
      @small_image_url = attributes["small_image_url"]
    end
    
    if self.class.attribute_map[:"large_image_url"]
      @large_image_url = attributes["large_image_url"]
    end
    
    if self.class.attribute_map[:"img"]
      @img = attributes["img"]
    end
    
    if self.class.attribute_map[:"webpage_mobile_image_url"]
      @webpage_mobile_image_url = attributes["webpage_mobile_image_url"]
    end
    
    if self.class.attribute_map[:"webpage_tablet_image_url"]
      @webpage_tablet_image_url = attributes["webpage_tablet_image_url"]
    end
    
    if self.class.attribute_map[:"rss_feed_url"]
      @rss_feed_url = attributes["rss_feed_url"]
    end
    
    if self.class.attribute_map[:"rss_feed_category"]
      @rss_feed_category = attributes["rss_feed_category"]
    end
    
    if self.class.attribute_map[:"rss_feed_logo_url"]
      @rss_feed_logo_url = attributes["rss_feed_logo_url"]
    end
    
    if self.class.attribute_map[:"needs_sanitize"]
      @needs_sanitize = attributes["needs_sanitize"]
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
    
    if self.class.attribute_map[:"is_working_url"]
      @is_working_url = attributes["is_working_url"]
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
