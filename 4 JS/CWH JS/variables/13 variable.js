//--------------------------let-----------------------

//code--------------------**********------------------
{ 
	let num=10; 
	console.log(num) // 10 
} 
console.log(num) // error :- can't access let outside the block 



// -----------------------*****************------------
// global let can be accessed in local scope

let num=10;  
console.log(num); 
function fun(){ 
	console.log(num); 
} 
fun(); 
//10 10  


// -----------------------*****************------------
function fun(){ 
	let num=10; 
	console.log(num);  // 10
} 
fun(); // calling the function 
console.log(num);  // can't access as scoped 


// -----------------------*****************------------
// redeclation is allowed but in different scopes 
let x=77; 
{ 
	let x=23; 
	console.log(x); // 23
} 
console.log(x); //77 


// -----------------------*****************------------
// redeclaration is not allowed in same scope 
let x=77; 
	{ 
		let x=23; // legal 
		console.log(x); 
	} 
	let x=67;// illegal 
	console.log(x); 



x=12; 
	console.log(x); 
	let x; 

// +++++++++++++++++++++++++++++++ const ++++++++++++++++++++++++++++++++
// redeclaration is not allowed
const x=12;
x=14;
x+=1;

// --------------------------------------------------------------------
// const variable describes block scoped 
const x = 12;
{
  const x = 23;
  console.log(x);
  {
    const x = 77;
    console.log(x);
  }
  {
    const x = 45;
    console.log(x);
  }
}
console.log(x);


// const variable cant be declared after initialization 
const  x;
x=12;


// const variable cant be hoisted 
x=3;
console.log(x);
const x;

// changing the content of array is possible in const variable 
const arr=["niraj", "suraj", "sunil", "raj nandini "]
console.log(arr.toString());
arr[0]="Artificial Human";
console.log(arr.toString());





// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++==++++
// javascript var

// accesing global variable anywhere in the program 
var test=12;
function foo(){
	console.log(test);
}
foo();

//  multiple varable in single statement 
var test1 = 4,
  test2 = 10,
  test3 = 15
function foo() {
  console.log(test1, test2, test3);
}
foo();

// Example 3: In this example, we will see the hoisting of variables declared using var
console.log(test); 
var test = 12;  //undefined

// Example 4: In this example, we will redeclare a variable in the same global block
var test = 12; 
var test = 100; 
console.log(test); //100

// Example 6: In this example, we will try to delete a global variable declared using va in the ‘use strict’ mode
'use strict'; 
var test = 12; 
delete(test); 
console.log(test);






