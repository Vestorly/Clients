module Vestorly
  # 
  class NewsletterSettings < BaseObject
    attr_accessor :newsletter_settings
    # attribute mapping from ruby-style variable name to JSON key
    def self.attribute_map
      {
        
        # 
        :'newsletter_settings' => :'newsletter_settings'
        
      }
    end

    # attribute type
    def self.swagger_types
      {
        :'newsletter_settings' => :'array[NewsletterSetting]'
        
      }
    end

    def initialize(attributes = {})
      return if !attributes.is_a?(Hash) || attributes.empty?

      # convert string to symbol for hash key
      attributes = attributes.inject({}){|memo,(k,v)| memo[k.to_sym] = v; memo}

      
      if attributes[:'newsletter_settings']
        if (value = attributes[:'newsletter_settings']).is_a?(Array)
          @newsletter_settings = value
        end
      end
      
    end
  end
end
