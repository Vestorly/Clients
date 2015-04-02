exports.models = {
  "RSSFeed": {
  "required" : [ "_id", "category", "logo_url", "name", "needs_sanitize", "url" ],
  "properties" : {
    "_id" : {
      "type" : "string",
      "description" : "Id of object"
    },
    "name" : {
      "type" : "string",
      "description" : "Name of rss feed"
    },
    "category" : {
      "type" : "string",
      "description" : "Category of rss feed"
    },
    "url" : {
      "description" : "URL of rss feed",
      "$ref" : "url"
    },
    "logo_url" : {
      "description" : "Logo URL of rss feed",
      "$ref" : "url"
    },
    "needs_sanitize" : {
      "type" : "string",
      "description" : "Does the feed need to be sanatized."
    }
  },
  "description" : "An RSSFeed document.",
  "id" : "RSSFeed"
},"Post": {
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
},"Article": {
  "required" : [ "_id", "categories", "content", "img", "is_mobile_proxy_needed", "is_proxy_needed", "is_responsive", "is_working_url", "large_image_url", "needs_sanitize", "open_calais_keywords", "open_calais_topics", "original_image_url", "override_topic", "parsed_html", "published_at", "rss_feed_category", "rss_feed_logo_url", "rss_feed_url", "small_image_url", "summary", "title", "unparsed_html", "url", "vestorly_topics", "webpage_mobile_image_url", "webpage_tablet_image_url" ],
  "properties" : {
    "_id" : {
      "type" : "string",
      "description" : "Id of object"
    },
    "url" : {
      "type" : "string",
      "description" : "URL of the article"
    },
    "title" : {
      "type" : "string",
      "description" : "Title of the article"
    },
    "open_calais_topics" : {
      "type" : "string",
      "description" : "Open calcais optics"
    },
    "open_calais_keywords" : {
      "type" : "string",
      "description" : "Open calais keywords"
    },
    "categories" : {
      "type" : "string",
      "description" : "Categories of article"
    },
    "summary" : {
      "type" : "string",
      "description" : "Summary of article"
    },
    "unparsed_html" : {
      "type" : "string",
      "description" : "Unparsed HTML"
    },
    "parsed_html" : {
      "type" : "string",
      "description" : "Parsed HTML"
    },
    "content" : {
      "type" : "string",
      "description" : "Content of article"
    },
    "vestorly_topics" : {
      "type" : "string",
      "description" : "Vestorly topics"
    },
    "override_topic" : {
      "type" : "string",
      "description" : "Override topics"
    },
    "published_at" : {
      "description" : "Article published at time",
      "$ref" : "datetime"
    },
    "original_image_url" : {
      "type" : "string",
      "description" : "Original image url"
    },
    "small_image_url" : {
      "type" : "string",
      "description" : "Small image url"
    },
    "large_image_url" : {
      "type" : "string",
      "description" : "Large image url"
    },
    "img" : {
      "type" : "string",
      "description" : "Image"
    },
    "webpage_mobile_image_url" : {
      "type" : "string",
      "description" : "Webpage mobile url"
    },
    "webpage_tablet_image_url" : {
      "type" : "string",
      "description" : "Webpage tablet url"
    },
    "rss_feed_url" : {
      "type" : "string",
      "description" : "Article URL"
    },
    "rss_feed_category" : {
      "type" : "string",
      "description" : "Article category"
    },
    "rss_feed_logo_url" : {
      "type" : "string",
      "description" : "Article logo"
    },
    "needs_sanitize" : {
      "type" : "boolean",
      "description" : "Does this article need sanitizing?"
    },
    "is_responsive" : {
      "type" : "boolean",
      "description" : "Is this article responsive"
    },
    "is_proxy_needed" : {
      "type" : "boolean",
      "description" : "Is a proxy used for this article"
    },
    "is_mobile_proxy_needed" : {
      "type" : "boolean",
      "description" : "Is mobile proxying needed"
    },
    "is_working_url" : {
      "type" : "boolean",
      "description" : "Is working url?"
    }
  },
  "description" : "An Article document.",
  "id" : "Article"
},"Event": {
  "required" : [ "_id", "advisor_email", "newsletter", "original_url", "originator_email", "originator_group_name", "referrer", "subject_email", "type" ],
  "properties" : {
    "_id" : {
      "type" : "string",
      "description" : "Id of object"
    },
    "type" : {
      "description" : "Type of the event",
      "$ref" : "symbol"
    },
    "referrer" : {
      "type" : "string",
      "description" : "Event referrer"
    },
    "original_url" : {
      "type" : "string",
      "description" : "Originator URL"
    },
    "originator_email" : {
      "type" : "string",
      "description" : "Originator email"
    },
    "subject_email" : {
      "type" : "string",
      "description" : "Subject email"
    },
    "advisor_email" : {
      "type" : "string",
      "description" : "Advisor email"
    },
    "originator_group_name" : {
      "type" : "string",
      "description" : "Original group name"
    },
    "newsletter" : {
      "type" : "string",
      "description" : "Newsletter"
    }
  },
  "description" : "An Event document.",
  "id" : "Event"
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
},"Source": {
  "required" : [ "_id", "custom_rss_feed", "enabled", "logo_url", "name", "rss_publisher", "url" ],
  "properties" : {
    "_id" : {
      "type" : "string",
      "description" : "Id of source"
    },
    "name" : {
      "type" : "string",
      "description" : "Name of source"
    },
    "url" : {
      "type" : "string",
      "description" : "Url of source"
    },
    "logo_url" : {
      "type" : "string",
      "description" : "Logo url of source"
    },
    "enabled" : {
      "type" : "boolean",
      "description" : "Is the source enabled"
    },
    "custom_rss_feed" : {
      "type" : "boolean",
      "description" : "Is the source using custom RSS feed"
    },
    "rss_publisher" : {
      "type" : "string",
      "description" : "RSS publisher of the source"
    }
  },
  "description" : "A source object.",
  "id" : "Source"
}
}