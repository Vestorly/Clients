
class MemberReports
  attr_accessor :member_reports
  # :internal => :external
  def self.attribute_map
    {
      :member_reports => :'member_reports'
      
    }
  end

  def initialize(attributes = {})
    return if attributes.empty?
    # Morph attribute keys into undescored rubyish style
    
    if self.class.attribute_map[:"member_reports"]
      if (value = attributes["member_reports"]).is_a?(Array)
        @member_reports = value.map{ |v| MemberReport.new(v) }
      end
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
