let = 10;
let section = 3;
let title = 'javascript';

const course = {
  // declaration of object 
  letcure: 3,
  section: 3,
  title: 'javascript',
  notes: {
    introduction: "Welcome to js course"
  },
  enroll(){
    console.log('you are successfully enrolled');
  }
}

course.enroll()
console.log(course)

//object creation at runtime 
//redeclaration is possible in object as object is referenced data type
course.price=999
console.log(course);

//-------------------------------------------------------
let school = {
  name: 'AMHS',
  established: '1999',
  location: 'South Bazar Andal',
  displayInfo : function(){ 
        console.log(`${school.name} was established in ${school.established} at ${school.location}`); 
    } 
} 
school.displayInfo();  

//--------------------------------------------------------
// in case properties name are numbers then it can be assigned using []
let school = { 
	name: 'Vivekananda School', 
	location : 'Delhi', 
	established : '1971', 
	20 : 1000, 
	displayInfo : function(){ 
		console.log(`The value of the key 20 is ${school['20']}`); 
	} 
} 
school.displayInfo(); 

//-------------------------------------------------------
// if property name is string and separated by more than one space then it should be kept in " "
let school = {
  "school name": "vivekananda school", 
}

//-----------------------------------------------------
let school = {
  name : 'vivekananda school',
  displayInfo: function() {
    console.log(`${school.name.split(' ')[0]}`); 
  }
}

school.displayInfo();
//vivekananda

//-------------------------------------------------------
//own property of object in js 

const object1= new Object();
object1.property1= 43;
console.log(object1.hasOwnProperty('property1')); // true

// -----------------------------------------------------------
let school= {
  name: 'vivekananda',
  established: 1833,
  20: 1888,
  location: 'South bazar',
  displayInfo:  function (){
      document.write(' ${school.name} was established in ${school.established} at ${school.location}');
  }
}

console.log(school['name']); // vivekananda
console.log(school['20']);  // 1833 
// use of dot operations 

//--------------------------------------------------------------------
// to iterate over all key values
let person = { 
	gender : "male"
} 

let person1 = Object.create(person); 
person1.name = "Adam"; 
person1.age = 45; 
person1.nationality = "Australian"; 

for (let key in person1) { 
// Output : name, age, nationality 
// and gender 
	console.log(key); 
}

/* 
name
age 
nationality
gender
*/

//------------------------------------------
//  deleting properties of an  object 
let obj1= {
  profirst: "name"
}
console.log(obj1.profirst);

delete obj1.profirst
console.log(obj1.profirst);
/*
name
undefined
*/
//---------------------------------------------------


