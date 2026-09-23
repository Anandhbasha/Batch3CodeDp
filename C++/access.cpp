#include<iostream>
using namespace std;
class access{
    private:
    int x =30;
    public:
    void show(){
        cout<<"The x value is:"<<x;
    }
};

int main(){
    access a = access();
    // cout<<a.x;
    a.show();
}