module Vestorly
  # 
  class GroupInput < BaseObject
    attr_accessor :_id, :name, :is_default, :is_hidden, :new_weekly_mailer_content, :newsletter_subject, :autopublish, :number_articles_per_group, :number_articles_per_newsletter
    # attribute mapping from ruby-style variable name to JSON key
    def self.attribute_map
      {
        
        # 
        :'_id' => :'_id',
        
        # 
        :'name' => :'name',
        
        # 
        :'is_default' => :'is_default',
        
        # 
        :'is_hidden' => :'is_hidden',
        
        # 
        :'new_weekly_mailer_content' => :'new_weekly_mailer_content',
        
        # 
        :'newsletter_subject' => :'newsletter_subject',
        
        # 
        :'autopublish' => :'autopublish',
        
        # 
        :'number_articles_per_group' => :'number_articles_per_group',
        
        # 
        :'number_articles_per_newsletter' => :'number_articles_per_newsletter'
        
      }
    end

    # attribute type
    def self.swagger_types
      {
        :'_id' => :'string',
        :'name' => :'string',
        :'is_default' => :'boolean',
        :'is_hidden' => :'boolean',
        :'new_weekly_mailer_content' => :'string',
        :'newsletter_subject' => :'string',
        :'autopublish' => :'boolean',
        :'number_articles_per_group' => :'int',
        :'number_articles_per_newsletter' => :'int'
        
      }
    end

    def initialize(attributes = {})
      return if !attributes.is_a?(Hash) || attributes.empty?

      # convert string to symbol for hash key
      attributes = attributes.inject({}){|memo,(k,v)| memo[k.to_sym] = v; memo}

      
      if attributes[:'_id']
        @_id = attributes[:'_id']
      end
      
      if attributes[:'name']
        @name = attributes[:'name']
      end
      
      if attributes[:'is_default']
        @is_default = attributes[:'is_default']
      end
      
      if attributes[:'is_hidden']
        @is_hidden = attributes[:'is_hidden']
      end
      
      if attributes[:'new_weekly_mailer_content']
        @new_weekly_mailer_content = attributes[:'new_weekly_mailer_content']
      end
      
      if attributes[:'newsletter_subject']
        @newsletter_subject = attributes[:'newsletter_subject']
      end
      
      if attributes[:'autopublish']
        @autopublish = attributes[:'autopublish']
      end
      
      if attributes[:'number_articles_per_group']
        @number_articles_per_group = attributes[:'number_articles_per_group']
      end
      
      if attributes[:'number_articles_per_newsletter']
        @number_articles_per_newsletter = attributes[:'number_articles_per_newsletter']
      end
      
    end
  end
end
