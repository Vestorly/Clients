module Vestorly
  # 
  class Post < BaseObject
    attr_accessor :_id, :created_at, :updated_at, :external_url, :external_url_source, :external_url_type, :image_path, :image_url, :image_height, :image_width, :logo_url, :square_logo_url, :needs_sanitize, :summary, :topic, :approval_status, :approval_transactions, :group_ids, :slug, :article_id, :comment, :newsletter_ids, :is_featured, :advisor_id, :is_published, :is_responsive, :is_proxy_needed, :is_mobile_proxy_needed, :proxy_url, :video, :pdf_attachment_url, :post_date, :display_date, :suitability_score, :video_id, :display_tag, :display_summary, :vestorly_url, :title
    # attribute mapping from ruby-style variable name to JSON key
    def self.attribute_map
      {
        
        # 
        :'_id' => :'_id',
        
        # 
        :'created_at' => :'created_at',
        
        # 
        :'updated_at' => :'updated_at',
        
        # 
        :'external_url' => :'external_url',
        
        # 
        :'external_url_source' => :'external_url_source',
        
        # 
        :'external_url_type' => :'external_url_type',
        
        # 
        :'image_path' => :'image_path',
        
        # 
        :'image_url' => :'image_url',
        
        # 
        :'image_height' => :'image_height',
        
        # 
        :'image_width' => :'image_width',
        
        # 
        :'logo_url' => :'logo_url',
        
        # 
        :'square_logo_url' => :'square_logo_url',
        
        # 
        :'needs_sanitize' => :'needs_sanitize',
        
        # 
        :'summary' => :'summary',
        
        # 
        :'topic' => :'topic',
        
        # 
        :'approval_status' => :'approval_status',
        
        # 
        :'approval_transactions' => :'approval_transactions',
        
        # 
        :'group_ids' => :'group_ids',
        
        # 
        :'slug' => :'slug',
        
        # 
        :'article_id' => :'article_id',
        
        # 
        :'comment' => :'comment',
        
        # 
        :'newsletter_ids' => :'newsletter_ids',
        
        # 
        :'is_featured' => :'is_featured',
        
        # 
        :'advisor_id' => :'advisor_id',
        
        # 
        :'is_published' => :'is_published',
        
        # 
        :'is_responsive' => :'is_responsive',
        
        # 
        :'is_proxy_needed' => :'is_proxy_needed',
        
        # 
        :'is_mobile_proxy_needed' => :'is_mobile_proxy_needed',
        
        # 
        :'proxy_url' => :'proxy_url',
        
        # 
        :'video' => :'video',
        
        # 
        :'pdf_attachment_url' => :'pdf_attachment_url',
        
        # 
        :'post_date' => :'post_date',
        
        # 
        :'display_date' => :'display_date',
        
        # 
        :'suitability_score' => :'suitability_score',
        
        # 
        :'video_id' => :'video_id',
        
        # 
        :'display_tag' => :'display_tag',
        
        # 
        :'display_summary' => :'display_summary',
        
        # 
        :'vestorly_url' => :'vestorly_url',
        
        # 
        :'title' => :'title'
        
      }
    end

    # attribute type
    def self.swagger_types
      {
        :'_id' => :'string',
        :'created_at' => :'string',
        :'updated_at' => :'string',
        :'external_url' => :'string',
        :'external_url_source' => :'string',
        :'external_url_type' => :'string',
        :'image_path' => :'string',
        :'image_url' => :'string',
        :'image_height' => :'string',
        :'image_width' => :'string',
        :'logo_url' => :'string',
        :'square_logo_url' => :'string',
        :'needs_sanitize' => :'string',
        :'summary' => :'string',
        :'topic' => :'string',
        :'approval_status' => :'string',
        :'approval_transactions' => :'array[string]',
        :'group_ids' => :'array[string]',
        :'slug' => :'string',
        :'article_id' => :'string',
        :'comment' => :'string',
        :'newsletter_ids' => :'array[string]',
        :'is_featured' => :'boolean',
        :'advisor_id' => :'string',
        :'is_published' => :'boolean',
        :'is_responsive' => :'boolean',
        :'is_proxy_needed' => :'boolean',
        :'is_mobile_proxy_needed' => :'boolean',
        :'proxy_url' => :'string',
        :'video' => :'string',
        :'pdf_attachment_url' => :'string',
        :'post_date' => :'string',
        :'display_date' => :'string',
        :'suitability_score' => :'string',
        :'video_id' => :'string',
        :'display_tag' => :'string',
        :'display_summary' => :'string',
        :'vestorly_url' => :'string',
        :'title' => :'string'
        
      }
    end

    def initialize(attributes = {})
      return if !attributes.is_a?(Hash) || attributes.empty?

      # convert string to symbol for hash key
      attributes = attributes.inject({}){|memo,(k,v)| memo[k.to_sym] = v; memo}

      
      if attributes[:'_id']
        @_id = attributes[:'_id']
      end
      
      if attributes[:'created_at']
        @created_at = attributes[:'created_at']
      end
      
      if attributes[:'updated_at']
        @updated_at = attributes[:'updated_at']
      end
      
      if attributes[:'external_url']
        @external_url = attributes[:'external_url']
      end
      
      if attributes[:'external_url_source']
        @external_url_source = attributes[:'external_url_source']
      end
      
      if attributes[:'external_url_type']
        @external_url_type = attributes[:'external_url_type']
      end
      
      if attributes[:'image_path']
        @image_path = attributes[:'image_path']
      end
      
      if attributes[:'image_url']
        @image_url = attributes[:'image_url']
      end
      
      if attributes[:'image_height']
        @image_height = attributes[:'image_height']
      end
      
      if attributes[:'image_width']
        @image_width = attributes[:'image_width']
      end
      
      if attributes[:'logo_url']
        @logo_url = attributes[:'logo_url']
      end
      
      if attributes[:'square_logo_url']
        @square_logo_url = attributes[:'square_logo_url']
      end
      
      if attributes[:'needs_sanitize']
        @needs_sanitize = attributes[:'needs_sanitize']
      end
      
      if attributes[:'summary']
        @summary = attributes[:'summary']
      end
      
      if attributes[:'topic']
        @topic = attributes[:'topic']
      end
      
      if attributes[:'approval_status']
        @approval_status = attributes[:'approval_status']
      end
      
      if attributes[:'approval_transactions']
        if (value = attributes[:'approval_transactions']).is_a?(Array)
          @approval_transactions = value
        end
      end
      
      if attributes[:'group_ids']
        if (value = attributes[:'group_ids']).is_a?(Array)
          @group_ids = value
        end
      end
      
      if attributes[:'slug']
        @slug = attributes[:'slug']
      end
      
      if attributes[:'article_id']
        @article_id = attributes[:'article_id']
      end
      
      if attributes[:'comment']
        @comment = attributes[:'comment']
      end
      
      if attributes[:'newsletter_ids']
        if (value = attributes[:'newsletter_ids']).is_a?(Array)
          @newsletter_ids = value
        end
      end
      
      if attributes[:'is_featured']
        @is_featured = attributes[:'is_featured']
      end
      
      if attributes[:'advisor_id']
        @advisor_id = attributes[:'advisor_id']
      end
      
      if attributes[:'is_published']
        @is_published = attributes[:'is_published']
      end
      
      if attributes[:'is_responsive']
        @is_responsive = attributes[:'is_responsive']
      end
      
      if attributes[:'is_proxy_needed']
        @is_proxy_needed = attributes[:'is_proxy_needed']
      end
      
      if attributes[:'is_mobile_proxy_needed']
        @is_mobile_proxy_needed = attributes[:'is_mobile_proxy_needed']
      end
      
      if attributes[:'proxy_url']
        @proxy_url = attributes[:'proxy_url']
      end
      
      if attributes[:'video']
        @video = attributes[:'video']
      end
      
      if attributes[:'pdf_attachment_url']
        @pdf_attachment_url = attributes[:'pdf_attachment_url']
      end
      
      if attributes[:'post_date']
        @post_date = attributes[:'post_date']
      end
      
      if attributes[:'display_date']
        @display_date = attributes[:'display_date']
      end
      
      if attributes[:'suitability_score']
        @suitability_score = attributes[:'suitability_score']
      end
      
      if attributes[:'video_id']
        @video_id = attributes[:'video_id']
      end
      
      if attributes[:'display_tag']
        @display_tag = attributes[:'display_tag']
      end
      
      if attributes[:'display_summary']
        @display_summary = attributes[:'display_summary']
      end
      
      if attributes[:'vestorly_url']
        @vestorly_url = attributes[:'vestorly_url']
      end
      
      if attributes[:'title']
        @title = attributes[:'title']
      end
      
    end
  end
end
