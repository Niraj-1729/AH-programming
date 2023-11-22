// conversion of boolean, number, date -> to string
// Number and date has been assigned
// to variable v and d respectively
let v = 123;
let d = new Date('1995-12-17T03:24:00');
	
// Conversion of number to string
console.log(" String(v) = " + String(v));
	
// Conversion of number to string
console.log(" String(v + 11) = " + String(v + 11));
console.log(" String( 10 + 10) = " + String(10 + 10));
	
// Conversion of boolean value to string
console.log(" String(false) = " + String(false));
	
// Conversion of Date to string
console.log(" String(d) = " + String(d));

//---------------------------------------------------------------------------------------

// Number and date has been assigned
// to variable v and d respectively
let v = "144";
let d = new Date('1995-12-17T03:24:00');
	
// Conversion of string to number
console.log(" Number(v) = " + Number(v));
	
//Conversion of boolean value to number
console.log(" Number(false) = " + Number(false));
console.log(" Number(true) = " + Number(true));
	
// Conversion of date to number
console.log(" Number(d) = " + Number(d));


//----------------------------------------------------------------------------------------------
// Empty string assigned
let v = "";

// White space assigned
let d = " ";

// Non-number string assigned
let s = "GeeksforGeeks";

// Printing converted values of number
console.log(" Number(v) = " + Number(v));
console.log(" Number(d) = " + Number(d));
console.log(" Number(s) = " + Number(s));
