#include<iostream>
using namespace std;

class Employee{
    private:           //Private variables are accessible only with the help of function
       int a,b,c;
    public:            //Public variables can be accessed directly
       int d,e;
       void setdata(int a, int b, int c);
       void getdata(){
        cout<<"Value of a is : "<<a<<endl;
        cout<<"Value of b is : "<<b<<endl;
        cout<<"Value of c is : "<<c<<endl;
        cout<<"Value of d is : "<<d<<endl;
        cout<<"Value of e is : "<<e<<endl; 
       }
};

void Employee::setdata(int a1, int b1, int c1){
    a=a1;
    b=b1;
    c=c1;
}

int main(){
    Employee Diya;
    //Diya.a=135;     ----> This will throw error as a is private.
    Diya.d=45;
    Diya.e=88;
    Diya.setdata(3,7,9);
    Diya.getdata();
    
    return 0;
}