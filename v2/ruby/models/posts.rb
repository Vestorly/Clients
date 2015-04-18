
class Posts
  attr_accessor :posts
  # :internal => :external
  def self.attribute_map
    {
      :posts => :'posts'
      
    }
  end

  def initialize(attributes = {})
    return if attributes.empty?
    # Morph attribute keys into undescored rubyish style
    
    if self.class.attribute_map[:"posts"]
      if (value = attributes["posts"]).is_a?(Array)
        @posts = value.map{ |v| Post.new(v) }
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
