// callbacks
// setTimeout(function(){},10000)

//promise

var ans = new Promise((res,rej)=>{
    if(true){
        return res();
    }
    else {
        return rej();
    }
})

ans 
.then(function(){
    console.log("resolve hogya")
})
.catch(function(){
    console.log("rejected")
})
