//Compile time polymorphism refers to function overloading or operator overloading

#include<iostream>

using namespace std;

class polygon{

    public:
        int size;
        int perimeter;
        int area;

        polygon(int s,int p,int a){
            size=s;
            perimeter=p;
            area=a;
        }

        int f1(int a,int b){
            return a+b;
        }

        int f1(int a){
            return a+10;
        }

        void print(){
            cout<<size<<"::"<<perimeter<<"::"<<area<<"\n";
        }
};

int main(){

    polygon t(10,20,30);

    cout<<t.f1(10)<<"\n";

    cout<<t.f1(10,20);

    return 0;
}

