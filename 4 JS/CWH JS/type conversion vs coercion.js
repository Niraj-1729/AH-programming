//implicit type conversion 
const sum = 35 + "hello"   //-- it will be converted to string 
console.log(sum, typeof (sum));

const times = 34 * "helllo";
console.log(times) // string that is "NaN" multiplied to number -> gives "NaN"

//------------------------------------------------------------------------------------------------


const string = " ";
const number = 40;
const boolean = true;

console.log(!string)
// true - string is coerced to boolean `false`, then the NOT operator negates it

console.log(boolean + string)
// "true" - boolean is coerced to string "true", and concatenated with the empty string

console.log(40 + true)
// 41 - boolean is coerced to number 1, and summed with 40

// -----------------------------------------------------------

// loose euality operator for coercion 
const variable1 = 20
const variable2 = "20"

console.log(variable1 == variable2)
// true 
/*
Though the types are not equal, the operator returns true because the values are equal. What happens here is coercion.

When you use the loose equality operator with values of different types, what happens first is coercion. Again, this is where one value is converted to the type that fits the other, before the comparison occurs.

In this case, the string "20" is converted to a number type (which is 20) and then compared with the other value, and they are both equal.
*/


//------------------------------------------------------------------------------------------------------------------------------
const variable1 = false
const variable2 = ""

console.log(variable1 == variable2)
// true
/*
Here, variable1 is the value false (boolean type) and variable2 is the value "" (an empty string, of the string type). Comparing both variables with the double equality returns true. That's because the empty string is coerced to a boolean type (which is false).
 */

//-------------------------------------------------------------------------------------------------------------------------------------------
// how strictly equality operator works 
const variable1 = 20
const variable2 = "20"

console.log(variable1 === variable2)
// false

const variable3 = false
const variable4 = ""

console.log(variable3 === variable4)
// false

/*
In the case of variable1 and variable2, they have the same values, but the types are not the same. So the triple equality returns false.
In the case of variable3 and variable4, they have the same values (if one is converted to the type of the other) but the types are not the same, so the triple equality returns false this time, too.
*/

//------------------------------------------------------------------------------------------------------------

