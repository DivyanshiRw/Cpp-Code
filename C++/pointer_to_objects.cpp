#include<iostream>
using namespace std;

class complex{
    int real, imaginary;
    public:
        void getdata(){
            cout<<"The real part is : "<<real<<endl;
            cout<<"The imaginary part is : "<<imaginary<<endl;
        }

        void setdata(int a, int b){
             real=a;
             imaginary=b;
        }
};

int main(){
    /*complex c;
    c.setdata(1,4);
    c.getdata();
    */

   complex *ptr=new complex;
   //(*ptr).setdata(1,4);
   ptr->setdata(1,4);
   //(*ptr).getdata();
   ptr->getdata();

   // Array of Objects
    complex *ptr1 = new complex[4]; 
    ptr1->setdata(1, 4); 
    ptr1->getdata();

    return 0;
}