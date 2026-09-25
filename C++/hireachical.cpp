#include <iostream>
using namespace std;
class KFC{
    public:
    string franchaiseName = "KFC";
    void mainBranch(){
        cout<< "Main Brach is on Ky";
    }
};
class KFC1 : public KFC{
    public:
    void branchLocation(){
        cout<<"This is Coimbatore Avinashi road Branch";
    }
};
class KFC2 : public KFC{
    public:
    void branch(){
        cout<<"This is Coimbatore Peelamedu Branch";
    }
};

int main(){
    KFC1 one = KFC1();
    cout<<one.franchaiseName;
    one.branchLocation();
    KFC2 two = KFC2();
    cout<<two.franchaiseName;
    two.branch();
}