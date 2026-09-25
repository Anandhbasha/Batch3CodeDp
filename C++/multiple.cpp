#include <iostream>
using namespace std;

class Director{
    public:
    string directorName = "Pradeep Ranganathan";
    void work(){
        cout<<"He is directing the movie" << endl;
    }
};
class Singer{
    public:
    void music(){
        cout<<"He is a singer" << endl;
    }
};
class Actor{
    public:
    void movies(){
        cout << "He is a good Actor for this Gen" << endl;
    }
};

class Pradeep: public Director,public Singer,public Actor{

};

int main(){
    Pradeep p = Pradeep();
    cout<<p.directorName << endl;
    p.movies();
    p.music();
    p.work();
}