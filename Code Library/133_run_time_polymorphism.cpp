//Run time polymorphism is used by making base class function virtual and is refered to as function overriding

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

        virtual void print(){
            cout<<"Polygon is called\n";
            cout<<size<<"::"<<perimeter<<"::"<<area<<"\n";
        }
};

class triangle:public polygon{
    public:
        triangle(int p,int a): polygon(3,p,a){
        }

        void print(){
            cout<<"Triangle is Called\n";
            cout<<size<<"::"<<perimeter<<"::"<<area<<"\n";
        }
};

class quadrangle:public polygon{
    public:
        quadrangle(int p,int a):polygon(4,p,a){
        }

        void print(){
            cout<<"Quadrangle is Called\n";
            cout<<size<<"::"<<perimeter<<"::"<<area<<"\n";
        }
};

int main(){

    polygon *t[] ={new triangle(20,40), new quadrangle(50,60) };

    for(int i=0;i<size_t(*t);i++){
        t[i]->print();
        cout<<"**************\n";
    }

    return 0;
}

