module Vestorly
  # 
  class Newslettersettingresponse < BaseObject
    attr_accessor :newsletter_setting
    # attribute mapping from ruby-style variable name to JSON key
    def self.attribute_map
      {
        
        # 
        :'newsletter_setting' => :'newsletter_setting'
        
      }
    end

    # attribute type
    def self.swagger_types
      {
        :'newsletter_setting' => :'NewsletterSetting'
        
      }
    end

    def initialize(attributes = {})
      return if !attributes.is_a?(Hash) || attributes.empty?

      # convert string to symbol for hash key
      attributes = attributes.inject({}){|memo,(k,v)| memo[k.to_sym] = v; memo}

      
      if attributes[:'newsletter_setting']
        @newsletter_setting = attributes[:'newsletter_setting']
      end
      
    end
  end
end
