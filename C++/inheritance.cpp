#include<iostream>
using namespace std;

//Base Class
class employee{
      public:
      int id;
      float salary;
      employee(){};
      employee(int inpid){
        id=inpid;
        salary=15000;
      }
};

//Creating a programmer class derived from employee base class
class programmer: public employee{
        public:
        int languagecode;

        programmer(int inpid){
            id=inpid;
            languagecode=5;
        }

        void getdata(){
            cout<<id<<endl;
        }
};


int main(){
    employee harry(1),rohan(2);
    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;
    programmer skill(10);
    cout << skill.languagecode<<endl;
    cout << skill.id<<endl;
    skill.getdata();
    
    return 0;
}