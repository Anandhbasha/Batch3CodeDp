import java.io.FileWriter;
import java.io.IOException;
public class AppendDemo {
    public static void main(String[] args){
        try{
            FileWriter fappend = new FileWriter("Batch3.txt",true);
            fappend.write("Mark:80");
            fappend.close();
            System.out.println("Data Appended");
        }catch(IOException e){
            System.out.println("Error");
        }
    }
}
