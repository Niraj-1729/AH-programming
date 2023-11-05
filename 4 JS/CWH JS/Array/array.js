// Initializing while declaring
let courses = ["HTML", "CSS", "Javascript", "React"];
console.log(courses)

//--------------------------------------
// Initializing while declaring
let arr1 = new Array(3)
arr1[0] = 10
arr1[1] = 20
arr1[2] = 30
console.log("Array 1: ", arr1)

// Creates an array having elements 10, 20, 30, 40, 50
let arr2 = new Array(10, 20, 30, 40, 50);
console.log("Array 2: ", arr2)

// Creates an array of 5 undefined elements
let arr3 = new Array(5);
console.log("Array 3: ", arr3)

// Creates an array with one element
let arr4 = new Array("1BHK");
console.log("Array 4: ", arr4)

//--------------------------------------------------------
const courses = ["HTML", "CSS", "Javascript"];
console.log(courses[0])
console.log(courses[1])
console.log(courses[2])

//--------------------------------------------------------
const courses = ["HTML", "CSS", "Javascript"];
console.log(courses)
courses[1]= "GeeksforGeeks"
console.log(courses)

//---------------------------------------------------------------------
//convert array to string
const courses = ["HTML", "CSS", "Javascript"];
console.log(courses.toString())

//---------------------------------------------------------------------
const courses = ["HTML", "CSS", "Javascript"];
courses.length = 5 // Increasing array length to 5
console.log("Array after increased length: " ,courses)
courses.length = 2 // Decreasing array length to 2
console.log("Array after decreased length: " ,courses)


//--------------------------------------------------------------------------
//we can also update rray after initialization
const courses = ["HTML", "CSS", "Javascript"];
courses.length = 5 // Increasing array length to 5
console.log("Array after increased length: " ,courses)

courses[3] = 'PhP'
courses[4] = 'React'
console.log("Array after initializing: ", courses)

//------------------------------------------------------------------------------------
const courses = ["HTML", "CSS", "Javascript"];
for (let i = 0; i < courses.length; i++) {
	console.log(courses[i])
}

//--------------------------------------------------------------------------
const courses = ["HTML", "CSS", "Javascript"];
courses.forEach(myfunc);
function myfunc(elements) {
	console.log(elements);
}

//--------------------------------------------------------------------------------------
// adding new elements to Array
const courses = ["HTML", "CSS", "Javascript"];
console.log("Original Array: ",courses)
courses.push("React")
console.log("Array after adding an element: ",courses)

//---------------------------------------------------------------------------
// We can also add a new element to a Javascript array using the length property.
const courses = ["HTML", "CSS", "Javascript"];
console.log("Original Array: ",courses)
courses[courses.length] = "React"
console.log("Array after adding an element: ",courses)

//---------------------------------------------------------------------------------------
const courses = ["HTML", "CSS", "Javascript"];
console.log(typeof courses)
//--------------------------------------------------------------

/*
Difference between Javascript arrays and objects
Javascript arrays use indexes as numbers while objects use indexes as names.

When to use JavaScript Arrays and Objects?
Arrays are used when we want element names to be numeric while Objects are used when we want element names to be strings.

Recognizing a JavaScript Array
There are two methods by which we can recognize a JavaScript array:

By using Array.isArray() method
By using instanceof method 
*/
const courses = ["HTML", "CSS", "Javascript"];
console.log("Using Array.isArray() method: ",Array.isArray(courses))
console.log("Using instanceof method: ",courses instanceof Array)

//-------------------------------------------------------------------------------------
// A common error is faced while writing the arrays:
const numbers = [5]
// and
const numbers = new Array(5)

//---------------------------------------------------------------------------------------------
const numbers = new Array(5) 
console.log(numbers)
/* Output: This statement creates an array with five undefined elements.

[ <5 empty items> ] */
