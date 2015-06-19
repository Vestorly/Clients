module Vestorly
  # 
  class NewsletterSetting < BaseObject
    attr_accessor :_id, :email_day_of_week, :email_hour, :email_status, :facebook_active_wall, :facebook_day_of_week, :facebook_hour, :facebook_status, :linkedin_active_wall, :linkedin_day_of_week, :linkedin_hour, :linkedin_status, :social_title, :social_subtitle, :social_description, :twitter_day_of_week, :twitter_hour, :twitter_status, :social_posting_text, :newsletter_type, :group_id, :montage_enabled, :montage_title, :montage_facebook_image_url, :montage_linkedin_image_url, :montage_twitter_image_url, :newsletter_ids, :primary_email_font, :footer_email_font, :email_accent_color, :render_version, :header_image_url, :header_background_color, :banner_color, :title_color, :footer_html, :intro_text, :footer_image_url, :subject, :salutation_text, :body_html
    # attribute mapping from ruby-style variable name to JSON key
    def self.attribute_map
      {
        
        # 
        :'_id' => :'_id',
        
        # 
        :'email_day_of_week' => :'email_day_of_week',
        
        # 
        :'email_hour' => :'email_hour',
        
        # 
        :'email_status' => :'email_status',
        
        # 
        :'facebook_active_wall' => :'facebook_active_wall',
        
        # 
        :'facebook_day_of_week' => :'facebook_day_of_week',
        
        # 
        :'facebook_hour' => :'facebook_hour',
        
        # 
        :'facebook_status' => :'facebook_status',
        
        # 
        :'linkedin_active_wall' => :'linkedin_active_wall',
        
        # 
        :'linkedin_day_of_week' => :'linkedin_day_of_week',
        
        # 
        :'linkedin_hour' => :'linkedin_hour',
        
        # 
        :'linkedin_status' => :'linkedin_status',
        
        # 
        :'social_title' => :'social_title',
        
        # 
        :'social_subtitle' => :'social_subtitle',
        
        # 
        :'social_description' => :'social_description',
        
        # 
        :'twitter_day_of_week' => :'twitter_day_of_week',
        
        # 
        :'twitter_hour' => :'twitter_hour',
        
        # 
        :'twitter_status' => :'twitter_status',
        
        # 
        :'social_posting_text' => :'social_posting_text',
        
        # 
        :'newsletter_type' => :'newsletter_type',
        
        # 
        :'group_id' => :'group_id',
        
        # 
        :'montage_enabled' => :'montage_enabled',
        
        # 
        :'montage_title' => :'montage_title',
        
        # 
        :'montage_facebook_image_url' => :'montage_facebook_image_url',
        
        # 
        :'montage_linkedin_image_url' => :'montage_linkedin_image_url',
        
        # 
        :'montage_twitter_image_url' => :'montage_twitter_image_url',
        
        # 
        :'newsletter_ids' => :'newsletter_ids',
        
        # 
        :'primary_email_font' => :'primary_email_font',
        
        # 
        :'footer_email_font' => :'footer_email_font',
        
        # 
        :'email_accent_color' => :'email_accent_color',
        
        # 
        :'render_version' => :'render_version',
        
        # 
        :'header_image_url' => :'header_image_url',
        
        # 
        :'header_background_color' => :'header_background_color',
        
        # 
        :'banner_color' => :'banner_color',
        
        # 
        :'title_color' => :'title_color',
        
        # 
        :'footer_html' => :'footer_html',
        
        # 
        :'intro_text' => :'intro_text',
        
        # 
        :'footer_image_url' => :'footer_image_url',
        
        # 
        :'subject' => :'subject',
        
        # 
        :'salutation_text' => :'salutation_text',
        
        # 
        :'body_html' => :'body_html'
        
      }
    end

    # attribute type
    def self.swagger_types
      {
        :'_id' => :'string',
        :'email_day_of_week' => :'int',
        :'email_hour' => :'int',
        :'email_status' => :'string',
        :'facebook_active_wall' => :'string',
        :'facebook_day_of_week' => :'int',
        :'facebook_hour' => :'int',
        :'facebook_status' => :'string',
        :'linkedin_active_wall' => :'string',
        :'linkedin_day_of_week' => :'int',
        :'linkedin_hour' => :'int',
        :'linkedin_status' => :'string',
        :'social_title' => :'string',
        :'social_subtitle' => :'string',
        :'social_description' => :'string',
        :'twitter_day_of_week' => :'int',
        :'twitter_hour' => :'int',
        :'twitter_status' => :'string',
        :'social_posting_text' => :'string',
        :'newsletter_type' => :'string',
        :'group_id' => :'string',
        :'montage_enabled' => :'boolean',
        :'montage_title' => :'string',
        :'montage_facebook_image_url' => :'string',
        :'montage_linkedin_image_url' => :'string',
        :'montage_twitter_image_url' => :'string',
        :'newsletter_ids' => :'array[string]',
        :'primary_email_font' => :'string',
        :'footer_email_font' => :'string',
        :'email_accent_color' => :'string',
        :'render_version' => :'string',
        :'header_image_url' => :'string',
        :'header_background_color' => :'string',
        :'banner_color' => :'string',
        :'title_color' => :'string',
        :'footer_html' => :'string',
        :'intro_text' => :'string',
        :'footer_image_url' => :'string',
        :'subject' => :'string',
        :'salutation_text' => :'string',
        :'body_html' => :'string'
        
      }
    end

    def initialize(attributes = {})
      return if !attributes.is_a?(Hash) || attributes.empty?

      # convert string to symbol for hash key
      attributes = attributes.inject({}){|memo,(k,v)| memo[k.to_sym] = v; memo}

      
      if attributes[:'_id']
        @_id = attributes[:'_id']
      end
      
      if attributes[:'email_day_of_week']
        @email_day_of_week = attributes[:'email_day_of_week']
      end
      
      if attributes[:'email_hour']
        @email_hour = attributes[:'email_hour']
      end
      
      if attributes[:'email_status']
        @email_status = attributes[:'email_status']
      end
      
      if attributes[:'facebook_active_wall']
        @facebook_active_wall = attributes[:'facebook_active_wall']
      end
      
      if attributes[:'facebook_day_of_week']
        @facebook_day_of_week = attributes[:'facebook_day_of_week']
      end
      
      if attributes[:'facebook_hour']
        @facebook_hour = attributes[:'facebook_hour']
      end
      
      if attributes[:'facebook_status']
        @facebook_status = attributes[:'facebook_status']
      end
      
      if attributes[:'linkedin_active_wall']
        @linkedin_active_wall = attributes[:'linkedin_active_wall']
      end
      
      if attributes[:'linkedin_day_of_week']
        @linkedin_day_of_week = attributes[:'linkedin_day_of_week']
      end
      
      if attributes[:'linkedin_hour']
        @linkedin_hour = attributes[:'linkedin_hour']
      end
      
      if attributes[:'linkedin_status']
        @linkedin_status = attributes[:'linkedin_status']
      end
      
      if attributes[:'social_title']
        @social_title = attributes[:'social_title']
      end
      
      if attributes[:'social_subtitle']
        @social_subtitle = attributes[:'social_subtitle']
      end
      
      if attributes[:'social_description']
        @social_description = attributes[:'social_description']
      end
      
      if attributes[:'twitter_day_of_week']
        @twitter_day_of_week = attributes[:'twitter_day_of_week']
      end
      
      if attributes[:'twitter_hour']
        @twitter_hour = attributes[:'twitter_hour']
      end
      
      if attributes[:'twitter_status']
        @twitter_status = attributes[:'twitter_status']
      end
      
      if attributes[:'social_posting_text']
        @social_posting_text = attributes[:'social_posting_text']
      end
      
      if attributes[:'newsletter_type']
        @newsletter_type = attributes[:'newsletter_type']
      end
      
      if attributes[:'group_id']
        @group_id = attributes[:'group_id']
      end
      
      if attributes[:'montage_enabled']
        @montage_enabled = attributes[:'montage_enabled']
      end
      
      if attributes[:'montage_title']
        @montage_title = attributes[:'montage_title']
      end
      
      if attributes[:'montage_facebook_image_url']
        @montage_facebook_image_url = attributes[:'montage_facebook_image_url']
      end
      
      if attributes[:'montage_linkedin_image_url']
        @montage_linkedin_image_url = attributes[:'montage_linkedin_image_url']
      end
      
      if attributes[:'montage_twitter_image_url']
        @montage_twitter_image_url = attributes[:'montage_twitter_image_url']
      end
      
      if attributes[:'newsletter_ids']
        if (value = attributes[:'newsletter_ids']).is_a?(Array)
          @newsletter_ids = value
        end
      end
      
      if attributes[:'primary_email_font']
        @primary_email_font = attributes[:'primary_email_font']
      end
      
      if attributes[:'footer_email_font']
        @footer_email_font = attributes[:'footer_email_font']
      end
      
      if attributes[:'email_accent_color']
        @email_accent_color = attributes[:'email_accent_color']
      end
      
      if attributes[:'render_version']
        @render_version = attributes[:'render_version']
      end
      
      if attributes[:'header_image_url']
        @header_image_url = attributes[:'header_image_url']
      end
      
      if attributes[:'header_background_color']
        @header_background_color = attributes[:'header_background_color']
      end
      
      if attributes[:'banner_color']
        @banner_color = attributes[:'banner_color']
      end
      
      if attributes[:'title_color']
        @title_color = attributes[:'title_color']
      end
      
      if attributes[:'footer_html']
        @footer_html = attributes[:'footer_html']
      end
      
      if attributes[:'intro_text']
        @intro_text = attributes[:'intro_text']
      end
      
      if attributes[:'footer_image_url']
        @footer_image_url = attributes[:'footer_image_url']
      end
      
      if attributes[:'subject']
        @subject = attributes[:'subject']
      end
      
      if attributes[:'salutation_text']
        @salutation_text = attributes[:'salutation_text']
      end
      
      if attributes[:'body_html']
        @body_html = attributes[:'body_html']
      end
      
    end
  end
end
