exports.models = {
  "Post": {
  "required" : [ "_id", "body", "comment", "title" ],
  "properties" : {
    "_id" : {
      "type" : "string",
      "description" : "Id of object"
    },
    "title" : {
      "type" : "string",
      "description" : "Title of the post"
    },
    "body" : {
      "type" : "string",
      "description" : "Body of the post"
    },
    "comment" : {
      "type" : "string",
      "description" : "Comment associated with the post"
    },
    "video" : {
      "type" : "string",
      "description" : "Video associated with the post"
    },
    "img" : {
      "type" : "string",
      "description" : "Image associated with the post"
    }
  },
  "description" : "A Post object.",
  "id" : "Post"
},"Advisor": {
  "required" : [ "_id", "account_type", "address", "advisor_employees", "assets", "city", "company", "first_name", "last_name", "num_clients", "reg_number", "state", "zip" ],
  "properties" : {
    "_id" : {
      "type" : "string",
      "description" : "Id of object"
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
    },
    "state" : {
      "type" : "string",
      "description" : "State of advisor"
    },
    "zip" : {
      "type" : "string",
      "description" : "Zip of advisor"
    },
    "first_name" : {
      "type" : "string",
      "description" : "First name of advisor"
    },
    "last_name" : {
      "type" : "string",
      "description" : "Last name of advisor"
    },
    "reg_number" : {
      "type" : "string",
      "description" : "Registration number of advisor"
    },
    "account_type" : {
      "type" : "string",
      "description" : "Account type of advisor"
    },
    "advisor_employees" : {
      "type" : "string",
      "description" : "Employees of advisor"
    },
    "assets" : {
      "type" : "string",
      "description" : "Assets of advisor"
    },
    "num_clients" : {
      "type" : "integer",
      "format" : "int32",
      "description" : "Number of clients the advisor has"
    }
  },
  "description" : "An Advisor object.",
  "id" : "Advisor"
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
  "description" : "A Member object.",
  "id" : "Member"
}
}