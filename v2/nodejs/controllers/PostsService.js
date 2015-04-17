'use strict';

exports.createPost = function(Post) {

  var examples = {};
  
  examples['application/json'] = "";
  

  
  if(Object.keys(examples).length > 0)
    return examples[Object.keys(examples)[0]];
  
}
