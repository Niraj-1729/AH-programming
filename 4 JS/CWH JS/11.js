//functions 
const hello =()=> {
    console.log("hello how are you , I am just fine")
    return "hi"
}
function onePlus(x,y){
    return 1+(x+y)/2
}

const sum = (p,q)=> {
    return p+q
}

let a=1;
let b=2;
let c=2;

let v= hello();
console.log(" one plus average of a and b is " , onePlus(a,b))
console.log(" one plus average of b and c is " , onePlus(b,c))
console.log(" one plus average of a and c is " , onePlus(c,a))