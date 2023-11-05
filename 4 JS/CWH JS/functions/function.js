function myFunction(g1, g2){
    return g1*g2;
  }
  
  const value = myFunction(2,3);
  console.log(value);

//-----------------------------------------------------------
// function expresions 
let jsFun= function (a,b){
    // set of expressions 
}

//------------------------------------------------------------
const square = function(number){
    return number*number;
}
const x= square(4);
console.log(x);

//-----------------------------------------------------------
// arrow function => 
const a = ["Hydrogen", "Helium", "Lithium", "Beryllium"];

const a2 = a.map(function (s) {
	return s.length;
});

console.log("Normal way ", a2); // [8, 6, 7, 9]

const a3 = a.map((s) => s.length);

console.log("Using Arrow Function ", a3); // [8, 6, 7, 9]

// ---------------------------------------------------------------------
function welcomeMsg(name) {
	return ("Hello " + name + " welcome to GeeksforGeeks");

}

// creating a variable
let nameVal = "Admin";

// calling the function
console.log(welcomeMsg(nameVal));

//-----------------------------------------------------------------------
function welcome(){
    console.log("lets start programming !! ")
}
welcome();

//-------------------------------------------------------------
// function arguments 
function welcome(name){
    console.log("welcome" +name+ " " + "welcome to gfg");
}

welcome("Artificial Human");

//----------------------------------------------------------
function welcome(){
    return "welcome to gfg";
}
console.log(welcome());
//-------------------------------------------------------
// function expression -> we assign function to a variable then use it 
let expression = function(){
    return "weclcome to this world";
}
let js =expression ();
console.log(js);

