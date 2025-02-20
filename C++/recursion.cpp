#include<iostream>
using namespace std;

int factorial(int n){
    if (n<=1)
        return 1;
    else
        return n*factorial(n-1);
}

int main(){
    int num;
    cout<<"Enter no. : ";
    cin>>num;
    cout<<"Factorial of entered no. is: "<<factorial(num)<<endl;
    return 0;
}