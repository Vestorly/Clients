'use strict';

exports.findArticles = function(vestorly-auth, limit, text_query, sort_direction, sort_by) {

  var examples = {};
  
  examples['application/json'] = {
  "articles" : [ { } ]
};
  

  
  if(Object.keys(examples).length > 0)
    return examples[Object.keys(examples)[0]];
  
}
exports.findArticleByID = function(id) {

  var examples = {};
  
  examples['application/json'] = {
  "article" : { }
};
  

  
  if(Object.keys(examples).length > 0)
    return examples[Object.keys(examples)[0]];
  
}
