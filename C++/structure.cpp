#include<iostream>
using namespace std;

struct emp{
    int empid;
    char firchar;
    float sal;
};

//union
union money{
    int rice;  //4 bytes
    char car;  //1 byte
};

typedef struct stud{
    int rollno;
    char favchar;
    float marks;
}student;
int main(){
    struct emp puran;
    puran.empid=003;
    puran.firchar='P';
    puran.sal=35000;

    student diya;
    diya.rollno=7;
    diya.favchar='D';
    diya.marks=95.6;

    union money m1;
    m1.rice=34;
    m1.car='M';

    cout<<puran.firchar<<endl;
    cout<<diya.marks<<endl;
    cout<<m1.rice<<endl;  //provide garbage value because only one value can be accessed at a time
    cout<<m1.car<<endl;

    enum meal{breakfast, lunch, dinner};
    cout<<lunch;

    
    return 0;
}