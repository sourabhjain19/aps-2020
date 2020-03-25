//Interfaces in C++ can be implemented using abstract classes

#include<iostream>

using namespace std;

class A{
    public:
        virtual void sample()=0;
};

class B:public A{
    public:
        void sample(){
            cout<<"Sample from class B executed";
        }
};

int main(){
    A *a=new B();

    a->sample();

}