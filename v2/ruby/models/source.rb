
class Source
  attr_accessor :_id, :name, :url, :logo_url, :enabled, :custom_rss_feed, :rss_publisher
  # :internal => :external
  def self.attribute_map
    {
      :_id => :'_id',
      :name => :'name',
      :url => :'url',
      :logo_url => :'logo_url',
      :enabled => :'enabled',
      :custom_rss_feed => :'custom_rss_feed',
      :rss_publisher => :'rss_publisher'
      
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
    
    if self.class.attribute_map[:"url"]
      @url = attributes["url"]
    end
    
    if self.class.attribute_map[:"logo_url"]
      @logo_url = attributes["logo_url"]
    end
    
    if self.class.attribute_map[:"enabled"]
      @enabled = attributes["enabled"]
    end
    
    if self.class.attribute_map[:"custom_rss_feed"]
      @custom_rss_feed = attributes["custom_rss_feed"]
    end
    
    if self.class.attribute_map[:"rss_publisher"]
      @rss_publisher = attributes["rss_publisher"]
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
