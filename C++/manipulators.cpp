#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int a=5,b=37,c=1245;
    cout<<"Value of a without setw : "<<a<<endl;
    cout<<"Value of b without setw : "<<b<<endl;
    cout<<"Value of c without setw : "<<c<<endl;

    cout<<"Value of a with setw : "<<setw(4)<<a<<endl;
    cout<<"Value of b with setw : "<<setw(4)<<b<<endl;
    cout<<"Value of c with setw : "<<setw(4)<<c<<endl;


}
