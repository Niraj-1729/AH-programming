let lecture= 10;
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
course.enroll()