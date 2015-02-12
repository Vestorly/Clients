exports.models = {
  "Advisor": {
  "required" : [ "_id", "address", "city", "company", "email", "phone" ],
  "properties" : {
    "_id" : {
      "type" : "string",
      "description" : "Id of object"
    },
    "email" : {
      "type" : "string",
      "description" : "Email address of advisor"
    },
    "phone" : {
      "type" : "string",
      "description" : "Phone number of advisor"
    },
    "company" : {
      "type" : "string",
      "description" : "Company of advisor"
    },
    "address" : {
      "type" : "string",
      "description" : "Address of advisor"
    },
    "city" : {
      "type" : "string",
      "description" : "City of advisor"
    }
  },
  "description" : "An Advisor object."
},"Member": {
  "required" : [ "_id", "email" ],
  "properties" : {
    "_id" : {
      "type" : "string",
      "description" : "Id of object"
    },
    "email" : {
      "type" : "string",
      "description" : "Email Address"
    },
    "first_name" : {
      "type" : "string",
      "description" : "First Name"
    },
    "last_name" : {
      "type" : "string",
      "description" : "Last Name"
    },
    "phone" : {
      "type" : "string",
      "description" : "Phone Number"
    },
    "address" : {
      "type" : "string",
      "description" : "Postal Address"
    },
    "city" : {
      "type" : "string",
      "description" : "Postal City"
    },
    "state" : {
      "type" : "string",
      "description" : "Postal State"
    },
    "zip" : {
      "type" : "string",
      "description" : "Postal Zipcode"
    },
    "gender" : {
      "type" : "string",
      "description" : "Gender"
    },
    "age" : {
      "type" : "string",
      "description" : "Age Range"
    },
    "education" : {
      "type" : "string",
      "description" : "Education"
    },
    "high_net_worth" : {
      "type" : "boolean",
      "description" : "High Net Worth"
    },
    "home_market_value" : {
      "type" : "string",
      "description" : "Home Market Value"
    },
    "home_owner_status" : {
      "type" : "string",
      "description" : "Home Owner Status"
    },
    "household_income" : {
      "type" : "string",
      "description" : "Household Income"
    },
    "marital_status" : {
      "type" : "string",
      "description" : "Marital Status"
    },
    "occupation" : {
      "type" : "string",
      "description" : "Occupation"
    },
    "hometown" : {
      "type" : "string",
      "description" : "Hometown"
    },
    "family" : {
      "type" : "string",
      "description" : "Family Members"
    },
    "tags" : {
      "type" : "string",
      "description" : "Tags"
    },
    "message" : {
      "type" : "string",
      "description" : "Message and notes"
    },
    "location" : {
      "type" : "string",
      "description" : "Location"
    },
    "picture_url" : {
      "type" : "string",
      "description" : "Picture URL"
    },
    "profile_url" : {
      "type" : "string",
      "description" : "Social Profile URL"
    },
    "estimated_location" : {
      "type" : "string",
      "description" : "Estimated Location"
    },
    "estimated_zip" : {
      "type" : "string",
      "description" : "Estimated Zipcode"
    },
    "register_ip_addr" : {
      "type" : "string",
      "description" : "First recorded IP Address"
    },
    "data_estimated" : {
      "type" : "boolean",
      "description" : "Data Estimated"
    },
    "genuine_email" : {
      "type" : "boolean",
      "description" : "Genuine Email address"
    }
  },
  "description" : "A Member object."
},"Session": {
  "required" : [ "_id" ],
  "properties" : {
    "_id" : {
      "type" : "string",
      "description" : "Id of session"
    }
  },
  "description" : "A Session object."
}
}