public class FinallyDemo {
    public static void main(String[] args){
        try{
            int res = 10/5;
            // 2
            System.out.println("The result of division is:"+res);
        }catch(ArithmeticException e){
            System.out.println("Error occured");
        }
        finally{
            System.out.println("Finally Code Block Executed");
        }
    }
}
