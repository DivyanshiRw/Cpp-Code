#include<iostream>
using namespace std;

class Employee{
    int id;
    int salary;
  public:
       void setid(void){
        salary=125;
        cout<<"Enter ID of Employee : "<<endl;
        cin>>id;
       }

       void getid(){
        cout<<"The ID of this Employee is : "<<id<<endl;
       }
};

//Passing objects as function arguments
class complex{
    int a;
    int b;
    public:
        void setdata(int v1, int v2){
            a=v1;
            b=v2;
        }

        void setdatabysum(complex o1, complex o2){
            a=o1.a + o2.a;
            b=o1.b + o2.b;
        }

        void printnumber(){
            cout<<"Your Complex number is : "<<a<<" + "<<b<<"i "<<endl;
        }

};

int main(){
    Employee fb[4];
    for (int i=0; i<4; i++){
        fb[i].setid();
        fb[i].getid();

    }

    cout<<endl;
    cout<<endl;

    //Passing objects as function arguments
    complex c1, c2, c3;
    c1.setdata(1,2);
    c1.printnumber();

    c2.setdata(3,4);
    c2.printnumber();

    c3.setdatabysum(c1, c2);
    c3.printnumber();
    
    return 0;
}
