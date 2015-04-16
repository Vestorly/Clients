
class Articles
  attr_accessor :articles
  # :internal => :external
  def self.attribute_map
    {
      :articles => :'articles'
      
    }
  end

  def initialize(attributes = {})
    return if attributes.empty?
    # Morph attribute keys into undescored rubyish style
    
    if self.class.attribute_map[:"articles"]
      if (value = attributes["articles"]).is_a?(Array)
        @articles = value.map{ |v| Article.new(v) }
      end
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
