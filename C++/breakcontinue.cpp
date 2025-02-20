#include<iostream>
using namespace std;

int main(){
    for (int i=0;i<=10;i++){
        cout<<i<<endl;
        if (i==5)
            break;        //using break statement
    }
    cout<<endl;
    int a;
    for (a=0;a<11;a++){
        
        if (a==5)
            continue;       //using continue statement
        cout<<a<<endl;

    }
    return 0;
}