#include<iostream>
using namespace std;

int c=45;

int main(){
    int a,b,c;
    cout<<"Enter a :";
    cin>>a;
    cout<<"Enter b :";
    cin>>b;

    c=a+b;
    cout<<"The sum of a and b is "<<c<<endl;
    cout<<"The value of c is :"<<c<<endl;    // This will print the value of local variable of main function
    cout<<"The value of global variable c is "<<::c<<endl;  // If we want a global variable we need to use '::' 

    
    float x=34.4;
    long double y=34.4;

    // Float and double sizes in 64 bit compiler
    cout<<"The size of 34.4 is : "<<sizeof(34.4)<<endl;
    cout<<"The size of 34.4f is : "<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4F is : "<<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4l is : "<<sizeof(34.4l)<<endl;
    cout<<"The size of 34.4L is : "<<sizeof(34.4L)<<endl;

    return 0;



}