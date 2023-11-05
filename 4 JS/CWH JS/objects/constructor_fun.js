let lecture = 10;
let section = 3;
let title = 'javascript'

console.log(lecture);

function createCourse(title) {
    return {
        title: title,
        enroll() {
            console.log('you are successfully enrolled');
        }
    }
}

// constructor function
function Course(title) {
    this.title = title,
        this.enroll = function () {
            console.log('you are successfully enrolled');
        }
}

const course = new Course('javascript');
delete course.title;
course.checkEnrollment = function () {
    console.log('30 users are enrolled');
}
course.enroll()

console.log(course)