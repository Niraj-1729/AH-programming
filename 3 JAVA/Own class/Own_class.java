class Employee{
    int id; //attribute 1
    int salary; //attribute 2
    String name; //attribute 3
    public void printDetails(){
        System.out.println("My id is " + id); 
        System.out.println("and my name is "+ name);
    }

    public int getSalary(){ //method
        return salary;
    }
}

public class Own_class {
    public static void main(String[] args) {
        System.out.println("This is our custom class");
        Employee harry = new Employee(); // Instantiating a new Employee Object
        Employee john = new Employee(); // Instantiating a new Employee Object

        // Setting Attributes for Harry
        harry.id = 12;
        harry.salary = 34;
        harry.name = "CodeWithHarry";

        // Setting Attributes for John
        john.id = 17;
        john.salary = 12;
        john.name = "John Khandelwal";

        // Printing the Attributes
        harry.printDetails();
        john.printDetails();
        int salary = john.getSalary();
        System.out.println(salary);
        // System.out.println(harry.id);
        // System.out.println(harry.name);
    }
}

