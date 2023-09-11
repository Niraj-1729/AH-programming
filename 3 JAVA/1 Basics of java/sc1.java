 import java.util.Scanner;
 class sc1 {
    public static void main(String[] args) {
        Scanner obj = new Scanner (System.in);
        
        System.out.println("enter name,  age, salary , id ");

        String name = obj.nextLine();

        int age = obj.nextInt();

        double salary = obj.nextDouble();

        System.out.println("Name:"+ name);
        System.out.println("age"+age);
        System.out.println("Salary"+salary);
        obj.close();

    }
 }
