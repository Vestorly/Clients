
class Meta
  attr_accessor :sort_order, :more_results, :message, :sorted_by
  # :internal => :external
  def self.attribute_map
    {
      :sort_order => :'sort_order',
      :more_results => :'more_results',
      :message => :'message',
      :sorted_by => :'sorted_by'
      
    }
  end

  def initialize(attributes = {})
    return if attributes.empty?
    # Morph attribute keys into undescored rubyish style
    
    if self.class.attribute_map[:"sort_order"]
      @sort_order = attributes["sort_order"]
    end
    
    if self.class.attribute_map[:"more_results"]
      @more_results = attributes["more_results"]
    end
    
    if self.class.attribute_map[:"message"]
      @message = attributes["message"]
    end
    
    if self.class.attribute_map[:"sorted_by"]
      if (value = attributes["sorted_by"]).is_a?(Array)
        @sorted_by = value
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
