let = 10;
let section = 3;
let title = 'javascript'

function createCourse(title) {
    return {
         title:title,
         enroll(){
            console.log('you are successfully enrolled');
         }
    }
}

const course = createCourse('javascript');
course.enroll() 

