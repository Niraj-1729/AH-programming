import java.util.Scanner;

 ;

public class scanner {
    public static void main(String[] args) {
        Scanner myObj = new Scanner(System.in);
        System.out.println("Enter User name");

        String userName = myObj.nextLine();
        System.out.println("user name is " +userName);

        myObj.close();
    }
}
