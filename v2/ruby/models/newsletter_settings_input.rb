
class NewsletterSettingsInput
  attr_accessor :email_status, :twitter_status, :linkedin_status
  # :internal => :external
  def self.attribute_map
    {
      :email_status => :'email_status',
      :twitter_status => :'twitter_status',
      :linkedin_status => :'linkedin_status'
      
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
    
  end

  def to_body
    body = {}
    self.class.attribute_map.each_pair do |key, value|
      body[value] = self.send(key) unless self.send(key).nil?
    end
    body
  end
end
