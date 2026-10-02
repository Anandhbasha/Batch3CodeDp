interface Camera{
    void takePhoto();
    void takeVideo();
}
interface MusicPlayer{
    void Playlist();
}
interface whatsApp{
    void message();
}

class SmartPhone implements Camera,MusicPlayer,whatsApp{
    public void takePhoto(){
        System.out.println("Taking Pics");
    }
    public void takeVideo(){
        System.out.println("Taking Videos");
    }
    public void Playlist(){
        System.out.println("Playing Music");
    }
    public void message(){
        System.out.println("Sending Videos or text messages");
    }
}
public class multipleDemo {
    public static void main(String[] args) {
        
    }
}
