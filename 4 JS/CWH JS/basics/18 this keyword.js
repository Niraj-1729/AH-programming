
let counter = {
    count: 0,
    increment: function () {
        counter.count++;
    }
}
counter.increment();
counter.increment();
console.log(counter);

//------------------------------------------------------------------------
// making a factory function for object 
let counter1 =  createCounter();

function createCounter(){
    return {
        count: 0,
        increment: function() {
            counter.count++;
        }
    }
}

counter1.increment();
counter1.increment();
counter1.increment();
counter1.increment();
console1.log(counter);