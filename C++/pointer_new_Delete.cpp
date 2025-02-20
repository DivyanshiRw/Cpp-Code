#include<iostream>
using namespace std;

int main(){
    // Basic Example
    int a = 4;
    int* ptr = &a;
    cout<<"The value of a is "<<*(ptr)<<endl;

    //new keyword
    float *p = new float(40.78);
    cout << "The value at address p is " << *(p) << endl;
   
    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;
    
    //delete operator
    int *ar = new int[3];
    ar[0] = 10;
    *(ar+1) = 20;
    ar[2] = 30;
    delete[] ar;
    cout << "The value of arr[0] is " << ar[0] << endl;
    cout << "The value of arr[1] is " << ar[1] << endl;
    cout << "The value of arr[2] is " << ar[2] << endl;
  
    return 0;
}
