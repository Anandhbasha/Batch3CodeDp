// function overloading
#include<iostream>

using namespace std;

class Calculator{
    public:
    void add(int a,int b){
        cout<<"The addition value of a & b is:" << a+b << endl;
    }
    void add(int a,int b,int c){
        cout<<"The addition value of a & b & c is:" << a+b+c << endl;
    }
    void add(float a,float b){
        cout<<"The addition value of two floats:"<<a+b << endl;
    }
};

int main(){
    Calculator c = Calculator();
    c.add(10,20);
    c.add(10,20,30);
    c.add(10.7f,20.6f);
}