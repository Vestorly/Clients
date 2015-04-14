
class Session
  attr_accessor :_id, :current_user, :vestorly_auth, :new_user
  # :internal => :external
  def self.attribute_map
    {
      :_id => :'_id',
      :current_user => :'current_user',
      :vestorly_auth => :'vestorly_auth',
      :new_user => :'new_user'
      
    }
  end

  def initialize(attributes = {})
    return if attributes.empty?
    # Morph attribute keys into undescored rubyish style
    
    if self.class.attribute_map[:"_id"]
      @_id = attributes["_id"]
    end
    
    if self.class.attribute_map[:"current_user"]
      @current_user = attributes["current_user"]
    end
    
    if self.class.attribute_map[:"vestorly_auth"]
      @vestorly_auth = attributes["vestorly_auth"]
    end
    
    if self.class.attribute_map[:"new_user"]
      @new_user = attributes["new_user"]
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
