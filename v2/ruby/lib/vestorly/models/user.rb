module Vestorly
  # 
  class User < BaseObject
    attr_accessor :_id, :company, :picture_url, :website, :user_type, :slug, :name, :username, :first_name, :last_name, :new_user, :show_tour, :plan_setup, :plan_expired, :plan_status, :plan_id, :plan_stripe
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
        :'user_type' => :'user_type',
        
        # 
        :'slug' => :'slug',
        
        # 
        :'name' => :'name',
        
        # 
        :'username' => :'username',
        
        # 
        :'first_name' => :'first_name',
        
        # 
        :'last_name' => :'last_name',
        
        # 
        :'new_user' => :'new_user',
        
        # 
        :'show_tour' => :'show_tour',
        
        # 
        :'plan_setup' => :'plan_setup',
        
        # 
        :'plan_expired' => :'plan_expired',
        
        # 
        :'plan_status' => :'plan_status',
        
        # 
        :'plan_id' => :'plan_id',
        
        # 
        :'plan_stripe' => :'plan_stripe'
        
      }
    end

    # attribute type
    def self.swagger_types
      {
        :'_id' => :'string',
        :'company' => :'string',
        :'picture_url' => :'string',
        :'website' => :'string',
        :'user_type' => :'string',
        :'slug' => :'string',
        :'name' => :'string',
        :'username' => :'string',
        :'first_name' => :'string',
        :'last_name' => :'string',
        :'new_user' => :'boolean',
        :'show_tour' => :'boolean',
        :'plan_setup' => :'boolean',
        :'plan_expired' => :'boolean',
        :'plan_status' => :'string',
        :'plan_id' => :'string',
        :'plan_stripe' => :'boolean'
        
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
      
      if attributes[:'user_type']
        @user_type = attributes[:'user_type']
      end
      
      if attributes[:'slug']
        @slug = attributes[:'slug']
      end
      
      if attributes[:'name']
        @name = attributes[:'name']
      end
      
      if attributes[:'username']
        @username = attributes[:'username']
      end
      
      if attributes[:'first_name']
        @first_name = attributes[:'first_name']
      end
      
      if attributes[:'last_name']
        @last_name = attributes[:'last_name']
      end
      
      if attributes[:'new_user']
        @new_user = attributes[:'new_user']
      end
      
      if attributes[:'show_tour']
        @show_tour = attributes[:'show_tour']
      end
      
      if attributes[:'plan_setup']
        @plan_setup = attributes[:'plan_setup']
      end
      
      if attributes[:'plan_expired']
        @plan_expired = attributes[:'plan_expired']
      end
      
      if attributes[:'plan_status']
        @plan_status = attributes[:'plan_status']
      end
      
      if attributes[:'plan_id']
        @plan_id = attributes[:'plan_id']
      end
      
      if attributes[:'plan_stripe']
        @plan_stripe = attributes[:'plan_stripe']
      end
      
    end
  end
end
