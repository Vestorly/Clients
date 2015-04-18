
class NewsletterSettingsInput
  attr_accessor :email_status, :twitter_status, :linkedin_status, :email_hour, :twitter_hour, :linkedin_hour, :facebook_hour
  # :internal => :external
  def self.attribute_map
    {
      :email_status => :'email_status',
      :twitter_status => :'twitter_status',
      :linkedin_status => :'linkedin_status',
      :email_hour => :'email_hour',
      :twitter_hour => :'twitter_hour',
      :linkedin_hour => :'linkedin_hour',
      :facebook_hour => :'facebook_hour'
      
    }
  end

  def initialize(attributes = {})
    return if attributes.empty?
    # Morph attribute keys into undescored rubyish style
    
    if self.class.attribute_map[:"email_status"]
      @email_status = attributes["email_status"]
    end
    
    if self.class.attribute_map[:"twitter_status"]
      @twitter_status = attributes["twitter_status"]
    end
    
    if self.class.attribute_map[:"linkedin_status"]
      @linkedin_status = attributes["linkedin_status"]
    end
    
    if self.class.attribute_map[:"email_hour"]
      @email_hour = attributes["email_hour"]
    end
    
    if self.class.attribute_map[:"twitter_hour"]
      @twitter_hour = attributes["twitter_hour"]
    end
    
    if self.class.attribute_map[:"linkedin_hour"]
      @linkedin_hour = attributes["linkedin_hour"]
    end
    
    if self.class.attribute_map[:"facebook_hour"]
      @facebook_hour = attributes["facebook_hour"]
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
