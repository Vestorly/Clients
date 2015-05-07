
class Member
  attr_accessor :_id, :email, :first_name, :last_name, :phone, :address, :city, :state, :zip, :gender, :interest_consultation, :interest_in_new_advisor, :assets, :age, :data_estimated, :education, :high_net_worth, :home_market_value, :home_owner_status, :household_income, :marital_status, :occupation, :hometown, :family, :tags, :subscribed_group_ids, :unsubscribed, :unsubscribed_date, :user_type, :signed_up_with, :message, :location, :picture_url, :profile_url, :estimated_location, :estimated_zip, :register_ip_addr, :genuine_email, :last_active_date, :is_client, :is_hidden, :invited_on, :invited_by, :portfolio_size
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
      :interest_consultation => :'interest_consultation',
      :interest_in_new_advisor => :'interest_in_new_advisor',
      :assets => :'assets',
      :age => :'age',
      :data_estimated => :'data_estimated',
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
      :subscribed_group_ids => :'subscribed_group_ids',
      :unsubscribed => :'unsubscribed',
      :unsubscribed_date => :'unsubscribed_date',
      :user_type => :'user_type',
      :signed_up_with => :'signed_up_with',
      :message => :'message',
      :location => :'location',
      :picture_url => :'picture_url',
      :profile_url => :'profile_url',
      :estimated_location => :'estimated_location',
      :estimated_zip => :'estimated_zip',
      :register_ip_addr => :'register_ip_addr',
      :genuine_email => :'genuine_email',
      :last_active_date => :'last_active_date',
      :is_client => :'is_client',
      :is_hidden => :'is_hidden',
      :invited_on => :'invited_on',
      :invited_by => :'invited_by',
      :portfolio_size => :'portfolio_size'
      
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
    
    if self.class.attribute_map[:"interest_consultation"]
      @interest_consultation = attributes["interest_consultation"]
    end
    
    if self.class.attribute_map[:"interest_in_new_advisor"]
      @interest_in_new_advisor = attributes["interest_in_new_advisor"]
    end
    
    if self.class.attribute_map[:"assets"]
      @assets = attributes["assets"]
    end
    
    if self.class.attribute_map[:"age"]
      @age = attributes["age"]
    end
    
    if self.class.attribute_map[:"data_estimated"]
      @data_estimated = attributes["data_estimated"]
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
      if (value = attributes["tags"]).is_a?(Array)
        @tags = value
      end
    end
    
    if self.class.attribute_map[:"subscribed_group_ids"]
      if (value = attributes["subscribed_group_ids"]).is_a?(Array)
        @subscribed_group_ids = value
      end
    end
    
    if self.class.attribute_map[:"unsubscribed"]
      @unsubscribed = attributes["unsubscribed"]
    end
    
    if self.class.attribute_map[:"unsubscribed_date"]
      @unsubscribed_date = attributes["unsubscribed_date"]
    end
    
    if self.class.attribute_map[:"user_type"]
      @user_type = attributes["user_type"]
    end
    
    if self.class.attribute_map[:"signed_up_with"]
      @signed_up_with = attributes["signed_up_with"]
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
    
    if self.class.attribute_map[:"genuine_email"]
      @genuine_email = attributes["genuine_email"]
    end
    
    if self.class.attribute_map[:"last_active_date"]
      @last_active_date = attributes["last_active_date"]
    end
    
    if self.class.attribute_map[:"is_client"]
      @is_client = attributes["is_client"]
    end
    
    if self.class.attribute_map[:"is_hidden"]
      @is_hidden = attributes["is_hidden"]
    end
    
    if self.class.attribute_map[:"invited_on"]
      @invited_on = attributes["invited_on"]
    end
    
    if self.class.attribute_map[:"invited_by"]
      @invited_by = attributes["invited_by"]
    end
    
    if self.class.attribute_map[:"portfolio_size"]
      @portfolio_size = attributes["portfolio_size"]
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
