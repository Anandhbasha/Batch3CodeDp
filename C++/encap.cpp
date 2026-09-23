#include<iostream>
using namespace std;

// class Students{
//     private:
//     int totalMarks = 0;
//     public:
//     void total(int s1,int s2,int s3,int s4,int s5){
//         totalMarks = s1+s3+s3+s4+s5;
//         cout<<"The total marks is:" << totalMarks;
//     }

// };

// int main(){
//     Students s1 = Students();
//     s1.total(55,66,77,88,92);
// }






class Bankaccount{
    private:
    double balance = 500;
    public:
    void deposit(int amount){
        balance+=amount;
    }
    void withdraw(int amout){
        balance-=amout;
    }
    double showBalance(){
        return balance;
    }
};

int main(){
    Bankaccount acc1 = Bankaccount();
    acc1.deposit(15000);
    acc1.withdraw(5000);
    cout<<acc1.showBalance();
}