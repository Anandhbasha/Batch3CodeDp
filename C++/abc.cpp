#include <iostream>
using namespace std;
class Payment{
    public:
    virtual void pay() = 0;
};

class Gpay : public Payment{
    public:
    void pay(){
        cout<<"Payment done by gPay";
    }
    
};
class PhonePe : public Payment{
    public:
    void pay(){
        cout<<"Payment done by PhonePe";
    }
};
class PayTm : public Payment{
    public:
    void pay(){
        cout<<"Payment done by PayTm";
    }
};