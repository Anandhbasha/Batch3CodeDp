#include <iostream>
using namespace std;
class CodeDp{
    public:
    string trainerName = "Anandh";
    void trainer(){
        cout<<"He is going to train all of your courses";
    }
};
class B3Students : public CodeDp{

};

int main(){
    B3Students b3Sdtu1 = B3Students();
    cout<<b3Sdtu1.trainerName;
    b3Sdtu1.trainer();
}