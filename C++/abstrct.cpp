#include<iostream>
using namespace std;
class Message{
    public:
    virtual void share()= 0;
};
class whatsApp:public Message{
    public:
    void share(){
        cout<<"We can share text message and Image/Video or Document whatsApp"<<endl;
    }
};
class Instagram:public Message{
    public:
    void share(){
        cout<<"We can share text message and Image/Video or Document in Insta"<<endl;
    }
};
int main(){
    Instagram i = Instagram();
}