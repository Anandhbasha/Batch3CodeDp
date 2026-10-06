import java.io.File;
public class FIleInfDemo {
    public static void main(String[] args){
        File f = new File("Batch3.txt");
        if(f.exists()){
            System.out.println("FileName:" + f.getName());
            System.out.println("Path:" + f.getAbsolutePath());
            System.out.println("Readble:" + f.canRead());
            System.out.println("Writable:" + f.canWrite());
            System.out.println("fileSize:" + f.length());
        }
    }
}
