
class PostInput
  attr_accessor :created_at, :updated_at, :external_url, :external_url_source, :external_url_type, :image_path, :image_url, :image_height, :image_width, :logo_url, :square_logo_url, :needs_sanitize, :summary, :topic, :approval_status, :approval_transactions, :group_ids, :slug, :article_id, :comment, :newsletter_ids, :is_featured, :advisor_id, :is_published, :is_responsive, :is_proxy_needed, :is_mobile_proxy_needed, :proxy_url, :video, :pdf_attachment_url, :post_date, :display_date, :suitability_score, :video_id, :display_tag, :display_summary, :vestorly_url
  # :internal => :external
  def self.attribute_map
    {
      :created_at => :'created_at',
      :updated_at => :'updated_at',
      :external_url => :'external_url',
      :external_url_source => :'external_url_source',
      :external_url_type => :'external_url_type',
      :image_path => :'image_path',
      :image_url => :'image_url',
      :image_height => :'image_height',
      :image_width => :'image_width',
      :logo_url => :'logo_url',
      :square_logo_url => :'square_logo_url',
      :needs_sanitize => :'needs_sanitize',
      :summary => :'summary',
      :topic => :'topic',
      :approval_status => :'approval_status',
      :approval_transactions => :'approval_transactions',
      :group_ids => :'group_ids',
      :slug => :'slug',
      :article_id => :'article_id',
      :comment => :'comment',
      :newsletter_ids => :'newsletter_ids',
      :is_featured => :'is_featured',
      :advisor_id => :'advisor_id',
      :is_published => :'is_published',
      :is_responsive => :'is_responsive',
      :is_proxy_needed => :'is_proxy_needed',
      :is_mobile_proxy_needed => :'is_mobile_proxy_needed',
      :proxy_url => :'proxy_url',
      :video => :'video',
      :pdf_attachment_url => :'pdf_attachment_url',
      :post_date => :'post_date',
      :display_date => :'display_date',
      :suitability_score => :'suitability_score',
      :video_id => :'video_id',
      :display_tag => :'display_tag',
      :display_summary => :'display_summary',
      :vestorly_url => :'vestorly_url'
      
    }
  end

  def initialize(attributes = {})
    return if attributes.empty?
    # Morph attribute keys into undescored rubyish style
    
    if self.class.attribute_map[:"created_at"]
      @created_at = attributes["created_at"]
    end
    
    if self.class.attribute_map[:"updated_at"]
      @updated_at = attributes["updated_at"]
    end
    
    if self.class.attribute_map[:"external_url"]
      @external_url = attributes["external_url"]
    end
    
    if self.class.attribute_map[:"external_url_source"]
      @external_url_source = attributes["external_url_source"]
    end
    
    if self.class.attribute_map[:"external_url_type"]
      @external_url_type = attributes["external_url_type"]
    end
    
    if self.class.attribute_map[:"image_path"]
      @image_path = attributes["image_path"]
    end
    
    if self.class.attribute_map[:"image_url"]
      @image_url = attributes["image_url"]
    end
    
    if self.class.attribute_map[:"image_height"]
      @image_height = attributes["image_height"]
    end
    
    if self.class.attribute_map[:"image_width"]
      @image_width = attributes["image_width"]
    end
    
    if self.class.attribute_map[:"logo_url"]
      @logo_url = attributes["logo_url"]
    end
    
    if self.class.attribute_map[:"square_logo_url"]
      @square_logo_url = attributes["square_logo_url"]
    end
    
    if self.class.attribute_map[:"needs_sanitize"]
      @needs_sanitize = attributes["needs_sanitize"]
    end
    
    if self.class.attribute_map[:"summary"]
      @summary = attributes["summary"]
    end
    
    if self.class.attribute_map[:"topic"]
      @topic = attributes["topic"]
    end
    
    if self.class.attribute_map[:"approval_status"]
      @approval_status = attributes["approval_status"]
    end
    
    if self.class.attribute_map[:"approval_transactions"]
      @approval_transactions = attributes["approval_transactions"]
    end
    
    if self.class.attribute_map[:"group_ids"]
      if (value = attributes["group_ids"]).is_a?(Array)
        @group_ids = value
      end
    end
    
    if self.class.attribute_map[:"slug"]
      @slug = attributes["slug"]
    end
    
    if self.class.attribute_map[:"article_id"]
      @article_id = attributes["article_id"]
    end
    
    if self.class.attribute_map[:"comment"]
      @comment = attributes["comment"]
    end
    
    if self.class.attribute_map[:"newsletter_ids"]
      if (value = attributes["newsletter_ids"]).is_a?(Array)
        @newsletter_ids = value
      end
    end
    
    if self.class.attribute_map[:"is_featured"]
      @is_featured = attributes["is_featured"]
    end
    
    if self.class.attribute_map[:"advisor_id"]
      @advisor_id = attributes["advisor_id"]
    end
    
    if self.class.attribute_map[:"is_published"]
      @is_published = attributes["is_published"]
    end
    
    if self.class.attribute_map[:"is_responsive"]
      @is_responsive = attributes["is_responsive"]
    end
    
    if self.class.attribute_map[:"is_proxy_needed"]
      @is_proxy_needed = attributes["is_proxy_needed"]
    end
    
    if self.class.attribute_map[:"is_mobile_proxy_needed"]
      @is_mobile_proxy_needed = attributes["is_mobile_proxy_needed"]
    end
    
    if self.class.attribute_map[:"proxy_url"]
      @proxy_url = attributes["proxy_url"]
    end
    
    if self.class.attribute_map[:"video"]
      @video = attributes["video"]
    end
    
    if self.class.attribute_map[:"pdf_attachment_url"]
      @pdf_attachment_url = attributes["pdf_attachment_url"]
    end
    
    if self.class.attribute_map[:"post_date"]
      @post_date = attributes["post_date"]
    end
    
    if self.class.attribute_map[:"display_date"]
      @display_date = attributes["display_date"]
    end
    
    if self.class.attribute_map[:"suitability_score"]
      @suitability_score = attributes["suitability_score"]
    end
    
    if self.class.attribute_map[:"video_id"]
      @video_id = attributes["video_id"]
    end
    
    if self.class.attribute_map[:"display_tag"]
      @display_tag = attributes["display_tag"]
    end
    
    if self.class.attribute_map[:"display_summary"]
      @display_summary = attributes["display_summary"]
    end
    
    if self.class.attribute_map[:"vestorly_url"]
      @vestorly_url = attributes["vestorly_url"]
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
