
class Members
  attr_accessor :posts, :more_results
  # :internal => :external
  def self.attribute_map
    {
      :posts => :'posts',
      :more_results => :'more_results'
      
    }
  end

  def initialize(attributes = {})
    return if attributes.empty?
    # Morph attribute keys into undescored rubyish style
    
    if self.class.attribute_map[:"posts"]
      if (value = attributes["posts"]).is_a?(Array)
        @posts = value.map{ |v| Member.new(v) }
      end
    end
    
    if self.class.attribute_map[:"more_results"]
      @more_results = attributes["more_results"]
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
