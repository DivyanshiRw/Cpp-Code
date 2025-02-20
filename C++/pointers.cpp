#include<iostream>
using namespace std;

int main(){
    //Pointer
    int a=5;
    int *b=&a;
    cout<<"The address of a is: "<<b<<endl;
    cout<<"The value at address b is: "<<*b<<endl;

    //Pointer to Pointer
    int **c=&b;
    cout<<"The address of b is: "<<c<<endl;
    cout<<"The value at address value_at(value_at c) is: "<<**c<<endl;

    return 0;
}