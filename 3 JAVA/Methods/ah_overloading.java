public class ah_overloading {
   int multiply(int a , int b){
    return a*b;
   } 
   double multiply(double a , double b){
    return a*b;
   } 

   public static void main(String[] args) {
     ah_overloading obj = new  ah_overloading();
     int c = obj.multiply(5,4);
     double d = obj.multiply(5.1, 3.5);

     System.out.println("Multiply method: return integer: " + c);
     System.out.println("Multiply method: return integer: " + d);
   }
}
