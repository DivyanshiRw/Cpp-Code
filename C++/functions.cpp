#include<iostream>
using namespace std;

/*Function Prototype*/
int sum(int a, int b);   //we can also write it as..... int sum(int, int)
void g();
void swap(int*, int*);

int main(){
    int num1,num2;
    //num1 and num2 are actual parameters
    cout<<"Enter first no. - ";
    cin>>num1;
    cout<<"Enter second no. - ";
    cin>>num2;
    cout<<"The sum is : "<<sum(num1,num2);

    g();
    
    //calling by reference
    int m,n;
    cout<<"Enter first no. to be swapped: ";
    cin>>m;
    cout<<"Enter second no. to be swapped: ";
    cin>>n;
    swap(m,n);
    cout<<"The numbers after swapping are: "<<"First no."<<m<<endl<<"Second no."<<n<<endl;
    return 0;
}

int sum(int a, int b){
    //formal parameters a and b will take values from actual parameters num1 and num2
    int c=a+b;
    return c;
}

void g(){
    cout<<"\nHello ! I am using Function.."<<endl;
}

void swap(int *m, int *n){
    int temp;
    temp=*m;
    *m=*n;
    *n=temp;
}

