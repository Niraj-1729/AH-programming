//primitives data types 
// non-primitive data type = object

let a = null;
let b = 4435;
let c = true;
let d = BigInt("345") + BigInt("3")
let e = "Artificial Human"
let f = Symbol("I'm a symbol")
let g
console.log(a, b, c, d, e, f, g)
console.group(typeof d)

//objects in js 

const item = {
    "Niraj": true,
    "shubh": false,
    "Lavish": 58,
    "Rohan": undefined
}
console.log(item["Niraj"])