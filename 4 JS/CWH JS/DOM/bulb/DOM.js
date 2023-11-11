/* 
 pillars of DOM

1. Selection of an Element 
2. Changing HTML
3. Changing CSS 
4. Event Listner 
*/


// // 1. Selection of an Element
// var a = document .querySelector("h1");   // tag
// // document .querySelector("#id"); //id
// // document .querySelector(".class"); //class
// console.log(a);


// // 2. changing an element
// // var a = document.querySelector("h1");
// a.innerHTML= "changing an element in HTML"


// // 3. changing CSS
// a.style.color= " white"
// a.style.backgroundColor= "red"


// // 4. Event Listner 
//  a.addEventListener("click", function (){
//     console.log("hit")
//     a.innerHTML="Badal gay hun mai teri ex ki trah ";
//     a.style.color="black";
//     a.style.backgroundColorcolor= "yellow";
//  })

// -- making a bulb
var bulb = document.querySelector("#bulb")
var btn = document.querySelector("button")

var flag = 0;


btn.addEventListener("click", function () {
    if (flag == 0) {

        bulb.style.backgroundColor = "yellow"
        console.log("clicked");
        flag= 1;
    }
    else {
        bulb.style.backgroundColor = "transparent"
        console.log("again cicked ");
        flag= 1;
    }

});





