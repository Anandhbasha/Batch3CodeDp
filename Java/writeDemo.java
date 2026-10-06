import java.io.FileWriter;
import java.io.IOException;
public class writeDemo {
    public static void main(String[] args) {
        try{
            FileWriter fw = new FileWriter("Batch3.txt");
            fw.write("Name:Kamal\n");
            fw.write("Age:20\n");
            fw.write("Course:Java\n");
            fw.close();
            System.out.println("Data written Sucessfully");
        }
        catch(IOException e){
            System.out.println("Error occured");
        }
    }
}
