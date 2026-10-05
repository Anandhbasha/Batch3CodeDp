import java.util.Scanner;
public class ThrowsDemo {
    static void divide() throws ArithmeticException{
        int num1;
        int num2;
        Scanner sc = new Scanner(System.in);
        System.out.println("Please enter the num1 value");
        num1 = sc.nextInt();
        System.out.println("Please enter the num2 value");
        num2 = sc.nextInt();
        int res = num1/num2;
        System.out.println(res);
    }
    public static void main(String[] args) {
        try{
            divide();
        }catch(ArithmeticException e){
            System.out.println("Cannot Divide by zero enter above 0");
        }
    }
}
