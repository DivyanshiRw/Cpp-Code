#include<iostream>
using namespace std;

class complex{
     int a,b;
     public:
     complex(void);   //constructor declaration
     void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

complex:: complex(void){     //-----This is a default constructor as it takes no parameters
    a=20;
    b=10;
    cout<<"Hello World ";
}

int main(){
    complex c;
    c.printNumber();
    
    return 0;
}

