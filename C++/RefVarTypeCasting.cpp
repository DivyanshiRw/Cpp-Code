#include<iostream>
using namespace std;

int main(){
    
// Reference variable 
float a= 45;
float & b= a;
cout<<a<<endl;
cout<<b<<endl;



// Type Casting
    int x= 20;
    float y=40.34;
    cout<<"value of integer y is "<<int(y)<<endl;
    cout<<"The value of integer sum of a and b is "<<x + (int)y<<endl;
    cout<<"The value of floating sum of a and b is "<<float(x) + y<<endl;

}