
class NewsletterInput
  attr_accessor :is_sent, :is_default, :click_count, :unique_click_count, :total_click_count
  # :internal => :external
  def self.attribute_map
    {
      :is_sent => :'is_sent',
      :is_default => :'is_default',
      :click_count => :'click_count',
      :unique_click_count => :'unique_click_count',
      :total_click_count => :'total_click_count'
      
    }
  end

  def initialize(attributes = {})
    return if attributes.empty?
    # Morph attribute keys into undescored rubyish style
    
    if self.class.attribute_map[:"is_sent"]
      @is_sent = attributes["is_sent"]
    end
    
    if self.class.attribute_map[:"is_default"]
      @is_default = attributes["is_default"]
    end
    
    if self.class.attribute_map[:"click_count"]
      @click_count = attributes["click_count"]
    end
    
    if self.class.attribute_map[:"unique_click_count"]
      @unique_click_count = attributes["unique_click_count"]
    end
    
    if self.class.attribute_map[:"total_click_count"]
      @total_click_count = attributes["total_click_count"]
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
