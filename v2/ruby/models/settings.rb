
class Settings
  attr_accessor :_id, :company, :picture_url, :website, :disclosure, :adv_brochure, :slug, :name, :orgsetting, :feature, :personalsetting
  # :internal => :external
  def self.attribute_map
    {
      :_id => :'_id',
      :company => :'company',
      :picture_url => :'picture_url',
      :website => :'website',
      :disclosure => :'disclosure',
      :adv_brochure => :'adv_brochure',
      :slug => :'slug',
      :name => :'name',
      :orgsetting => :'orgsetting',
      :feature => :'feature',
      :personalsetting => :'personalsetting'
      
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
    
    if self.class.attribute_map[:"disclosure"]
      @disclosure = attributes["disclosure"]
    end
    
    if self.class.attribute_map[:"adv_brochure"]
      @adv_brochure = attributes["adv_brochure"]
    end
    
    if self.class.attribute_map[:"slug"]
      @slug = attributes["slug"]
    end
    
    if self.class.attribute_map[:"name"]
      @name = attributes["name"]
    end
    
    if self.class.attribute_map[:"orgsetting"]
      @orgsetting = attributes["orgsetting"]
    end
    
    if self.class.attribute_map[:"feature"]
      @feature = attributes["feature"]
    end
    
    if self.class.attribute_map[:"personalsetting"]
      @personalsetting = attributes["personalsetting"]
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
