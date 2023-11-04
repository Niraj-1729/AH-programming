// for loop
for (let i = 0; i < 4; i++) {
    console.log(i);
}

// while loop 
let i = 0;
while (i < 6) {
    console.log(i);
    i++;
}

// do while loop 
let i = 0;
do {
    console.log(i);
    i++;
}
while (i < 6);

//for-in loop 
const obj = { a: 1, b: 4, c: 7 }
for (let prop in obj) {
    console.log(prop + ':' + obj[prop]);
}

// JavaScript for-in Loop
const obj = { a: 1, b: 4, c: 7 };

for (let prop in obj) {
    console.log(prop + ': ' + obj[prop]);
} 

// JavaScript for-of Loop
const arr = [1, 2, 3]; 

for (let val of arr) { 
console.log(val); 
} 

// JavaScript forEach loop
const arr = [1, 2, 3]; 
arr.forEach(val => console.log(val)); 

// JavaScript map Loop 
const arr = [1, 2, 3]; 
const newArr = arr.map(val => val * 2); 
console.log(newArr); 
