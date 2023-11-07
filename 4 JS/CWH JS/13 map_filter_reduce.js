//array iterations 

//for each
[1, 2, 3].forEach(function (item, index) {
    console.log(item, index);
});

//map
const three = [6, 7, 8];
const doubled = three.map(function (item) {
    return item * 2;
});
console.log(doubled);

//filter
const ints = [1, 2, 3];
const evens = ints.filter(function (item) {
    return item % 2 === 0;
});
console.log(evens);

//reduce
const sum = [1, 2, 3].reduce(function (result, item) {
    return result + item;
}, 0)
console.log(sum)

//some 
const hasNegativeNumbers = [1, 2, 3, -4, -6].some(function (item) {
    return item < 0;
});
console.log(hasNegativeNumbers);

//every
const allPositiveNumbers = [1, 2, -3].every(function (item) {
    return item > 0;
});
console.log(allPositiveNumbers);

//find
const objects = [{if: 'a'}, {id:'b'}, {id: 'c'}]; 
const find= objects.find(function(item){
    return item.id==='b';
});
console.log(find);

//find index
const objects2 = [{if: 'a'}, {id:'b'}, {id: 'c'}]; 
const findIndex= objects.findIndex(function(item){
    return item.id==='b';
});
console.log(findIndex);