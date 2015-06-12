module Vestorly
  # 
  class Settings < BaseObject
    attr_accessor :_id, :company, :picture_url, :website, :disclosure, :adv_brochure, :slug, :name, :orgsetting, :feature, :personalsetting
    # attribute mapping from ruby-style variable name to JSON key
    def self.attribute_map
      {
        
        # 
        :'_id' => :'_id',
        
        # 
        :'company' => :'company',
        
        # 
        :'picture_url' => :'picture_url',
        
        # 
        :'website' => :'website',
        
        # 
        :'disclosure' => :'disclosure',
        
        # 
        :'adv_brochure' => :'adv_brochure',
        
        # 
        :'slug' => :'slug',
        
        # 
        :'name' => :'name',
        
        # 
        :'orgsetting' => :'orgsetting',
        
        # 
        :'feature' => :'feature',
        
        # 
        :'personalsetting' => :'personalsetting'
        
      }
    end

    # attribute type
    def self.swagger_types
      {
        :'_id' => :'string',
        :'company' => :'string',
        :'picture_url' => :'string',
        :'website' => :'string',
        :'disclosure' => :'string',
        :'adv_brochure' => :'string',
        :'slug' => :'string',
        :'name' => :'string',
        :'orgsetting' => :'OrgSetting',
        :'feature' => :'Features',
        :'personalsetting' => :'PersonalSettings'
        
      }
    end

    def initialize(attributes = {})
      return if !attributes.is_a?(Hash) || attributes.empty?

      # convert string to symbol for hash key
      attributes = attributes.inject({}){|memo,(k,v)| memo[k.to_sym] = v; memo}

      
      if attributes[:'_id']
        @_id = attributes[:'_id']
      end
      
      if attributes[:'company']
        @company = attributes[:'company']
      end
      
      if attributes[:'picture_url']
        @picture_url = attributes[:'picture_url']
      end
      
      if attributes[:'website']
        @website = attributes[:'website']
      end
      
      if attributes[:'disclosure']
        @disclosure = attributes[:'disclosure']
      end
      
      if attributes[:'adv_brochure']
        @adv_brochure = attributes[:'adv_brochure']
      end
      
      if attributes[:'slug']
        @slug = attributes[:'slug']
      end
      
      if attributes[:'name']
        @name = attributes[:'name']
      end
      
      if attributes[:'orgsetting']
        @orgsetting = attributes[:'orgsetting']
      end
      
      if attributes[:'feature']
        @feature = attributes[:'feature']
      end
      
      if attributes[:'personalsetting']
        @personalsetting = attributes[:'personalsetting']
      end
      
    end
  end
end
