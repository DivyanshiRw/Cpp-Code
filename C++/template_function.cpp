#include<iostream>
using namespace std;
 
float funcAverage(int a, int b){
    float avg= (a+b)/2.0; 
    return avg;
}
float funcAverage2(int a, float b){
    float avg= (a+b)/2.0; 
    return avg;
}

//using template
template<class T1, class T2>
float funcAvg(T1 a, T2 b){
    float avg= (a+b)/2.0; 
    return avg;
}

//Swapping
template<class T>
void swapp(T &a, T &b){
    T temp=a;
    a=b;
    b=temp;
}

int main(){
    float a;
    a = funcAverage(5,2);
    printf("The average of these numbers is %.3f",a);          //%.3f will print 3 digit after decimal
    cout<<endl;
    float b;
    b = funcAverage2(5,2.4);
    printf("The average of these numbers is %f\n",b);
    

    float c;
    c=funcAvg(2.8,5);
    cout<<"The average of these numbers is "<<c;
    
    cout<<endl;
    int x=5, y=7;
    swapp(x,y);
    cout<<"x = "<<x<<endl
    <<"y = "<<y;

    return 0;
}
