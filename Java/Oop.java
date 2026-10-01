class Parent{
    private int a = 70;
    void display(){
        System.out.println("Parent class");
        // System.out.println(a);
    }
    int showAvalue(){
        return a;
    }
}
public class Oop {
    public static void main(String[] args) {
        Parent p = new Parent();
        p.display();
        // System.out.println(p.a);
        System.out.println(p.showAvalue());
    }    
}
