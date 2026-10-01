class Parent{
    String property = "House";
}

class Child extends Parent{
    String Newproperty = "Car";
}
public class inheritence {
    public static void main(String[] args){
        Child c = new Child();
        System.out.println(c.property);
        System.out.println(c.Newproperty);
    }
}
