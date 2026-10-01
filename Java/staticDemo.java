class DemoMethod{
    static int square(int x){
        return x*x;
    }
}
public class staticDemo {
    public static void main(String[] args) {
        System.out.println(DemoMethod.square(5));
    }
}