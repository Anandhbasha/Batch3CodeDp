#include <iostream>
using namespace std;

// mutilevel ->granda->Father->son->granson

class Grandpa{
    public:
    string property = "Land";
};
class Father : public Grandpa{

};
class Son : public Father{

};
int main(){
    Son s = Son();
    cout<<s.property;
}