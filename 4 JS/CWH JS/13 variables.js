{ 
	let num=10; 
	// calling the function inside block 
	console.log(num) 
} 
// calling the function outside block throws a Error 
console.log(num)

// --------------------------------------------

let num=10; 
console.log(num); 
function fun(){ 
	console.log(num); 
} 
fun(); // calling the function 

// ------------------------------------------
function fun(){ 
	let num=10; 
	console.log(num); 
} 
fun(); // calling the function 
console.log(num); 

// -----------------------------------------
let x=77; 
{ 
	let x=23; 
	console.log(x); 
} 
console.log(x); 
// ---------------------------------------

let x=77; 
	{ 
		let x=23; // legal 
		console.log(x); 
	} 
	let x=67;// illegal 
	console.log(x); 
// ------------------------------------


x=12; 
	console.log(x); 
	let x; 

// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// const
// redeclaration is not allowed
const x=12;
x=14;
x+=1;

// -------------------------------------
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

// ------------------------------------------------
// const variable cant be declared after initialization 
const  x;
x=12;

// -----------------------------------------------
// const variable cant be hoisted 
x=3;
console.log(x);
const x;

// --------------------------------------------
// changing the content of array is possible in const variable 

const arr=["niraj", "suraj", "sunil", "raj nandini "]
console.log(arr.toString());
arr[0]="Artificial Human";
console.log(arr.toString());





// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++==++++
// javascript var
 