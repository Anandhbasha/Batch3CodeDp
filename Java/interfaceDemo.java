interface Vehicle{
    void start();
    // medthod does not have any body
    void stop();
}


// 

class Car implements Vehicle{
    public void start(){
        System.out.println("Car started");
    }
    public void stop(){
        System.out.println("Car Stopped");
    }
    void selfStart(){
        System.out.println("Car started by self motor");
    }
    void kickStart(){
        
    }
} 
public class interfaceDemo {
    public static void main(String[] args) {
        Car c = new Car();
        c.start();
        c.stop();
    }
}


// interface means -> it should have what are method must used