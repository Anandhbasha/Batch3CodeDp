// overriding
#include <iostream>
using namespace std;


class Restraunt{
    public:
    void order(){
        cout<<"Order placed from Res";
    }
};
class vegres :public Restraunt{
    public:
    void order(){
        cout<<"The order palced from vegRes";
    }
};
class NVres :public Restraunt{
    public:
    void order(){
        cout<<"The order palced from NVres";
    }
};
int main(){
    NVres nv = NVres();
    vegres v = vegres();
    Restraunt r = Restraunt();
}