import java.io.File;
import java.io.IOException;
public class fileCreateDemo {
    public static void main(String[] args) {
        try {
            File f = new File("Batch3.txt");
            if(f.createNewFile()){
                System.out.println("File created Sucessfully");
            }else{
                System.out.println("Already file exist");
            }
        } catch (IOException e) {
            System.out.println("Error occured");
        }
    }
}
