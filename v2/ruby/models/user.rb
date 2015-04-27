
class User
  attr_accessor :_id, :company, :picture_url, :website, :user_type, :slug, :name, :username, :first_name, :last_name, :new_user, :show_tour, :plan_setup, :plan_expired, :plan_status, :plan_id, :plan_stripe
  # :internal => :external
  def self.attribute_map
    {
      :_id => :'_id',
      :company => :'company',
      :picture_url => :'picture_url',
      :website => :'website',
      :user_type => :'user_type',
      :slug => :'slug',
      :name => :'name',
      :username => :'username',
      :first_name => :'first_name',
      :last_name => :'last_name',
      :new_user => :'new_user',
      :show_tour => :'show_tour',
      :plan_setup => :'plan_setup',
      :plan_expired => :'plan_expired',
      :plan_status => :'plan_status',
      :plan_id => :'plan_id',
      :plan_stripe => :'plan_stripe'
      
    }
  end

  def initialize(attributes = {})
    return if attributes.empty?
    # Morph attribute keys into undescored rubyish style
    
    if self.class.attribute_map[:"_id"]
      @_id = attributes["_id"]
    end
    
    if self.class.attribute_map[:"company"]
      @company = attributes["company"]
    end
    
    if self.class.attribute_map[:"picture_url"]
      @picture_url = attributes["picture_url"]
    end
    
    if self.class.attribute_map[:"website"]
      @website = attributes["website"]
    end
    
    if self.class.attribute_map[:"user_type"]
      @user_type = attributes["user_type"]
    end
    
    if self.class.attribute_map[:"slug"]
      @slug = attributes["slug"]
    end
    
    if self.class.attribute_map[:"name"]
      @name = attributes["name"]
    end
    
    if self.class.attribute_map[:"username"]
      @username = attributes["username"]
    end
    
    if self.class.attribute_map[:"first_name"]
      @first_name = attributes["first_name"]
    end
    
    if self.class.attribute_map[:"last_name"]
      @last_name = attributes["last_name"]
    end
    
    if self.class.attribute_map[:"new_user"]
      @new_user = attributes["new_user"]
    end
    
    if self.class.attribute_map[:"show_tour"]
      @show_tour = attributes["show_tour"]
    end
    
    if self.class.attribute_map[:"plan_setup"]
      @plan_setup = attributes["plan_setup"]
    end
    
    if self.class.attribute_map[:"plan_expired"]
      @plan_expired = attributes["plan_expired"]
    end
    
    if self.class.attribute_map[:"plan_status"]
      @plan_status = attributes["plan_status"]
    end
    
    if self.class.attribute_map[:"plan_id"]
      @plan_id = attributes["plan_id"]
    end
    
    if self.class.attribute_map[:"plan_stripe"]
      @plan_stripe = attributes["plan_stripe"]
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
