//Abstraction is hinding implementational details

#include<iostream>

using namespace std;

class multiplier{
    private:
        int product=1;
    public:
        void multiply(int num){
            product*=num;
        }

        void printres(){
            cout<<product<<"\n";
        }
};

int main(){
    multiplier m;

    m.multiply(2);
    m.multiply(4);

    m.printres();
    
    return 0;
}