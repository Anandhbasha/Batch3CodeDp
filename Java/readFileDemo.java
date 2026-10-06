import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;
public class readFileDemo {
    public static void main(String[] args) {
        try{
            File fread = new File("Batch3.txt");
            Scanner sc = new Scanner(fread);
            while(sc.hasNextLine()){
                String data = sc.nextLine();
                System.out.println(data);
            }
            sc.close();
        }catch(FileNotFoundException e){
            System.out.println("File not found");
        }
    }
}
