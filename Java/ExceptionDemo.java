public class ExceptionDemo {
    public static void main(String[] args) {
        try{
            int a = 10;
            int b=0;
            System.out.println(a/b);
            System.out.println("Welcome to Exception");
        }catch(ArithmeticException e){
            System.out.println("Please change Entered value from 0");
        }
        // 10/0
    }
}
