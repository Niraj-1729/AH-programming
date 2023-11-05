// 1 named functions
function add(a,b){
        return a+b;
} 
console.log(add(5,6));

//---------------------------------------------
//  2 anonymous functions
// it has no name and it has name and it is used through that
let addition = function (c,d){
    return c+d;
}
console.log(addition(5,4));

//--------------------------------------------------
//  3 nested function
function msg(firstName){
    function hey(){
        console.log("hey"+ " "+firstName);
    }
    return hey();
}

msg("Niraj");

//-------------------------------------------------------
// 4 immediately invoked function expression 

let message = (function(){
return "Welcome to gfg";
}) ();
console.log(message);

//--------------------------------------------------------------
//  function methods
let employee = {
	empname: "Rahul",
	department: "sales",
	details: function () {
		return this.empname +
			" works with Department " +
			this.department;
	}
};
console.log(employee.details());

//------------------------------------------
let person = Person ()

//------------------------------------------------------
// Example of Function Expression: This example shows the function expression
// Function declaration
function person() { }
let person = person()

// Printing the return value
// of the person() function
console.log(person)

function person1(name) {
	return name;
}

let person1 = person1("Aayush")

// Printing the value of person1
console.log(person1)

//--------------------------------------------------------------------------
// Function Constructor: In this code, we are creating an instance using the new keyword. 
// Creating the function
function Person(name, age) {
	this.name = name;
	this.age = age;
}

// Calling the function 
let person = new Person("Vikah", 22);

console.log(person.name);
console.log(person.age);


