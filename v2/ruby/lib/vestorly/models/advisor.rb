module Vestorly
  # 
  class Advisor < BaseObject
    attr_accessor :company, :address, :city, :state, :zip, :first_name, :last_name, :reg_number, :account_type, :advisor_employees, :other_services_types, :other_compensation, :performance_audited, :about, :twitter_handle, :profile_picture, :logo, :linkedin, :website, :adv_brochure, :plan, :consultation_reminder, :referral_reminder, :weekly_email_blast, :disclosure, :external_options, :email_report_blast, :email_blast, :twitter_blast, :linkedin_blast, :facebook_blast, :compliance_bcc_email_address, :dashboard_url, :api_key, :id, :name, :tag
    # attribute mapping from ruby-style variable name to JSON key
    def self.attribute_map
      {
        
        # 
        :'company' => :'company',
        
        # 
        :'address' => :'address',
        
        # 
        :'city' => :'city',
        
        # 
        :'state' => :'state',
        
        # 
        :'zip' => :'zip',
        
        # 
        :'first_name' => :'first_name',
        
        # 
        :'last_name' => :'last_name',
        
        # 
        :'reg_number' => :'reg_number',
        
        # 
        :'account_type' => :'account_type',
        
        # 
        :'advisor_employees' => :'advisor_employees',
        
        # 
        :'other_services_types' => :'other_services_types',
        
        # 
        :'other_compensation' => :'other_compensation',
        
        # 
        :'performance_audited' => :'performance_audited',
        
        # 
        :'about' => :'about',
        
        # 
        :'twitter_handle' => :'twitter_handle',
        
        # 
        :'profile_picture' => :'profile_picture',
        
        # 
        :'logo' => :'logo',
        
        # 
        :'linkedin' => :'linkedin',
        
        # 
        :'website' => :'website',
        
        # 
        :'adv_brochure' => :'adv_brochure',
        
        # 
        :'plan' => :'plan',
        
        # 
        :'consultation_reminder' => :'consultation_reminder',
        
        # 
        :'referral_reminder' => :'referral_reminder',
        
        # 
        :'weekly_email_blast' => :'weekly_email_blast',
        
        # 
        :'disclosure' => :'disclosure',
        
        # 
        :'external_options' => :'external_options',
        
        # 
        :'email_report_blast' => :'email_report_blast',
        
        # 
        :'email_blast' => :'email_blast',
        
        # 
        :'twitter_blast' => :'twitter_blast',
        
        # 
        :'linkedin_blast' => :'linkedin_blast',
        
        # 
        :'facebook_blast' => :'facebook_blast',
        
        # 
        :'compliance_bcc_email_address' => :'compliance_bcc_email_address',
        
        # 
        :'dashboard_url' => :'dashboard_url',
        
        # 
        :'api_key' => :'api_key',
        
        # 
        :'id' => :'id',
        
        # 
        :'name' => :'name',
        
        # 
        :'tag' => :'tag'
        
      }
    end

    # attribute type
    def self.swagger_types
      {
        :'company' => :'string',
        :'address' => :'string',
        :'city' => :'string',
        :'state' => :'string',
        :'zip' => :'string',
        :'first_name' => :'string',
        :'last_name' => :'string',
        :'reg_number' => :'string',
        :'account_type' => :'string',
        :'advisor_employees' => :'string',
        :'other_services_types' => :'string',
        :'other_compensation' => :'string',
        :'performance_audited' => :'string',
        :'about' => :'string',
        :'twitter_handle' => :'string',
        :'profile_picture' => :'string',
        :'logo' => :'string',
        :'linkedin' => :'string',
        :'website' => :'string',
        :'adv_brochure' => :'string',
        :'plan' => :'string',
        :'consultation_reminder' => :'string',
        :'referral_reminder' => :'string',
        :'weekly_email_blast' => :'string',
        :'disclosure' => :'string',
        :'external_options' => :'string',
        :'email_report_blast' => :'string',
        :'email_blast' => :'string',
        :'twitter_blast' => :'string',
        :'linkedin_blast' => :'string',
        :'facebook_blast' => :'string',
        :'compliance_bcc_email_address' => :'string',
        :'dashboard_url' => :'string',
        :'api_key' => :'string',
        :'id' => :'string',
        :'name' => :'string',
        :'tag' => :'string'
        
      }
    end

    def initialize(attributes = {})
      return if !attributes.is_a?(Hash) || attributes.empty?

      # convert string to symbol for hash key
      attributes = attributes.inject({}){|memo,(k,v)| memo[k.to_sym] = v; memo}

      
      if attributes[:'company']
        @company = attributes[:'company']
      end
      
      if attributes[:'address']
        @address = attributes[:'address']
      end
      
      if attributes[:'city']
        @city = attributes[:'city']
      end
      
      if attributes[:'state']
        @state = attributes[:'state']
      end
      
      if attributes[:'zip']
        @zip = attributes[:'zip']
      end
      
      if attributes[:'first_name']
        @first_name = attributes[:'first_name']
      end
      
      if attributes[:'last_name']
        @last_name = attributes[:'last_name']
      end
      
      if attributes[:'reg_number']
        @reg_number = attributes[:'reg_number']
      end
      
      if attributes[:'account_type']
        @account_type = attributes[:'account_type']
      end
      
      if attributes[:'advisor_employees']
        @advisor_employees = attributes[:'advisor_employees']
      end
      
      if attributes[:'other_services_types']
        @other_services_types = attributes[:'other_services_types']
      end
      
      if attributes[:'other_compensation']
        @other_compensation = attributes[:'other_compensation']
      end
      
      if attributes[:'performance_audited']
        @performance_audited = attributes[:'performance_audited']
      end
      
      if attributes[:'about']
        @about = attributes[:'about']
      end
      
      if attributes[:'twitter_handle']
        @twitter_handle = attributes[:'twitter_handle']
      end
      
      if attributes[:'profile_picture']
        @profile_picture = attributes[:'profile_picture']
      end
      
      if attributes[:'logo']
        @logo = attributes[:'logo']
      end
      
      if attributes[:'linkedin']
        @linkedin = attributes[:'linkedin']
      end
      
      if attributes[:'website']
        @website = attributes[:'website']
      end
      
      if attributes[:'adv_brochure']
        @adv_brochure = attributes[:'adv_brochure']
      end
      
      if attributes[:'plan']
        @plan = attributes[:'plan']
      end
      
      if attributes[:'consultation_reminder']
        @consultation_reminder = attributes[:'consultation_reminder']
      end
      
      if attributes[:'referral_reminder']
        @referral_reminder = attributes[:'referral_reminder']
      end
      
      if attributes[:'weekly_email_blast']
        @weekly_email_blast = attributes[:'weekly_email_blast']
      end
      
      if attributes[:'disclosure']
        @disclosure = attributes[:'disclosure']
      end
      
      if attributes[:'external_options']
        @external_options = attributes[:'external_options']
      end
      
      if attributes[:'email_report_blast']
        @email_report_blast = attributes[:'email_report_blast']
      end
      
      if attributes[:'email_blast']
        @email_blast = attributes[:'email_blast']
      end
      
      if attributes[:'twitter_blast']
        @twitter_blast = attributes[:'twitter_blast']
      end
      
      if attributes[:'linkedin_blast']
        @linkedin_blast = attributes[:'linkedin_blast']
      end
      
      if attributes[:'facebook_blast']
        @facebook_blast = attributes[:'facebook_blast']
      end
      
      if attributes[:'compliance_bcc_email_address']
        @compliance_bcc_email_address = attributes[:'compliance_bcc_email_address']
      end
      
      if attributes[:'dashboard_url']
        @dashboard_url = attributes[:'dashboard_url']
      end
      
      if attributes[:'api_key']
        @api_key = attributes[:'api_key']
      end
      
      if attributes[:'id']
        @id = attributes[:'id']
      end
      
      if attributes[:'name']
        @name = attributes[:'name']
      end
      
      if attributes[:'tag']
        @tag = attributes[:'tag']
      end
      
    end
  end
end
