const getColor= () =>{
    // Hex code
    const randomNumber = Math.floor(Math.random()*16777215);
    const randomCode= "#" +randomNumber.toString(16);
    // console.log(randomNumber,randomCode)
    document.body.style.backgroundColor= randomCode;
    document.getElementById("color-code").innerText= randomCode;
    navigator.clipboard.writeText(randomCode)

}
//event-calls
document.getElementById("btn").addEventListener(
    "click",
    getColor
)
// init-calls
getColor()