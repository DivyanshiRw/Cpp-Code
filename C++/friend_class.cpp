#include<iostream>
using namespace std;

//forward declaration
class complex;

class calculator{
        public:
        int add(int a, int b){
            return (a+b);
        }

        int sumrealcomplex(complex , complex);
        int sumimgcomplex(complex , complex);
};

class complex{
     int a,b;
     //Individually declaring functions as Friends
     //friend int calculator::sumrealcomplex(complex, complex);
     //friend int calculator::sumimgcomplex(complex, complex);
     
     /*Alternate way: Declaring entire class as friend to let all the functions of class calculator access 
     private members of class complex*/
     friend class calculator;

     public:
            void setnumber(int n1, int n2){
                a=n1;
                b=n2;
            }
            
            

            void printnumber(){
                cout<<"Your number is : "<<a<<" + "<<b<<"i"<<endl;
            }
};

int calculator::sumrealcomplex(complex o1, complex o2){
    return (o1.a+o2.a);
}

int calculator::sumimgcomplex(complex o1, complex o2){
    return (o1.b+o2.b);
}

int main(){
    complex o1, o2;
    o1.setnumber(1, 4);
    o2.setnumber(5, 7);
    calculator calc;
    int res = calc.sumrealcomplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << res << endl;
    int resc = calc.sumimgcomplex(o1, o2);
    cout << "The sum of imaginary part of o1 and o2 is " << resc << endl;
    

    return 0;
}