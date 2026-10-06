import java.io.File;
public class fileDeleteDemo {
    public static void main(String[] args){
        File f = new File("Batch3.txt");
        if(f.delete()){
            System.out.println("File Deleted");
        }
        else{
            System.out.println("Unable to Delete");
        }
    }
}
