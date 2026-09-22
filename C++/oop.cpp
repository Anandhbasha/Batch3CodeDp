#include<iostream>
using namespace std;

class Vehicle{
    public:
        string bikeCompany = "Honda";
        string bikeName = "Activa";
        string modelName = "5g";
        string bikeColor = "black";
        int bikeMilage = 40;
        int noofWheels= 2;
        int tankCapacity = 15;
        void acc(){
            cout<<"While acc vehicle will move"<< endl;
        }
        void stop(){
            cout<<"While hold the break vehicle will stop"<<endl;
        }
};

// access specifier
// public ,private,protected

int main(){
    Vehicle v = Vehicle();
    v.stop();
    v.acc();
    cout<<"The bike name is:" << v.bikeCompany;
    Vehicle v1 = Vehicle();
    v1.modelName = "6g";
}

// void acc(){
//     cout<<"While acc vehicle will move"<< endl;
// }
// void stop(){
//     cout<<"While hold the break vehicle will stop"<<endl;
// }

// int main(){
//     string bikeCompany = "Honda";
//     string bikeName = "Activa";
//     string modelName = "5g";
//     string bikeColor = "black";
//     int bikeMilage = 40;
//     int noofWheels= 2;
//     int tankCapacity = 15;


//     string bike1Name = "Shine";
//     string model1Name = "7g";
//     string bike1Color = "black";
//     int bike1Milage = 40;
//     int noofWheelsBike1= 2;
//     int tankCapacityBike1 = 15;

    
// }