module Vestorly
  # 
  class OrgSetting < BaseObject
    attr_accessor :_id, :is_default, :name, :email_theme_name, :company_address, :company_contact_email, :site_url, :company_homepage_url, :privacy_policy_url, :terms_and_conditions_url
    # attribute mapping from ruby-style variable name to JSON key
    def self.attribute_map
      {
        
        # 
        :'_id' => :'_id',
        
        # 
        :'is_default' => :'is_default',
        
        # 
        :'name' => :'name',
        
        # 
        :'email_theme_name' => :'email_theme_name',
        
        # 
        :'company_address' => :'company_address',
        
        # 
        :'company_contact_email' => :'company_contact_email',
        
        # 
        :'site_url' => :'site_url',
        
        # 
        :'company_homepage_url' => :'company_homepage_url',
        
        # 
        :'privacy_policy_url' => :'privacy_policy_url',
        
        # 
        :'terms_and_conditions_url' => :'terms_and_conditions_url'
        
      }
    end

    # attribute type
    def self.swagger_types
      {
        :'_id' => :'string',
        :'is_default' => :'boolean',
        :'name' => :'string',
        :'email_theme_name' => :'string',
        :'company_address' => :'string',
        :'company_contact_email' => :'string',
        :'site_url' => :'string',
        :'company_homepage_url' => :'string',
        :'privacy_policy_url' => :'string',
        :'terms_and_conditions_url' => :'string'
        
      }
    end

    def initialize(attributes = {})
      return if !attributes.is_a?(Hash) || attributes.empty?

      # convert string to symbol for hash key
      attributes = attributes.inject({}){|memo,(k,v)| memo[k.to_sym] = v; memo}

      
      if attributes[:'_id']
        @_id = attributes[:'_id']
      end
      
      if attributes[:'is_default']
        @is_default = attributes[:'is_default']
      end
      
      if attributes[:'name']
        @name = attributes[:'name']
      end
      
      if attributes[:'email_theme_name']
        @email_theme_name = attributes[:'email_theme_name']
      end
      
      if attributes[:'company_address']
        @company_address = attributes[:'company_address']
      end
      
      if attributes[:'company_contact_email']
        @company_contact_email = attributes[:'company_contact_email']
      end
      
      if attributes[:'site_url']
        @site_url = attributes[:'site_url']
      end
      
      if attributes[:'company_homepage_url']
        @company_homepage_url = attributes[:'company_homepage_url']
      end
      
      if attributes[:'privacy_policy_url']
        @privacy_policy_url = attributes[:'privacy_policy_url']
      end
      
      if attributes[:'terms_and_conditions_url']
        @terms_and_conditions_url = attributes[:'terms_and_conditions_url']
      end
      
    end
  end
end
