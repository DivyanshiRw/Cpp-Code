#include<iostream>
using namespace std;

int main(){

    //For loop
    for (int i=1;i<=40;i++)
    {
        cout<<i<<endl;

    }
    
    //While loop
    int a=0;
    while (a<10){
        cout<<a<<endl;
        a++;
    }

    //do while loop
    int c=1;
    do{
        cout<<c<<endl;
        c++;
    }
    while (false);

    //Multiplication table of 6 using loop
    int i;
    int n=6;
    cout<<"Multiplication table of 6"<<endl;
    for (i=1;i<=10;i++)
    {
        cout<<i*n<<endl;
    }

    return 0;

}