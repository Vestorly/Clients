'use strict';

exports.findAdvisorByID = function(vestorly-auth, id) {

  var examples = {};
  
  examples['application/json'] = {
  "advisor" : {
    "name" : "aeiou",
    "id" : "aeiou",
    "tag" : "aeiou"
  }
};
  

  
  if(Object.keys(examples).length > 0)
    return examples[Object.keys(examples)[0]];
  
}
