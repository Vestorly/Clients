
class Newslettersettings
  attr_accessor :newletter_settings
  # :internal => :external
  def self.attribute_map
    {
      :newletter_settings => :'newletter_settings'
      
    }
  end

  def initialize(attributes = {})
    return if attributes.empty?
    # Morph attribute keys into undescored rubyish style
    
    if self.class.attribute_map[:"newletter_settings"]
      if (value = attributes["newletter_settings"]).is_a?(Array)
        @newletter_settings = value.map{ |v| NewsletterSetting.new(v) }
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
