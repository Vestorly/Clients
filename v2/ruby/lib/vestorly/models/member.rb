module Vestorly
  # 
  class Member < BaseObject
    attr_accessor :_id, :email, :first_name, :last_name, :phone, :address, :city, :state, :zip, :gender, :interest_consultation, :interest_in_new_advisor, :assets, :age, :data_estimated, :education, :high_net_worth, :home_market_value, :home_owner_status, :household_income, :marital_status, :occupation, :hometown, :family, :tags, :subscribed_group_ids, :unsubscribed, :unsubscribed_date, :user_type, :signed_up_with, :message, :location, :picture_url, :profile_url, :estimated_location, :estimated_zip, :register_ip_addr, :genuine_email, :last_active_date, :is_client, :is_hidden, :invited_on, :invited_by, :portfolio_size
    # attribute mapping from ruby-style variable name to JSON key
    def self.attribute_map
      {
        
        # 
        :'_id' => :'_id',
        
        # 
        :'email' => :'email',
        
        # 
        :'first_name' => :'first_name',
        
        # 
        :'last_name' => :'last_name',
        
        # 
        :'phone' => :'phone',
        
        # 
        :'address' => :'address',
        
        # 
        :'city' => :'city',
        
        # 
        :'state' => :'state',
        
        # 
        :'zip' => :'zip',
        
        # 
        :'gender' => :'gender',
        
        # 
        :'interest_consultation' => :'interest_consultation',
        
        # 
        :'interest_in_new_advisor' => :'interest_in_new_advisor',
        
        # 
        :'assets' => :'assets',
        
        # 
        :'age' => :'age',
        
        # 
        :'data_estimated' => :'data_estimated',
        
        # 
        :'education' => :'education',
        
        # 
        :'high_net_worth' => :'high_net_worth',
        
        # 
        :'home_market_value' => :'home_market_value',
        
        # 
        :'home_owner_status' => :'home_owner_status',
        
        # 
        :'household_income' => :'household_income',
        
        # 
        :'marital_status' => :'marital_status',
        
        # 
        :'occupation' => :'occupation',
        
        # 
        :'hometown' => :'hometown',
        
        # 
        :'family' => :'family',
        
        # 
        :'tags' => :'tags',
        
        # 
        :'subscribed_group_ids' => :'subscribed_group_ids',
        
        # 
        :'unsubscribed' => :'unsubscribed',
        
        # 
        :'unsubscribed_date' => :'unsubscribed_date',
        
        # 
        :'user_type' => :'user_type',
        
        # 
        :'signed_up_with' => :'signed_up_with',
        
        # 
        :'message' => :'message',
        
        # 
        :'location' => :'location',
        
        # 
        :'picture_url' => :'picture_url',
        
        # 
        :'profile_url' => :'profile_url',
        
        # 
        :'estimated_location' => :'estimated_location',
        
        # 
        :'estimated_zip' => :'estimated_zip',
        
        # 
        :'register_ip_addr' => :'register_ip_addr',
        
        # 
        :'genuine_email' => :'genuine_email',
        
        # 
        :'last_active_date' => :'last_active_date',
        
        # 
        :'is_client' => :'is_client',
        
        # 
        :'is_hidden' => :'is_hidden',
        
        # 
        :'invited_on' => :'invited_on',
        
        # 
        :'invited_by' => :'invited_by',
        
        # 
        :'portfolio_size' => :'portfolio_size'
        
      }
    end

    # attribute type
    def self.swagger_types
      {
        :'_id' => :'string',
        :'email' => :'string',
        :'first_name' => :'string',
        :'last_name' => :'string',
        :'phone' => :'string',
        :'address' => :'string',
        :'city' => :'string',
        :'state' => :'string',
        :'zip' => :'string',
        :'gender' => :'string',
        :'interest_consultation' => :'string',
        :'interest_in_new_advisor' => :'string',
        :'assets' => :'string',
        :'age' => :'string',
        :'data_estimated' => :'boolean',
        :'education' => :'string',
        :'high_net_worth' => :'boolean',
        :'home_market_value' => :'string',
        :'home_owner_status' => :'string',
        :'household_income' => :'string',
        :'marital_status' => :'string',
        :'occupation' => :'string',
        :'hometown' => :'string',
        :'family' => :'string',
        :'tags' => :'array[string]',
        :'subscribed_group_ids' => :'array[string]',
        :'unsubscribed' => :'boolean',
        :'unsubscribed_date' => :'boolean',
        :'user_type' => :'string',
        :'signed_up_with' => :'string',
        :'message' => :'string',
        :'location' => :'string',
        :'picture_url' => :'string',
        :'profile_url' => :'string',
        :'estimated_location' => :'string',
        :'estimated_zip' => :'string',
        :'register_ip_addr' => :'string',
        :'genuine_email' => :'boolean',
        :'last_active_date' => :'string',
        :'is_client' => :'boolean',
        :'is_hidden' => :'boolean',
        :'invited_on' => :'string',
        :'invited_by' => :'string',
        :'portfolio_size' => :'string'
        
      }
    end

    def initialize(attributes = {})
      return if !attributes.is_a?(Hash) || attributes.empty?

      # convert string to symbol for hash key
      attributes = attributes.inject({}){|memo,(k,v)| memo[k.to_sym] = v; memo}

      
      if attributes[:'_id']
        @_id = attributes[:'_id']
      end
      
      if attributes[:'email']
        @email = attributes[:'email']
      end
      
      if attributes[:'first_name']
        @first_name = attributes[:'first_name']
      end
      
      if attributes[:'last_name']
        @last_name = attributes[:'last_name']
      end
      
      if attributes[:'phone']
        @phone = attributes[:'phone']
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
      
      if attributes[:'gender']
        @gender = attributes[:'gender']
      end
      
      if attributes[:'interest_consultation']
        @interest_consultation = attributes[:'interest_consultation']
      end
      
      if attributes[:'interest_in_new_advisor']
        @interest_in_new_advisor = attributes[:'interest_in_new_advisor']
      end
      
      if attributes[:'assets']
        @assets = attributes[:'assets']
      end
      
      if attributes[:'age']
        @age = attributes[:'age']
      end
      
      if attributes[:'data_estimated']
        @data_estimated = attributes[:'data_estimated']
      end
      
      if attributes[:'education']
        @education = attributes[:'education']
      end
      
      if attributes[:'high_net_worth']
        @high_net_worth = attributes[:'high_net_worth']
      end
      
      if attributes[:'home_market_value']
        @home_market_value = attributes[:'home_market_value']
      end
      
      if attributes[:'home_owner_status']
        @home_owner_status = attributes[:'home_owner_status']
      end
      
      if attributes[:'household_income']
        @household_income = attributes[:'household_income']
      end
      
      if attributes[:'marital_status']
        @marital_status = attributes[:'marital_status']
      end
      
      if attributes[:'occupation']
        @occupation = attributes[:'occupation']
      end
      
      if attributes[:'hometown']
        @hometown = attributes[:'hometown']
      end
      
      if attributes[:'family']
        @family = attributes[:'family']
      end
      
      if attributes[:'tags']
        if (value = attributes[:'tags']).is_a?(Array)
          @tags = value
        end
      end
      
      if attributes[:'subscribed_group_ids']
        if (value = attributes[:'subscribed_group_ids']).is_a?(Array)
          @subscribed_group_ids = value
        end
      end
      
      if attributes[:'unsubscribed']
        @unsubscribed = attributes[:'unsubscribed']
      end
      
      if attributes[:'unsubscribed_date']
        @unsubscribed_date = attributes[:'unsubscribed_date']
      end
      
      if attributes[:'user_type']
        @user_type = attributes[:'user_type']
      end
      
      if attributes[:'signed_up_with']
        @signed_up_with = attributes[:'signed_up_with']
      end
      
      if attributes[:'message']
        @message = attributes[:'message']
      end
      
      if attributes[:'location']
        @location = attributes[:'location']
      end
      
      if attributes[:'picture_url']
        @picture_url = attributes[:'picture_url']
      end
      
      if attributes[:'profile_url']
        @profile_url = attributes[:'profile_url']
      end
      
      if attributes[:'estimated_location']
        @estimated_location = attributes[:'estimated_location']
      end
      
      if attributes[:'estimated_zip']
        @estimated_zip = attributes[:'estimated_zip']
      end
      
      if attributes[:'register_ip_addr']
        @register_ip_addr = attributes[:'register_ip_addr']
      end
      
      if attributes[:'genuine_email']
        @genuine_email = attributes[:'genuine_email']
      end
      
      if attributes[:'last_active_date']
        @last_active_date = attributes[:'last_active_date']
      end
      
      if attributes[:'is_client']
        @is_client = attributes[:'is_client']
      end
      
      if attributes[:'is_hidden']
        @is_hidden = attributes[:'is_hidden']
      end
      
      if attributes[:'invited_on']
        @invited_on = attributes[:'invited_on']
      end
      
      if attributes[:'invited_by']
        @invited_by = attributes[:'invited_by']
      end
      
      if attributes[:'portfolio_size']
        @portfolio_size = attributes[:'portfolio_size']
      end
      
    end
  end
end
