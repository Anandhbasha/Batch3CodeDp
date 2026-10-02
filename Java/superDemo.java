class BankAccount1{
    double balance = 5000.00;
    BankAccount1(double balance){
        this.balance += balance;
        System.out.println("The account Balance is:"+balance);
        System.out.println("The account Balance is:"+ this.balance);
    }
}

class BankAccount2 extends BankAccount1{
    BankAccount2(double balance){
        super(balance);
    }
    void acc1(double amount){
        super.balance+=balance;
        System.out.println("The account Balance is:"+balance);
        System.out.println("The account Balance is:"+ this.balance);
    }
}

public class superDemo {
    public static void main(String[] args) {
        BankAccount2 acc1 = new BankAccount2(6000);
    }
    
}
