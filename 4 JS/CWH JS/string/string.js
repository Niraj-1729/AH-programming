/* 
const string_name= "String Content"
const string_name= new String("String Content");
*/

//assigning string to variable 
const str1 = "First String Content";
console.log("string 1: " + str1);
// writing string contentin single quotes
const str2 = 'Second String Contenet';
console.log("string 2: " + str2);
console.log("string 2 Length: " + str2.length);

const str3 = "'GeeksforGeeks' is a" + " learning portal";
console.log(str3)

//passing js string as aobject
const str4 = new String("The Artificial Human");
console.log(str4);

const str5 = new String("GeeksforGeeks");
const str6 = "GeeksforGeeks";
console.log(str5 == str6);

//string comparison 
function compareString() {
    let str7 = "john";
    let str8 = new String("john");
    console.log(str7==str8);
    console.log(str7.localeCompare(str8));
}
compareString();

// js string methods and its uses 
let x= "The ArtificialHuman";
console.log(x.indexOf("The"))
console.log(x.slice(0,14))
console.log(x.replace("The","Niraj - The"))
console.log(x.toLowerCase());
