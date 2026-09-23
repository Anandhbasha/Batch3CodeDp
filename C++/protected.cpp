#include <iostream>
using namespace std;
class Father{
    protected:
    string property = "House";
};
class Son:public Father{
    public:
    void prints(){
        cout<<"Family Property:" << property;
    }
};

int main(){
    Son s = Son();
    s.prints();
}