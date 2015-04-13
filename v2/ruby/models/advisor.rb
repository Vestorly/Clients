
class Advisor
  attr_accessor :_id, :company, :address, :city, :state, :zip, :first_name, :last_name, :reg_number, :account_type, :advisor_employees, :assets, :num_clients
  # :internal => :external
  def self.attribute_map
    {
      :_id => :'_id',
      :company => :'company',
      :address => :'address',
      :city => :'city',
      :state => :'state',
      :zip => :'zip',
      :first_name => :'first_name',
      :last_name => :'last_name',
      :reg_number => :'reg_number',
      :account_type => :'account_type',
      :advisor_employees => :'advisor_employees',
      :assets => :'assets',
      :num_clients => :'num_clients'
      
    }
  end

  def initialize(attributes = {})
    return if attributes.empty?
    # Morph attribute keys into undescored rubyish style
    
    if self.class.attribute_map[:"_id"]
      @_id = attributes["_id"]
    end
    
    if self.class.attribute_map[:"company"]
      @company = attributes["company"]
    end
    
    if self.class.attribute_map[:"address"]
      @address = attributes["address"]
    end
    
    if self.class.attribute_map[:"city"]
      @city = attributes["city"]
    end
    
    if self.class.attribute_map[:"state"]
      @state = attributes["state"]
    end
    
    if self.class.attribute_map[:"zip"]
      @zip = attributes["zip"]
    end
    
    if self.class.attribute_map[:"first_name"]
      @first_name = attributes["first_name"]
    end
    
    if self.class.attribute_map[:"last_name"]
      @last_name = attributes["last_name"]
    end
    
    if self.class.attribute_map[:"reg_number"]
      @reg_number = attributes["reg_number"]
    end
    
    if self.class.attribute_map[:"account_type"]
      @account_type = attributes["account_type"]
    end
    
    if self.class.attribute_map[:"advisor_employees"]
      @advisor_employees = attributes["advisor_employees"]
    end
    
    if self.class.attribute_map[:"assets"]
      @assets = attributes["assets"]
    end
    
    if self.class.attribute_map[:"num_clients"]
      @num_clients = attributes["num_clients"]
    end
    
  end

  def to_body
    body = {}
    self.class.attribute_map.each_pair do |key, value|
      body[value] = self.send(key) unless self.send(key).nil?
    end
    body
  end
end
