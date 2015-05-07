
class TruncatedMember
  attr_accessor :_id, :first_name, :last_name, :email, :picture_url, :added_on
  # :internal => :external
  def self.attribute_map
    {
      :_id => :'_id',
      :first_name => :'first_name',
      :last_name => :'last_name',
      :email => :'email',
      :picture_url => :'picture_url',
      :added_on => :'added_on'
      
    }
  end

  def initialize(attributes = {})
    return if attributes.empty?
    # Morph attribute keys into undescored rubyish style
    
    if self.class.attribute_map[:"_id"]
      @_id = attributes["_id"]
    end
    
    if self.class.attribute_map[:"first_name"]
      @first_name = attributes["first_name"]
    end
    
    if self.class.attribute_map[:"last_name"]
      @last_name = attributes["last_name"]
    end
    
    if self.class.attribute_map[:"email"]
      @email = attributes["email"]
    end
    
    if self.class.attribute_map[:"picture_url"]
      @picture_url = attributes["picture_url"]
    end
    
    if self.class.attribute_map[:"added_on"]
      @added_on = attributes["added_on"]
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
