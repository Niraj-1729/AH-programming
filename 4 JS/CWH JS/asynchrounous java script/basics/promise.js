// user will ask for a number between 0 se 9 and if the number is below 5 resolve if not reject

var ans = new Promise((res,rej)=>{
    var n = Math.floor(Math.random()*10);

    if(n<5){
        return res();
    }
    else{
        return rej();
    }
})

ans.then(function(){
    console.log("below");
})

.catch (function(){
    console.log("above");
})