// this is related to object 
// value of this is ca't be changed (it's a keyword)


// 1>  call this be itself-> by global window object 
console.log('this alone:-', this);

// 2. calling this in an object window 
const person = {
    firstName: "Niraj",
    lastName: "Kumar",
    id: 1,
    getThis: function () {
        return this;
    }
};
console.log('this in object method', person.getThis());

// 3> use this to access other properties and metods from the same object

const student = {
    firstName: "Mirza Zabbar",
    lastName: "Yunus",
    id: 45,
    getFullName: function () {
        return this.firstName + ' ' + this.lastName;
    }
};
console.log('this in object method', student.getFullName());

// 4. calling this in a function 
function test(){
    console.log('this in a function', this );
}
test();

// 5> arrow functions 
https://www.freecodecamp.org/news/the-this-keyword-in-javascript/
// more to learn 


