module Vestorly
  # 
  class MemberReports < BaseObject
    attr_accessor :member_reports
    # attribute mapping from ruby-style variable name to JSON key
    def self.attribute_map
      {
        
        # 
        :'member_reports' => :'member_reports'
        
      }
    end

    # attribute type
    def self.swagger_types
      {
        :'member_reports' => :'array[MemberReport]'
        
      }
    end

    def initialize(attributes = {})
      return if !attributes.is_a?(Hash) || attributes.empty?

      # convert string to symbol for hash key
      attributes = attributes.inject({}){|memo,(k,v)| memo[k.to_sym] = v; memo}

      
      if attributes[:'member_reports']
        if (value = attributes[:'member_reports']).is_a?(Array)
          @member_reports = value
        end
      end
      
    end
  end
end
