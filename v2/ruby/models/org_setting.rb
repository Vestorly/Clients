
class OrgSetting
  attr_accessor :_id, :is_default, :name, :email_theme_name, :company_address, :company_contact_email, :site_url, :company_homepage_url, :privacy_policy_url, :terms_and_conditions_url
  # :internal => :external
  def self.attribute_map
    {
      :_id => :'_id',
      :is_default => :'is_default',
      :name => :'name',
      :email_theme_name => :'email_theme_name',
      :company_address => :'company_address',
      :company_contact_email => :'company_contact_email',
      :site_url => :'site_url',
      :company_homepage_url => :'company_homepage_url',
      :privacy_policy_url => :'privacy_policy_url',
      :terms_and_conditions_url => :'terms_and_conditions_url'
      
    }
  end

  def initialize(attributes = {})
    return if attributes.empty?
    # Morph attribute keys into undescored rubyish style
    
    if self.class.attribute_map[:"_id"]
      @_id = attributes["_id"]
    end
    
    if self.class.attribute_map[:"is_default"]
      @is_default = attributes["is_default"]
    end
    
    if self.class.attribute_map[:"name"]
      @name = attributes["name"]
    end
    
    if self.class.attribute_map[:"email_theme_name"]
      @email_theme_name = attributes["email_theme_name"]
    end
    
    if self.class.attribute_map[:"company_address"]
      @company_address = attributes["company_address"]
    end
    
    if self.class.attribute_map[:"company_contact_email"]
      @company_contact_email = attributes["company_contact_email"]
    end
    
    if self.class.attribute_map[:"site_url"]
      @site_url = attributes["site_url"]
    end
    
    if self.class.attribute_map[:"company_homepage_url"]
      @company_homepage_url = attributes["company_homepage_url"]
    end
    
    if self.class.attribute_map[:"privacy_policy_url"]
      @privacy_policy_url = attributes["privacy_policy_url"]
    end
    
    if self.class.attribute_map[:"terms_and_conditions_url"]
      @terms_and_conditions_url = attributes["terms_and_conditions_url"]
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
