#include<iostream>
using namespace std;

int main(){
    int marks[5]={95,93,97,94,96};
    int i=0;
    while (i<5){
        cout<<"The value of marks at index "<<i<<" is "<<marks[i]<<endl;
        i++;
    }
    marks[1]=90;
    cout<<"The changed value at index 1 is "<<marks[1]<<endl;
    //Pointer and array
    int *p=marks;
    cout<<"The value of marks[0] is "<<*p<<endl;
    cout<<"The value of marks[1] is "<<*(p+1)<<endl;
    cout<<"The value of marks[2] is "<<*(p+2)<<endl;
    cout<<"The value of marks[3] is "<<*(p+3)<<endl;
    cout<<"The value of marks[4] is "<<*(p+4)<<endl;

    return 0;
}