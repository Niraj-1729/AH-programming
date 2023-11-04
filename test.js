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