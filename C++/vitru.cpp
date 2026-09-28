#include <iostream>
using namespace std;


class Restraunt{
    public:
    virtual void order(){
        cout<<"Order placed from Res";
    }
};
class vegres :public Restraunt{
    public:
    void order() override{
        cout<<"The order palced from vegRes";
    }
};
class NVres :public Restraunt{
    public:
    void order() override{
        cout<<"The order palced from NVres";
    }
};
int main(){
    Restraunt *r;
    vegres v;
    NVres nv;

    r = &v;
    r->order();

    r = &nv;
    r->order();

}


// Pointers
// int a = 10;
// int b = a;
// b= 60;

// int *p = &a; ->1000
// *p = 80;