
class Member
  attr_accessor :_id, :email, :first_name, :last_name, :phone, :address, :city, :state, :zip, :gender, :age, :education, :high_net_worth, :home_market_value, :home_owner_status, :household_income, :marital_status, :occupation, :hometown, :family, :tags, :message, :location, :picture_url, :profile_url, :estimated_location, :estimated_zip, :register_ip_addr, :data_estimated, :genuine_email
  # :internal => :external
  def self.attribute_map
    {
      :_id => :'_id',
      :email => :'email',
      :first_name => :'first_name',
      :last_name => :'last_name',
      :phone => :'phone',
      :address => :'address',
      :city => :'city',
      :state => :'state',
      :zip => :'zip',
      :gender => :'gender',
      :age => :'age',
      :education => :'education',
      :high_net_worth => :'high_net_worth',
      :home_market_value => :'home_market_value',
      :home_owner_status => :'home_owner_status',
      :household_income => :'household_income',
      :marital_status => :'marital_status',
      :occupation => :'occupation',
      :hometown => :'hometown',
      :family => :'family',
      :tags => :'tags',
      :message => :'message',
      :location => :'location',
      :picture_url => :'picture_url',
      :profile_url => :'profile_url',
      :estimated_location => :'estimated_location',
      :estimated_zip => :'estimated_zip',
      :register_ip_addr => :'register_ip_addr',
      :data_estimated => :'data_estimated',
      :genuine_email => :'genuine_email'
      
    }
  end

  def initialize(attributes = {})
    return if attributes.empty?
    # Morph attribute keys into undescored rubyish style
    
    if self.class.attribute_map[:"_id"]
      @_id = attributes["_id"]
    end
    
    if self.class.attribute_map[:"email"]
      @email = attributes["email"]
    end
    
    if self.class.attribute_map[:"first_name"]
      @first_name = attributes["first_name"]
    end
    
    if self.class.attribute_map[:"last_name"]
      @last_name = attributes["last_name"]
    end
    
    if self.class.attribute_map[:"phone"]
      @phone = attributes["phone"]
    end
    
    if self.class.attribute_map[:"address"]
      @address = attributes["address"]
    end
    
    if self.class.attribute_map[:"city"]
      @city = attributes["city"]
    end
    
    if self.class.attribute_map[:"state"]
      @state = attributes["state"]
    end
    
    if self.class.attribute_map[:"zip"]
      @zip = attributes["zip"]
    end
    
    if self.class.attribute_map[:"gender"]
      @gender = attributes["gender"]
    end
    
    if self.class.attribute_map[:"age"]
      @age = attributes["age"]
    end
    
    if self.class.attribute_map[:"education"]
      @education = attributes["education"]
    end
    
    if self.class.attribute_map[:"high_net_worth"]
      @high_net_worth = attributes["high_net_worth"]
    end
    
    if self.class.attribute_map[:"home_market_value"]
      @home_market_value = attributes["home_market_value"]
    end
    
    if self.class.attribute_map[:"home_owner_status"]
      @home_owner_status = attributes["home_owner_status"]
    end
    
    if self.class.attribute_map[:"household_income"]
      @household_income = attributes["household_income"]
    end
    
    if self.class.attribute_map[:"marital_status"]
      @marital_status = attributes["marital_status"]
    end
    
    if self.class.attribute_map[:"occupation"]
      @occupation = attributes["occupation"]
    end
    
    if self.class.attribute_map[:"hometown"]
      @hometown = attributes["hometown"]
    end
    
    if self.class.attribute_map[:"family"]
      @family = attributes["family"]
    end
    
    if self.class.attribute_map[:"tags"]
      @tags = attributes["tags"]
    end
    
    if self.class.attribute_map[:"message"]
      @message = attributes["message"]
    end
    
    if self.class.attribute_map[:"location"]
      @location = attributes["location"]
    end
    
    if self.class.attribute_map[:"picture_url"]
      @picture_url = attributes["picture_url"]
    end
    
    if self.class.attribute_map[:"profile_url"]
      @profile_url = attributes["profile_url"]
    end
    
    if self.class.attribute_map[:"estimated_location"]
      @estimated_location = attributes["estimated_location"]
    end
    
    if self.class.attribute_map[:"estimated_zip"]
      @estimated_zip = attributes["estimated_zip"]
    end
    
    if self.class.attribute_map[:"register_ip_addr"]
      @register_ip_addr = attributes["register_ip_addr"]
    end
    
    if self.class.attribute_map[:"data_estimated"]
      @data_estimated = attributes["data_estimated"]
    end
    
    if self.class.attribute_map[:"genuine_email"]
      @genuine_email = attributes["genuine_email"]
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
