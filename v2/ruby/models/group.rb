
class Group
  attr_accessor :_id, :name, :is_default, :is_hidden, :new_weekly_mailer_content, :newsletter_subject, :autopublish, :number_articles_per_group, :number_articles_per_newsletter
  # :internal => :external
  def self.attribute_map
    {
      :_id => :'_id',
      :name => :'name',
      :is_default => :'is_default',
      :is_hidden => :'is_hidden',
      :new_weekly_mailer_content => :'new_weekly_mailer_content',
      :newsletter_subject => :'newsletter_subject',
      :autopublish => :'autopublish',
      :number_articles_per_group => :'number_articles_per_group',
      :number_articles_per_newsletter => :'number_articles_per_newsletter'
      
    }
  end

  def initialize(attributes = {})
    return if attributes.empty?
    # Morph attribute keys into undescored rubyish style
    
    if self.class.attribute_map[:"_id"]
      @_id = attributes["_id"]
    end
    
    if self.class.attribute_map[:"name"]
      @name = attributes["name"]
    end
    
    if self.class.attribute_map[:"is_default"]
      @is_default = attributes["is_default"]
    end
    
    if self.class.attribute_map[:"is_hidden"]
      @is_hidden = attributes["is_hidden"]
    end
    
    if self.class.attribute_map[:"new_weekly_mailer_content"]
      @new_weekly_mailer_content = attributes["new_weekly_mailer_content"]
    end
    
    if self.class.attribute_map[:"newsletter_subject"]
      @newsletter_subject = attributes["newsletter_subject"]
    end
    
    if self.class.attribute_map[:"autopublish"]
      @autopublish = attributes["autopublish"]
    end
    
    if self.class.attribute_map[:"number_articles_per_group"]
      @number_articles_per_group = attributes["number_articles_per_group"]
    end
    
    if self.class.attribute_map[:"number_articles_per_newsletter"]
      @number_articles_per_newsletter = attributes["number_articles_per_newsletter"]
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
