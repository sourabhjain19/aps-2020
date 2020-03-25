//Encapsulation refers to hiding important details. This is achieved by access specifiers in C++

#include<iostream>

using namespace std;

class sample{
    
    private:
        int a;
        int b;

    public:
        void set(int x,int y){
            a=x;
            b=y;
        }

        void get(){
            cout<<a<<"::"<<b<<"\n";
        }
};

int main(){
    sample s;

    s.set(10,20);
    
    s.get();
    
    return 0;
}