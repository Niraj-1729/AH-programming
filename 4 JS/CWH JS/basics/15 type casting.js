// type conversion vs coercion 
// explici and implicit type caasting 

// int to string 
let myVar;
myVar= 45;
console.log(myVar, (typeof myVar));   // integer type 
myVar=String(34);
console.log(myVar, (typeof myVar));  // interger convered to string 

console.log('("3" - "1") = ' + ("3" - "1"));
console.log('("3" - 1) = ' + ("3" - 1));
console.log('("3" * "2") = ' + ("3" * "2"));
console.log('("3" % "2") = ' + ("3" % "2"));
console.log('("3" + null) = ' + ("3" + null));


let variable = 1555;
let s = String(variable); // 
console.log(s, typeof(s));
let str = variable.toString(); // 
console.log(str, typeof(str));
// let s = variable.toString();


