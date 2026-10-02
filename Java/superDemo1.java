class School{
    String schoolName = "abc School";
}
class Staff extends School{
    String schoolName = "xyz School";
    void show(){
        System.out.println(super.schoolName);
        System.out.println(this.schoolName);
    }
}
public class superDemo1 {
    public static void main(String[] args) {
        Staff s = new Staff();
        s.show();
    }
}
