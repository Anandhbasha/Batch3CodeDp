public class MultipleexceptionDeom {
    public static void main(String[] args) {
        try{
            int [] num = {10,40,60,70,80};
            System.out.println(num[5]);
        }catch(ArithmeticException e){
            System.out.println("Arithmethic Problem");
        }catch(ArrayIndexOutOfBoundsException e){
            System.out.println("Invalid array Index");
        }catch(Exception e){
            System.out.println("Some Error exception occured");
        }
    }

}
