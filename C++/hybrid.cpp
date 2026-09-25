#include<iostream>
using namespace std;

class Hospital{
    public:
    string HospitalName = "Abc Hospital";
    void specilaity(){
        cout<<"Hospital have 30 years of legacy ";
    }
};
class Doctor : public Hospital{
    public:
    void genre(){
        cout<< "He is specilist in Neuro";
    }
};

class Nurse {
    public:
    void works(){
        cout<<"They are assist of the doctors";
    }
};
class Patient : public Doctor , public Nurse{

};

int main(){

}