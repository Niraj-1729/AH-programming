/*
 used in global scope for the entire script 
 it can be applied to individual functions 
 strict mode doesn't works with block statements enclosed in {} braces
*/

// whole- script strict mode syntax
 'use-strict';
 let v= "strict mode script";

//-----------------------------------------------------------
 // function strict() {

  // Function-level strict mode syntax
  'use strict';

  function nested() { return 'Javascript on GeeksforGeeks'; }

  return "strict mode function!  " + nested();
}
function notStrict() { return "non strict function"; }

//-------------------------------------------------------------
