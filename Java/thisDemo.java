class BankAccount{
    double balance = 5000.00;
    BankAccount(double balance){
        this.balance += balance;
        System.out.println("The account Balance is:"+balance);
        System.out.println("The account Balance is:"+ this.balance);
    }
}
public class thisDemo {
    public static void main(String[] args) {
        BankAccount acc = new BankAccount(7000);

    }
}
