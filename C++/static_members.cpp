#include<iostream>
using namespace std;

class Employee{
    int id;
    static int count;   //can't initialize count here--- will give SYNTAX ERROR

   public:
        void setdata(){
            cout<<"Enter ID : "<<endl;
            cin>>id;
            count++;
        }

        void getdata(){
            cout<<"The ID of employee is : "<<id<<endl<<"This is Employee no. : "<<count<<endl;
        }

        //STATIC FUNCTION
        static void getcounter(){
            //cout<<id;   //throws an error
            cout<<"Value of Counter is : "<<count<<endl;
        }

};

//count is STATIC DATA MEMBER of class Employee
int Employee:: count;   //Default value is 0
     //can initialize count over here like count=1000 ---> ALLOWED

int main(){
    Employee harry, rohan, lovish;

    /*harry.id=1;
    harry.count=1;*/       //can't do these since id and count are private

    harry.setdata();
    harry.getdata();
    Employee::getcounter();

    rohan.setdata();
    rohan.getdata();
    Employee::getcounter();

    lovish.setdata();
    lovish.getdata();
    Employee::getcounter();


    
    return 0;
}