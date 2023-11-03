{ 
	let num=10; 
	// calling the function inside block 
	console.log(num) 
} 
// calling the function outside block throws a Error 
console.log(num)

///////////////////////////////////////////

let num=10; 
console.log(num); 
function fun(){ 
	console.log(num); 
} 
fun(); // calling the function 

///////////////////////////////////////////
function fun(){ 
	let num=10; 
	console.log(num); 
} 
fun(); // calling the function 
console.log(num); 

//////////////////////////////////////////
let x=77; 
{ 
	let x=23; 
	console.log(x); 
} 
console.log(x); 
///////////////////////////////////////

let x=77; 
	{ 
		let x=23; // legal 
		console.log(x); 
	} 
	let x=67;// illegal 
	console.log(x); 
/////////////////////////////////////////


x=12; 
	console.log(x); 
	let x; 

///////////////////////////////////////