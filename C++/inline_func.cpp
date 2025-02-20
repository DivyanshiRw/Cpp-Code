#include<iostream>
using namespace std;

inline int product(int a, int b){
    return a*b;
}

//default argument
float moneyreceived(float currentmoney, float factor=1.04){
    return currentmoney*factor;
}

int main(){
    int a,b;
    cout<<"Enter a and b: ";
    cin>>a>>b;
    cout<<"The product of the given numbers is: "<<product(a,b)<<endl;
    cout<<"The product of the given numbers is: "<<product(a,b)<<endl;
    float money=100000;
    cout<<"If you have "<<money<<"Rs in bank, then you will get: "<<moneyreceived(money)<<endl;
    cout<<"For VIP: If you have "<<money<<"Rs in bank, then you will get: "<<moneyreceived(money,1.1)<<endl;
    
    return 0;
}