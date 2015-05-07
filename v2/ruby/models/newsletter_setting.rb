
class NewsletterSetting
  attr_accessor :_id, :email_day_of_week, :email_hour, :email_status, :facebook_active_wall, :facebook_day_of_week, :facebook_hour, :facebook_status, :linkedin_active_wall, :linkedin_day_of_week, :linkedin_hour, :linkedin_status, :social_title, :social_subtitle, :social_description, :twitter_day_of_week, :twitter_hour, :twitter_status, :social_posting_text, :newsletter_type, :group_id, :montage_enabled, :montage_title, :montage_facebook_image_url, :montage_linkedin_image_url, :montage_twitter_image_url, :newsletter_ids, :primary_email_font, :footer_email_font, :email_accent_color, :render_version, :header_image_url, :header_background_color, :banner_color, :title_color, :footer_html, :intro_text, :footer_image_url, :subject, :salutation_text, :body_html
  # :internal => :external
  def self.attribute_map
    {
      :_id => :'_id',
      :email_day_of_week => :'email_day_of_week',
      :email_hour => :'email_hour',
      :email_status => :'email_status',
      :facebook_active_wall => :'facebook_active_wall',
      :facebook_day_of_week => :'facebook_day_of_week',
      :facebook_hour => :'facebook_hour',
      :facebook_status => :'facebook_status',
      :linkedin_active_wall => :'linkedin_active_wall',
      :linkedin_day_of_week => :'linkedin_day_of_week',
      :linkedin_hour => :'linkedin_hour',
      :linkedin_status => :'linkedin_status',
      :social_title => :'social_title',
      :social_subtitle => :'social_subtitle',
      :social_description => :'social_description',
      :twitter_day_of_week => :'twitter_day_of_week',
      :twitter_hour => :'twitter_hour',
      :twitter_status => :'twitter_status',
      :social_posting_text => :'social_posting_text',
      :newsletter_type => :'newsletter_type',
      :group_id => :'group_id',
      :montage_enabled => :'montage_enabled',
      :montage_title => :'montage_title',
      :montage_facebook_image_url => :'montage_facebook_image_url',
      :montage_linkedin_image_url => :'montage_linkedin_image_url',
      :montage_twitter_image_url => :'montage_twitter_image_url',
      :newsletter_ids => :'newsletter_ids',
      :primary_email_font => :'primary_email_font',
      :footer_email_font => :'footer_email_font',
      :email_accent_color => :'email_accent_color',
      :render_version => :'render_version',
      :header_image_url => :'header_image_url',
      :header_background_color => :'header_background_color',
      :banner_color => :'banner_color',
      :title_color => :'title_color',
      :footer_html => :'footer_html',
      :intro_text => :'intro_text',
      :footer_image_url => :'footer_image_url',
      :subject => :'subject',
      :salutation_text => :'salutation_text',
      :body_html => :'body_html'
      
    }
  end

  def initialize(attributes = {})
    return if attributes.empty?
    # Morph attribute keys into undescored rubyish style
    
    if self.class.attribute_map[:"_id"]
      @_id = attributes["_id"]
    end
    
    if self.class.attribute_map[:"email_day_of_week"]
      @email_day_of_week = attributes["email_day_of_week"]
    end
    
    if self.class.attribute_map[:"email_hour"]
      @email_hour = attributes["email_hour"]
    end
    
    if self.class.attribute_map[:"email_status"]
      @email_status = attributes["email_status"]
    end
    
    if self.class.attribute_map[:"facebook_active_wall"]
      @facebook_active_wall = attributes["facebook_active_wall"]
    end
    
    if self.class.attribute_map[:"facebook_day_of_week"]
      @facebook_day_of_week = attributes["facebook_day_of_week"]
    end
    
    if self.class.attribute_map[:"facebook_hour"]
      @facebook_hour = attributes["facebook_hour"]
    end
    
    if self.class.attribute_map[:"facebook_status"]
      @facebook_status = attributes["facebook_status"]
    end
    
    if self.class.attribute_map[:"linkedin_active_wall"]
      @linkedin_active_wall = attributes["linkedin_active_wall"]
    end
    
    if self.class.attribute_map[:"linkedin_day_of_week"]
      @linkedin_day_of_week = attributes["linkedin_day_of_week"]
    end
    
    if self.class.attribute_map[:"linkedin_hour"]
      @linkedin_hour = attributes["linkedin_hour"]
    end
    
    if self.class.attribute_map[:"linkedin_status"]
      @linkedin_status = attributes["linkedin_status"]
    end
    
    if self.class.attribute_map[:"social_title"]
      @social_title = attributes["social_title"]
    end
    
    if self.class.attribute_map[:"social_subtitle"]
      @social_subtitle = attributes["social_subtitle"]
    end
    
    if self.class.attribute_map[:"social_description"]
      @social_description = attributes["social_description"]
    end
    
    if self.class.attribute_map[:"twitter_day_of_week"]
      @twitter_day_of_week = attributes["twitter_day_of_week"]
    end
    
    if self.class.attribute_map[:"twitter_hour"]
      @twitter_hour = attributes["twitter_hour"]
    end
    
    if self.class.attribute_map[:"twitter_status"]
      @twitter_status = attributes["twitter_status"]
    end
    
    if self.class.attribute_map[:"social_posting_text"]
      @social_posting_text = attributes["social_posting_text"]
    end
    
    if self.class.attribute_map[:"newsletter_type"]
      @newsletter_type = attributes["newsletter_type"]
    end
    
    if self.class.attribute_map[:"group_id"]
      @group_id = attributes["group_id"]
    end
    
    if self.class.attribute_map[:"montage_enabled"]
      @montage_enabled = attributes["montage_enabled"]
    end
    
    if self.class.attribute_map[:"montage_title"]
      @montage_title = attributes["montage_title"]
    end
    
    if self.class.attribute_map[:"montage_facebook_image_url"]
      @montage_facebook_image_url = attributes["montage_facebook_image_url"]
    end
    
    if self.class.attribute_map[:"montage_linkedin_image_url"]
      @montage_linkedin_image_url = attributes["montage_linkedin_image_url"]
    end
    
    if self.class.attribute_map[:"montage_twitter_image_url"]
      @montage_twitter_image_url = attributes["montage_twitter_image_url"]
    end
    
    if self.class.attribute_map[:"newsletter_ids"]
      if (value = attributes["newsletter_ids"]).is_a?(Array)
        @newsletter_ids = value
      end
    end
    
    if self.class.attribute_map[:"primary_email_font"]
      @primary_email_font = attributes["primary_email_font"]
    end
    
    if self.class.attribute_map[:"footer_email_font"]
      @footer_email_font = attributes["footer_email_font"]
    end
    
    if self.class.attribute_map[:"email_accent_color"]
      @email_accent_color = attributes["email_accent_color"]
    end
    
    if self.class.attribute_map[:"render_version"]
      @render_version = attributes["render_version"]
    end
    
    if self.class.attribute_map[:"header_image_url"]
      @header_image_url = attributes["header_image_url"]
    end
    
    if self.class.attribute_map[:"header_background_color"]
      @header_background_color = attributes["header_background_color"]
    end
    
    if self.class.attribute_map[:"banner_color"]
      @banner_color = attributes["banner_color"]
    end
    
    if self.class.attribute_map[:"title_color"]
      @title_color = attributes["title_color"]
    end
    
    if self.class.attribute_map[:"footer_html"]
      @footer_html = attributes["footer_html"]
    end
    
    if self.class.attribute_map[:"intro_text"]
      @intro_text = attributes["intro_text"]
    end
    
    if self.class.attribute_map[:"footer_image_url"]
      @footer_image_url = attributes["footer_image_url"]
    end
    
    if self.class.attribute_map[:"subject"]
      @subject = attributes["subject"]
    end
    
    if self.class.attribute_map[:"salutation_text"]
      @salutation_text = attributes["salutation_text"]
    end
    
    if self.class.attribute_map[:"body_html"]
      @body_html = attributes["body_html"]
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
