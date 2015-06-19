module Vestorly
  module Swagger
    class Configuration
      attr_accessor :format, :api_key, :username, :password, :auth_token, :scheme, :host, :base_path, :user_agent, :logger, :inject_format, :force_ending_format, :camelize_params, :user_agent
    
      # Defaults go in here..
      def initialize
        @format = 'json'
        @scheme = 'https'
        @host = 'staging.vestorly.com'
        @base_path = '/api/v2'
        @user_agent = "ruby-swagger-#{Swagger::VERSION}"
        @inject_format = false
        @force_ending_format = false
        @camelize_params = true
      end
    end
  end
end
